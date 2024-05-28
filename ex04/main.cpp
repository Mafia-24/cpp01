/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 06:17:54 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/28 08:02:04 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_occurences(std::string& line, std::string to_replace, std::string replacement)
{
	size_t	position = 0;

	position = line.find(to_replace, position);
	while (position != std::string::npos)
	{
		line.erase(position, to_replace.length());
		line.insert(position, replacement);
		position += replacement.length();
		position = line.find(to_replace, position);
	}
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "This program takes 3 arguments : <filename> <String To Replace> <String To Replace By.>" << std::endl;
		return (1);
	}

	std::ifstream fileIn;
	std::ofstream fileOut;

	std::string to_replace = av[2];
	std::string replacement = av[3];

	fileIn.open(av[1]);
	if (!fileIn.is_open())
	{
		std::cout << "An error has occured while oppening the given file!" << std::endl;
		return (1);
	}
	
	std::string outFileName;
	
	outFileName.append(av[1]);
	outFileName.append(".replace");

	fileOut.open(outFileName, std::ofstream::out | std::ofstream::trunc);
	if (!fileOut.is_open())
	{
		std::cout << "An error has occured while oppening the replacement file!" << std::endl;
		return (1);
	}
	
	std::string fileContent;
	std::string line;
	
	while (getline(fileIn, line))
	{
		if (!fileIn.eof())
			line.append ("\n");
		fileContent.append (line);
	}
	
	replace_occurences(fileContent, to_replace, replacement);
	fileOut << fileContent;
	
	return 0;
}
