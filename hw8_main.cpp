// Programmers: Sayok Das and Mark Daming
// File: hw8_main.cpp
// Purpose:  This file contains the main function for the
//          for the program that decodes an encrypted message.

#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<sstream>
#include<algorithm>
#include "hw8_header.h"
using namespace std;

int main()
{
  ifstream inf("encrypted.dat");
  ofstream outf("decrypted.dat");
  if (!inf)
  {
    cout << endl << "An error has occured!" << endl;
  }

  int i = 0;
  int words = 1;
  int pos;
  int sentences = 0;
  int she = 0;
  int her = 0;
  int my = 0;
  int there = 0;
  int you = 0;
  int frogs = 0;

  string input;
  getline(inf, input);

  ostringstream buffer;

  for(int i = 0; i < 500; ++i)
  {
    buffer << input[i];
  }

  string result = buffer.str();
  int gent = input.length();

  eraseBadWord(result, badword1);
  eraseBadWord(result, badword2);
  eraseBadWord(result, badword3);
  eraseBadWord(result, badword4);

  switchApostrophe(result);
  outf << result;

  return(0);
}
