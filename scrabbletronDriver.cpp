#include <iostream>
#include "scrabbletron.h"
using namespace std;

int main(int argc, char * argv[]) {
  Board gameBoard;
  cout << "Welcome to scrabbletron!" << endl;
  gameBoard.printBoard();
  Bag gameBag;
  gameBag.displayBag();
  return 0;
}
