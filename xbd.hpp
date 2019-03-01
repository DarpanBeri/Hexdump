/*********************************************************************
 Name: Zach Selchau
 File: xbd.hpp
 Notes: Header file containing required libraries and function prototypes.



 Name: Darpan Beri
 File: xbd.hpp
  Notes: Header file containing required libraries and function prototypes.
**********************************************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

int binaryToDecimal(string binaryString);

string binaryToAscii(string bin);

string decimalToHex(int num);

string decimalToBinary(int num);

string asciiToBinary(string str);

string binaryToHex(string binaryString);

string asciiToHex(string asciiString);

string decimalToAddress(int num);

string addSpacesToBinary(string binary);

string addSpacesToHex(string hex);
