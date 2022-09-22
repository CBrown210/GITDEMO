#include <iostream>
#include <string>
#include "objectContainer.hpp"
using namespace std;

void ProgramContainer::Program(){}

void ProgramContainer::testProgram(){
  cout << "Test success!";
}
int ProgramContainer::setNumber(int input){
  number = input;

  return number;  
}