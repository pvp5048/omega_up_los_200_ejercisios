//424. Getting the numbers!
#include <iostream>
#include <map>
#include <sstream>

int main() {
    std::map<std::string, int> wordToNumber = {
        {"cero", 0}, {"uno", 1}, {"dos", 2}, {"tres", 3}
    };

    std::string line;
    while (std::getline(std::cin, line)) {
        std::istringstream iss(line);
        std::string word;
        bool firstWord = true;

        while (iss >> word) {
            if (!firstWord) {
                std::cout << " ";
            }
            if (wordToNumber.find(word) != wordToNumber.end()) {
                std::cout << wordToNumber[word];
            } else {
                std::cout << word;
            }
            firstWord = false;
        }
        std::cout << std::endl;
    }

    return 0;
}
