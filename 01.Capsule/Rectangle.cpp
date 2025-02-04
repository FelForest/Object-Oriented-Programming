#include "Rectangle.h"

Rectangle::Rectangle(float x, float y)
	: x(x), y(y), area(x* y), size(2*x + 2*y)
{

}

float Rectangle::GetArea()
{
	return area;
}

float Rectangle::GetSize()
{
	return size;
}
