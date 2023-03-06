#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
// Task A
  char char1 = shiftChar('z', 5);
  char char3 = shiftChar('y', 5);
  char char2 = shiftChar('a', 5);
 

  std::cout << "Task A: ShiftChar: " << char1 << std::endl;
  std::cout << "Task A: ShiftChar: " << char2 << std::endl; 
  std::cout << "Task A: ShiftChar: " << char3 << std::endl; 
  
  //TASK B
  std::cout << "Task B: encrptCaesar(\"Way to Go!\", 5) = " << encryptCaesar("Way to Go!", 5) << std::endl;
  std::cout << "TASK B: encrptCaesar(\"Hello, World!\", 10) = " << encryptCaesar("Rovvy, Gybvn!", 10) <<  std::endl;
  
  //TASK C
  std::cout << "Task C: encryptVigenere(\"Hello, World!\", \"cake\") = " << encryptVigenere("Hello, World!", "cake") << std::endl;
  std::cout << "Task C: encryptVigenere(\"Jackdaws love my big sphinx of quartz\", \"amazing\") = " << encryptVigenere("Jmcjlncs xoum ze bug rxuonj oe yhgrfz", "amazing")  << std::endl;  
  //TASK D
  std::cout << "Task D: decryptCaesar(Bfd yt Lt!, 5) = " << decryptCaesar("Bfd yt Lt!", 5) << std::endl;
  std::cout << "Task D: decryptVigenere(Jevpq, Wyvnd!, 5) = " << decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
  return 0;
}

