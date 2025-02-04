#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Time.h"
#include "NameCard.h"

int main()
{
	Rectangle rectangle = Rectangle(3.0f, 4.0f);    // ����, ���� ���� ����.
	std::cout << "����: " << rectangle.GetArea() << "\n";
	std::cout << "�ѷ�: " << rectangle.GetSize() << "\n";

	Circle circle = Circle(5.0f);                 // ���� ������ ����.
	std::cout << "����: " << circle.GetArea() << "\n";
	std::cout << "�ѷ�: " << circle.GetSize() << "\n";

	std::cout << "\n";

	Time time1 = Time(10);            // 10�� 0�� 0��.
	Time time2 = Time(10, 20);        // 10�� 20�� 0��.
	Time time3 = Time(10, 20, 30);    // 10�� 20�� 30��.

	time2.ShowTime();
	time2.ShowTimeInSeconds();

	std::cout << "\n";

	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "�����...", "Freelancer");
	jang.ShowData();

	std::cin.get();
}