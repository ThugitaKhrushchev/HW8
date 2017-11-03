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
  ifstream inf("encrypted.dat"); //declaring/opening the streams
  ofstream outf("decrypted.dat");
  if (!inf)
  {
    cout << endl << "An error has occured!" << endl;
  }

  int i = 0;
  string input;
  getline(inf, input);

  ostringstream buffer;

  for(int i = sentence_start; i < sentence_end; ++i)
  {
    buffer << input[i];
  }

  string result = buffer.str();
  int gent = input.length();

  replaceWord(result, wordToReplace1, replacedWord1);
  replaceWord(result, wordToReplace2, replacedWord2);
  replaceWord(result, wordToReplace3, replacedWord3);
  replaceWord(result, wordToReplace4, replacedWord4);
  replaceWord(result, wordToReplace5, replacedWord5);
  replaceWord(result, wordToReplace6, replacedWord6);

  eraseBadWord(result, badword1);
  eraseBadWord(result, badword2);
  eraseBadWord(result, badword3);
  eraseBadWord(result, badword4);
  result.erase(333, result.length());

  switchApostrophe(result);
  fifthIsSpecial(result);

  outf << result; //printing the string to the outfile
  inf.close(); //closing the streams
  outf.close();
  return(0);
}
