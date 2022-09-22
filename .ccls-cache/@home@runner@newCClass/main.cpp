#include <iostream>
#include <string>
#include "objectContainer.hpp"
using namespace std;

int main() {
  int switcher = 0;
  ProgramContainer prog;
  cout << endl << "      Select Program" << endl;
  cout << "Program 1 - testProgram" << endl;
  cout << "Program 2 - setNumber" << endl;
  cout << "Program 3 - Not Implemented" << endl;
  cout << "Program 4 - Not Implemented" << endl;
  cout << "Program 5 - Not Implemented" << endl;
  cout << "       99 - Exit" << endl;
  cout << "      :";
  cin >> switcher;
  cout << endl;

  
  switch(switcher){
    case(0):
      cout << "Please enter a valid number.";
      break;
    case(1):
      prog.testProgram();
      break;
    case(2):
      int inputNum;
      int newNum;
      cout << "Gib number: ";
      cin >> inputNum;
      cout << endl;
      newNum = prog.setNumber(inputNum);
      cout << "New number: " << newNum << endl;;
      break;
    case(3):
      cout << "Not implemented";
      break;
    case(4):
      cout << "Not implemented";
      break;
    case(5):
      cout << "Not implemented";
      break;
    case(99):
      cout << "Goodbye.";
      break;
    
    
  }
  

  
}