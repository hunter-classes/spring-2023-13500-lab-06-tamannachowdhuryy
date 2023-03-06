/*
Author: Tamanna Chowdhury
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab6B

*/
#include <iostream>
#include "caesar.h"
//this is part B which is showing how to shift the word on what number is given 
char shiftChar(char c, int rshift){
    int shiftedc = c + rshift;
    if(c >= 65 && c <= 90){ // these are all the CAPITIAL LETTERS
        if(shiftedc < 65){
            return shiftedc + 26;
        }
        if(shiftedc > 90){
            return shiftedc - 26;
        }
        return shiftedc;
    }
    if(c >= 97 && c <= 122){ /// these are for the lower case letters
        if(shiftedc < 97){
            return shiftedc + 26;
        }
        if(shiftedc > 122){
            return shiftedc - 26;
        }
        return shiftedc;
    }
    return c;
}
//the word will go through a for loop and print the word out after the shift 
std::string encryptCaesar(std::string plaintext, int rshift){
    std::string result;
    for (int i = 0; i < plaintext.length();i++){
        result += shiftChar(plaintext[i],rshift);
    }
    return result;
}

