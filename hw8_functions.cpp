// Programmers: Sayok Das and Mark Daming
// File: hw8_functions.cpp
// Purpose:  This file contains the function definition for the
//          for the program that decodes an encrypted message.

#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<sstream>
#include<algorithm>
#include "hw8_header.h"
using namespace std;

void replaceWord(string & result, const string wordToReplace,
  const string replacedWord)
{
  int position = result.find(wordToReplace);
  while(position != std::string::npos)
  {
    result.replace(position, wordToReplace.length(), replacedWord);
    position = result.find(wordToReplace, position);
  }
  return;
}

void eraseBadWord(string & result, const string badword)
{
  int p = result.find(badword);
  while (p != std::string::npos)
  {
    result.erase(p, badword.length()+1);
    p = result.find(badword, p);
  }
  return;
}

void moveWord(string & result, int start, int end)
{
  return;
}

void switchApostrophe(string & result)
{
  int i = 0;
  int total = 0;
  char temp;
  while (result.find("'",i) != -1)
  {
    total += i;

    i = result.find("'",i+1);
    temp = result[i+1];
    result[i+1] = '#';
    result[i] = temp;
  }
  replace( result.begin(), result.end(), '#', '\'' );
  return;
}

void fifthIsSpecial(string & result)
{
  int j = 0;
  for (int i=0;i<10;i++)
  {
    int temp = j;
    int newj;
    int dif;
    newj = result.find(".",j+1);
    dif = newj-j;
    j = result.find(".",j+1);
    if (j==-1)
    {
      j = temp;
    }
    if (i%2==0||i==0)
    {
      result[j] = '"';
    }
  }
  cout << endl << j << endl;
  return;
}
