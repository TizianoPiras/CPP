/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ertiz <ertiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:28 by ertiz             #+#    #+#             */
/*   Updated: 2024/05/27 14:11:41 by ertiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

void	ft_replace(std::string *line, std::string to_r, std::string r_w)
{
	size_t	start_pos;

	while ((start_pos = (*line).find(to_r)) != std::string::npos)
	{
		(*line).erase(start_pos, to_r.length());
		(*line).insert(start_pos, r_w);
	}
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string extension = ".replacer";
	std::string s1;
	std::string s2;
	std::string fileContent;
	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		std::string append_file_name = filename;
		append_file_name.append(extension);
		std::ifstream inFile(filename.c_str());
		if (!inFile.is_open())
		{
			std::cerr << "Error in opening input file, maybe the file doesn't exist." << std::endl;
			return (-1);
		}
		std::streampos currentPos = inFile.tellg();
		inFile.seekg(0, std::ios::end);
		if (inFile.tellg() == 0)
		{
			std::cout << "Input file is empty" << std::endl;
			return 1;
		}
		else  
		{ 
			inFile.seekg(currentPos);
			std::ofstream outFile(append_file_name.c_str());
			if(!outFile.is_open())
			{
				std::cerr << "error in opening output file" << std::endl;
				return (-1);
			}
			while (getline(inFile, fileContent)) 
			{
				ft_replace(&fileContent, s1, s2);
				if (!std::cin.eof())
					outFile << fileContent;
			}
			outFile.close();
		}
		inFile.close();
	}
	else
	{
		std::cerr << "Insert a valid argument: a filename, the string you want replace and the string that will replace the first one. NB: IN THIS ORDER!" << std::endl;
	}
	return 0;
}
