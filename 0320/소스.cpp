#include<iostream>
using namespace std;

class Circle { //Circle �����
public:
	int radius;
	int innerRadius;
	int outerRadius;
	double getArea();
	double getinnerArea();
};

double Circle::getArea() { //Circle ������
	return 3.14 * radius * radius;
}

double Circle::getinnerArea() {
	return 3.14 * innerRadius * innerRadius;
}

int main() {
	Circle donut; //��ü donut ����
	donut.radius = 1; //donut�� ��� ���� ����
	double area = donut.getArea(); //donut�� ��� �Լ� ȣ��
	cout << "donut ������ " << area << "\n";

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza ������ " << area << "\n";

	Circle donut_two;
	donut_two.innerRadius = 3;
	donut_two.outerRadius = 5;
	area = donut_two.getinnerArea();
	cout << "���� ���� ������ " << area << "\n";

}