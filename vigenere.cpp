#include <iostream>
#include <string>
#include <cctype>
#include "vigenere.h"
#include "caesar.h"

#include <iostream>
#include "vigenere.h"


std::string encryptVigenere(std::string plaintext, std::string keyword) {
    std::string result;
    for (int i = 0, j = 0; i < plaintext.size(); ++i) {
        char current = plaintext[i];
        if (isalpha(current)) {
            char key = keyword[j];
            key = tolower(key) - 'a';
            char shifted = ((current + key - 'a') % 26) + 'a';
            result += shifted;
            j = (j + 1) % keyword.size();
        } else {
            result += current;
        }
    }
    return result;
}

