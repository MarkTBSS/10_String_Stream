#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> vectorAndSS(std::string str) {
    std::vector<int> markIntVector;
    int markValue;
    char markChar;
    std::stringstream ss(str);
    
    for (;;) {
        if (ss >> markValue) {
            markIntVector.push_back(markValue);
        } else { break; }

        if (ss >> markChar) {
            if (markChar != ',') { break; }
        } else { break; }
    }
    
    return markIntVector;
}

int main() {
    std::string str;  
    std::cin >> str;
    // Call function 
    std::vector<int> result = vectorAndSS(str);
    // Print vector
    for (int eachValue : result) {
        std::cout << eachValue << std::endl;
    }

    return 0;
}