#include <iostream>
#include <fstream>
#include <vector>
#include <string>

bool areAllDifferent(int a, int b, int c) {
    return (a != b) && (b != c) && (a != c);
}

bool isSumOdd(int a, int b, int c) {
    return ((a + b + c) % 2 != 0);
}

bool isValidCode(int a, int b, int c) {
    return areAllDifferent(a, b, c) && isSumOdd(a, b, c);
}

int main() {
    std::cin >> "Enter file to process: " <<endl;  
    std::cout << filename std::endl; 
    if (!file) {
        std::cout << "ERROR" << std::endl;
        return 1;
    } 


    std::vector<std::string> validCodes; 
    int num1, num2, num3;

    while (file >> num1 >> num2 >> num3) {
        if (isValidCode(num1, num2, num3)) {
            validCodes.push_back(std::to_string(num1) + " " + std::to_string(num2) + " " + std::to_string(num3));
        }
    }

    file.close();

    for (int i = validCodes.size() - 1; i >= 0; --i) {
        std::cout << validCodes[i] << std::endl;
    }

    return 0;
}
