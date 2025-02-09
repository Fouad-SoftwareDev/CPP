/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:02:42 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/21 15:17:46 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdahouk <fdahouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:27:44 by fdahouk           #+#    #+#             */
/*   Updated: 2025/01/21 15:01:29 by fdahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int argc,char **argv)
{
	std::ofstream	wfile;
	std::ifstream 	rfile;
	std::string		line;
	std::string		content;
	std::string		mcontent;
	std::string		ofn;
	
	if (argc != 4)
	{
		std::cout << "Number of argument should be 3" << std::endl;
		return (-1);
	}
	else
	{
		rfile.open(argv[1]);
		if (!rfile.is_open())
    		{
    		    std::cout << "Failed to open file: " << argv[1] << " enter an valid file" << std::endl;
    		    return (-1);
    		}
		 if (rfile.is_open())
 		 {
 		   	while (std::getline (rfile,line))
 		   	{
 		   	  content += line + "\n"; 
 		   	}
 		   	rfile.close();
 		 }
		 mcontent = replace_occurrences(content, argv[2],argv[3]);
		 ofn = (std::string)argv[1] + ".replace";
		 wfile.open(ofn.c_str());
		 wfile << mcontent ;
		 wfile.close();
	}
}