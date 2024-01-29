#include <cmath>
#ifndef TEST_H
#define TEST_H

class Point{
    private:
        int x;
        int y;
    public:
        Point();
        Point(int a, int b);
        Point(const Point& po);
        ~Point();
        void print() const;
        double function(int a, int b);

};

#endif