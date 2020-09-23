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
  //double word scores
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      //triple word scores
      if (i % 7 == 0 && j % 7 == 0 && i != 7 && j != 7) {
        board[i][j] = Tile('%', 0);
        board[14-i][j] = Tile('%', 0); 
        board[i][14-j] = Tile('%', 0);
        board[14-i][14-j] = Tile('%', 0);
      }
      //double word scores
      if (j == i && i < 5 && i > 0) {
        board[i][j] = Tile('$', 0); 
        board[14-i][j] = Tile('$', 0);
        board[i][14-j] = Tile('$', 0);
        board[14-i][14-j] = Tile('$', 0);
      } 
    }
  }
}

void Board::printBoard() {
  cout << "Here is the board!" << endl;
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      if (board[i][j].getLetter() == '%')
        cout << "[%]";
      else if (board[i][j].getLetter() == '$')
        cout << "[$]";
      else
        cout << "[ ]";
    }
    cout << endl;
  }
}

char Board::getTileChar(int x, int y) {
  return board[x][y].getLetter();
}

/** Tile Members **/
Tile::Tile(char let, int val) {
  letter = let;
  value = val;
}

char Tile::getLetter() {
  return letter;
}

/** Player Members **/
/*Player::Player() {
  cout << "Hello new player! What is your name?"
  cin >> name;
  
}*/


/** Bag Members **/
Bag::Bag() {
  Node* head = new Node;
  head->next = nullptr;
  front = head;
  rear = head;
  fillBag();
}

//~Bag();
void Bag::fillBag() {
  Tile tempBag[3] = {Tile('A', 1), Tile('B', 2), Tile('C', 3)};
  for (int i = 0; i < 3; i++) {
    enqueue(tempBag[i]);
    cout << "enqueueing " << tempBag[i].getLetter() << endl;
  }
}
//void shuffle();
void Bag::enqueue(Tile val) {
  rear->bagTile = val;
  Node* temp = new Node;
  temp->next = nullptr;
  rear->next = temp;
  rear = temp;
}
//Tile dequeue();
//bool isEmpty();
//int countNodes();


void Bag::displayBag() {
  cout << "The tiles in the bag are:" << endl;
  Node* currNode = front;
  while (currNode != rear) {
    //cout << "b" << endl;
    cout << currNode->bagTile.getLetter() << endl;
    //cout << "m" << endl;
    currNode = currNode->next;
    //cout << "e" << endl;
  }
}