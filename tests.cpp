#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


//TASK B
TEST_CASE("TASK B: Caesar Cipher Encryption"){
CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
CHECK(encryptCaesar("Way to Go!", 5)== "Bfd yt Lt!");
}
//TASK C
TEST_CASE("TASK C: Vigenere Cipher Encryption"){
CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
CHECK(encryptVigenere("Jackdaws love my big sphinx of quartz", "amazing") == "Jmcjlncs xoum ze bug rxuonj oe yhgrfz");  
}
//TASK D
TEST_CASE("TASK D: Decryption"){
CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}


