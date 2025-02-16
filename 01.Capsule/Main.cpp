#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Time.h"
#include "NameCard.h"

int main()
{
	Rectangle rectangle = Rectangle(3.0f, 4.0f);    // 가로, 세로 길이 전달.
	std::cout << "면적: " << rectangle.GetArea() << "\n";
	std::cout << "둘레: " << rectangle.GetSize() << "\n";

	Circle circle = Circle(5.0f);                 // 원의 반지름 전달.
	std::cout << "면적: " << circle.GetArea() << "\n";
	std::cout << "둘레: " << circle.GetSize() << "\n";

	std::cout << "\n";

	Time time1 = Time(10);            
	Time time2 = Time(10, 20);        
	Time time3 = Time(10, 20, 30);    

	time2.ShowTime();
	time2.ShowTimeInSeconds();

	std::cout << "\n";

	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "서울시...", "Freelancer");
	jang.ShowData();

	std::cin.get();
}