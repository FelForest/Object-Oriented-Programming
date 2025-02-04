#pragma once

class Rectangle
{
public :
	Rectangle(float x, float y);

	float GetArea();

	float GetSize();

private:
	float x = 0;
	float y = 0;

	float area = 0;
	float size = 0;

};