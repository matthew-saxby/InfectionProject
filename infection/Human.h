/**
 * Declaration of the Human class.
 *
 * @author Stefan Brandle
 * @date March 2012
 */

#include "Board.h"

#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

/**
 * @class Human
 * @brief The Human class declaration.
 */
class Human {
  public:
    Human(int initRow, int initCol, bool initInfected, Board* thisBoard);
    virtual ~Human();
    virtual void move();
    virtual void draw();

    // "Setters" and "getters"
    virtual void getLocation(int& row, int& col);
    virtual void setLocation(int row, int col);
    virtual void setInfected();
    virtual bool isInfected();

  protected:
    bool infected;                     // Track whether or not this human is infected.
    int row, col;                      // The row and column where this human is on the board.

    Board *board;                      // Pointer to the board so the human can ask the board whether
                                       // the human can move to a given location on the board.
};

#endif // HUMAN_H
