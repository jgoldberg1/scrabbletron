#ifndef SCRABBLETRON_H
#define SCRABBLETRON_H

using namespace std;

class Tile {
private:
  char letter;
  int value;
public:
  Tile(char letter, int value);
  char getLetter();
  //Tile(const Tile& orig);
  //~Tile();
  //const Tile& operator=(const Tile& orig);
//  bool isModifier();
};

class Board {
private:
  Tile board[15][15];
  //int turnCount = 0;
  Tile bag[];
public:
  Board();
  char getTileChar(int x, int y);
  //Board(const Board& orig);
  //~Board();
  //const Board& operator=(const Board& orig);
  //void clearBoard();
  //void takeTurn();
  //bool emptyBag();
};
/*
class Player {
private:
  string name;
  int points;
  Player hand[10];
public:
  Player();
  Player(const Player& orig);
  ~Player();
  const Player& operator=(const Player& orig);
  void fillHand();
  void placeWord();
  void checkValidity();
}
*/
#endif
