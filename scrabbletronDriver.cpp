#include <iostream>
#include "scrabbletron.h"
using namespace std;

int main() {
  Board gameBoard;
  cout << "Welcome to scrabbletron!" << endl;
  cout << "Here is the board!" << endl;
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      if (gameBoard.getTileChar(i, j) == '%')
        cout << "[%]";
      else
        cout << "[ ]";
    }
    cout << endl;
  }
  return 0;
}
