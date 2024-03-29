/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emollebr <emollebr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:11:19 by emollebr          #+#    #+#             */
/*   Updated: 2024/02/26 14:11:20 by emollebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        exit(EXIT_FAILURE);
    }
     if (inFile.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "Error: File is empty." << std::endl;
        inFile.close();
        exit(EXIT_FAILURE);
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: Unable to create output file." << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        outFile << line << std::endl;
    }

    std::cout << "Replacement completed successfully. Output written to " << filename << ".replace" << std::endl;

    inFile.close();
    outFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return EXIT_FAILURE;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceInFile(filename, s1, s2);

    return 0;
}
