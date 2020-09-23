#ifndef SCRABBLETRON_H
#define SCRABBLETRON_H

using namespace std;

class Tile {
private:
  char letter;
  int value;
public:
  Tile(char let = '!', int val = 0);
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
public:
  Board();
  char getTileChar(int x, int y);
  void printBoard();
  //Board(const Board& orig);
  //~Board();
  //const Board& operator=(const Board& orig);
  //void clearBoard();
  //void takeTurn();
  //bool emptyBag();
};

class Bag {
private:
  struct Node {
    Tile bagTile;
    Node* next;
  };
  Node* front;
  Node* rear;
public:
  Bag();
  //~Bag();
  void fillBag();
  //void shuffle();
  void enqueue(Tile val);
  //Tile dequeue();
  //bool isEmpty();
  //int countNodes();
  void displayBag();
};

/*
class Player {
private:
  string name;
  int points;
  Tile hand[10];
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
