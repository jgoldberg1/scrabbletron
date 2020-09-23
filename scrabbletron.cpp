#include <iostream>
#include "scrabbletron.h"
using namespace std;
/** Special Tile Guide
Some Tile objects have nonalpha characters. Here is what the nonalpha characters
mean:
! = empty board tile
@ = double letter board tile
# = triple letter board tile
$ = double word board tile
% = triple word board tile
^ = wild card tile
**/

/** Board Members **/
Board::Board() {
  board[0][0] = Tile('%', 0); //trying to call the tile constructor here, idk if that will work
  board[0][7] = Tile('%', 0);
  board[0][14] = Tile('%', 0);
  board[7][0] = Tile('%', 0);
  board[14][0] = Tile('%', 0);
  board[7][14] = Tile('%', 0);
  board[14][14] = Tile('%', 0);
  board[14][7] = Tile('%', 0);
}

char Board::getTileChar(int x, int y) {
  return board[x][y].getLetter();
}

/** Tile Members **/
Tile::Tile(char let = '!', int val = 0) {
  letter = let;
  value = val;
}

char Tile::getLetter() {
  return letter;
}
