#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("shiftChar"){
  CHECK(shiftChar('W', 5) == 'B');
  CHECK(shiftChar('o', 10) == 'y');
  CHECK(shiftChar('!', 15) == '!');
}

TEST_CASE("Caesar Cipher Encryption"){
CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
CHECK(encryptCaesar("Way to Go!", 5)== "Bfd yt Lt!");
}

TEST_CASE("Vigenere Cipher Encryption"){
CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
CHECK(encryptVigenere("Jackdaws love my big sphinx of quartz", "amazing") == "Jmcjlncs xoum ze bug rxuonj oe yhgrfz");  
}

TEST_CASE("Decryption"){
CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}


