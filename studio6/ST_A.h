#ifndef ST_A_H
#define ST_A_H

class ST_A{
    private: 
    int x1;
    int x2;

    public:
    ST_A(): x1(0), x2(0) {}
    int getX1() const;
    int getX2() const;

    ST_A& setX1(int);
    ST_A& setX2(int);

};

#endif