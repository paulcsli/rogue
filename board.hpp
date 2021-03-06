#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "chamber.hpp"

using namespace std;

class Board {
public:
  Board();
  ~Board();

  void PrintBoard();

private:
  static const char kHorizontalBorderSegment;
  static const char kVerticalBorderSegment;
  static const int kLength;
  static const int kWidth;
  static const int kCellsCount;
  static const string kTopBottomBorder;

  vector<vector<Cell*>> cells_;
  vector<Chamber*> chambers_;

  void PrintCells();
};

#endif
