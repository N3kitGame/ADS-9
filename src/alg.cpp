// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"
using namespace std;

BST<std::string> makeTree(const char* filename) {
  ifstream file(filename);
  if (!file.is_open()) {
    throw std::string("ERROR!");
  }
 string word = "";
 BST<std::string> bst;
  while (!file.eof()) {
 word = "";
    while (1) {
      char symb = file.get();
      if ((symb >= 65 && symb <= 90) || (symb >= 97 && symb <= 122)) {
 word += tolower(symb);
 } else {
        break;
      }
    }
 bst.AddValue(word);
  }
  return bst;
}
