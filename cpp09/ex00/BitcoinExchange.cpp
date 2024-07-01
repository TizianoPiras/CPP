/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:58:48 by ertiz             #+#    #+#             */
/*   Updated: 2024/06/26 15:06:12 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

bool isValidDate(const std::string &date) {
    // Estrai l'anno, il mese e il giorno dalla stringa della data
    int year, month, day;
    if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) {
        return false;
    }

    // Controlla la validità della data
    std::tm time_in = { 0, 0, 0, day, month - 1, year - 1900 }; // tm_year è anno dal 1900, tm_mon è mese da 0 a 11
    std::time_t t = std::mktime(&time_in);
    std::tm *time_out = std::localtime(&t);

    // Confronta le parti della data per verificare la correttezza
    return (time_out->tm_year == year - 1900 &&
            time_out->tm_mon == month - 1 &&
            time_out->tm_mday == day);
}

void BitcoinExchange::DataIn(const std::string &file_path) {
    std::ifstream file(file_path.c_str());
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << file_path << std::endl;
        return;
    }

    std::string line;
    bool isFirstLine = true;

    while (std::getline(file, line)) {
        if (isFirstLine) {
            isFirstLine = false;
            continue;
        }

        std::stringstream ss(line);
        std::string date;
        std::string str_value;

        if (std::getline(ss, date, ',') && std::getline(ss, str_value, ',')) {
            if (!isValidDate(date)) {
                std::cerr << "Error: invalid date format or non-existent date: " << date << std::endl;
                continue;
            }
            try {
                float value = std::stof(str_value);
                this->_database.insert(std::make_pair(date, value));
                std::cout << "date = " << date << "; value: " << str_value << std::endl;
            } catch (const std::invalid_argument &e) {
                std::cerr << "Error: invalid value in data file" << std::endl;
            }
        }
    }
    file.close();
}

void BitcoinExchange::DataOut(const std::string &file_path) {
    std::ifstream file(file_path.c_str());
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << file_path << std::endl;
        return;
    }
    std::string line;
    bool isFirstLine = true;
    while (std::getline(file, line)) {
        if (isFirstLine) {
            isFirstLine = false;
            continue;
        }

        std::stringstream ss(line);
        std::string date;
        std::string str_value;

        if (std::getline(ss, date, '|') && std::getline(ss, str_value, '|')) 
        {
            if (!isValidDate(date)) {
                std::cerr << "Error: invalid date format or non-existent date: " << date << std::endl;
                continue;
            }
            try {
                float value = std::stof(str_value);
                if (value <= 0) {
                    std::cerr << "Error: not a positive number." << std::endl;
                    continue;
                } else if (value > 1000000000) {
                    std::cerr << "Error: too large a number." << std::endl;
                    continue;
                }

                std::multimap<std::string, float>::iterator it = _database.lower_bound(date);
                if (it == _database.end() || it->first != date) {
                    if (it == _database.begin()) {
                        std::cerr << "Error: no available date before " << date << std::endl;
                        continue;
                    }
                    --it;
                }

                float exchange_rate = it->second;
                float result = value * exchange_rate;

                std::cout << date << " => " << value << " = " << result << std::endl;
            } catch (const std::invalid_argument &e) {
                std::cerr << "Error: invalid value in input file" << std::endl;
            }
        } 
        else 
        {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
    file.close();
}
