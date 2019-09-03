
#ifndef WINNER_H
#define WINNER_H


class winner
{
public:
    winner();
    void setcoordinate(int x , int y);
    int convert(int x , int y);
    int setcoordinateX();
    int setcoordinateY();
    int getcoordinateX();
    int getcoordinateY();

private:
    int co[144][2];

};

#endif // WINNER_H
