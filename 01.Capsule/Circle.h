#pragma once

class Circle
{
public:
	Circle(float r);

	float GetArea();

	float GetSize();

private:
	float r = 0;

	float area = 0;
	float size = 0;
};