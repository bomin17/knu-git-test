#include<iostream>
using namespace std;

class Circle { //Circle 선언부
public:
	int radius;
	int innerRadius;
	int outerRadius;
	double getArea();
	double getinnerArea();
};

double Circle::getArea() { //Circle 구현부
	return 3.14 * radius * radius;
}

double Circle::getinnerArea() {
	return 3.14 * innerRadius * innerRadius;
}

int main() {
	Circle donut; //객체 donut 생성
	donut.radius = 1; //donut의 멤버 변수 접근
	double area = donut.getArea(); //donut의 멤버 함수 호출
	cout << "donut 면적은 " << area << "\n";

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << "\n";

	Circle donut_two;
	donut_two.innerRadius = 3;
	donut_two.outerRadius = 5;
	area = donut_two.getinnerArea();
	cout << "내부 원의 면적은 " << area << "\n";

}