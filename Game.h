#ifndef GAME_H
#define GAME_H
#include "SquareBoard.h"
#include<QGraphicsScene>
#include<QGraphicsView>
#include "SquaresList.h"

class Game: public QGraphicsView{
    Q_OBJECT
public:
    //konstruktori
    Game(QWidget *parent = NULL);

    //javni atributi, lakse za getovanje i setovanje
    SquareBoard *squareBoard;
    QGraphicsScene *scene;
    //QString whosTurn;

    //javne metode
    void displayMainMenu();
public slots:
    void start();
    void back();
    void hs();
    //void swap();
};

#endif // GAME_H
