class Rectangle {
private:
    double length;
    double height;
    static int count;
public:
    Rectangle(double length, double height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle& rect);
    static int getCount();
};

