#ifndef TEST_H
#define TEST_H
class Fraction{
    private:
        int number;
        int denom;
    public:
        Fraction(int num, int den);
        Fraction();
        Fraction(const Fraction& fract);
        ~Fraction();

        //접근자
        int getNumber() const;
        int getDenom() const;
        void print() const;

        void setNumber(int num);
        void setDenom(int den);

    private:
        void normalize();
        int gcd(int n, int m);
};
#endif