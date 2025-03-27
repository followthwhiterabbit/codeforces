using namespace std; 

#include <iostream>
#include <sstream>
#include <cctype>



std::string LongestWord(const std::string& sen) {
    std::stringstream ss;
    std::string longestWord, currentWord;

    for (char ch : sen) {
        if (isalnum(ch)) {  // Keep only letters and numbers
            ss << ch;
        } else if (!ss.str().empty()) {
            currentWord = ss.str();
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            ss.str("");  // Clear the stringstream
            ss.clear();
        }
    }

		
	
    currentWord = ss.str();
    if (currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    return longestWord;
}

int main() {
    std::cout << LongestWord("fun&!! time") << std::endl;   // Output: time
    std::cout << LongestWord("I love dogs") << std::endl;   // Output: love
    std::cout << LongestWord("Hello world123 567") << std::endl;  // Output: world123
    return 0;
}

