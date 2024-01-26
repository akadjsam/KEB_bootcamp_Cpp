#include <iostream>

using namespace std;

class Circle {
	private:
		double radius; //private은 오직 자기 자신의 클래스 내에서만 접근 가능, protected는 상속받은 클래스도 접근 가능
	public:
		double getRadius() const;
		double getArea() const;
		double getPerimeter() const;
		void setRadius(double value);
};
double Circle::getRadius() const{
	return radius;
}

double Circle::getArea() const{
	const double PI = 3.141592;
	return PI*radius*radius;
}

double Circle::getPerimeter() const{
	const double PI = 3.141592;
	return PI*2*radius;
}

void Circle::setRadius(double radius){
	this -> radius = radius;
}


int main() {
	Circle c;
	c.setRadius(10.0);
	cout << c.getPerimeter();

	return 0;
}