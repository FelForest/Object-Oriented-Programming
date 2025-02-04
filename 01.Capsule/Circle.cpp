#include "Circle.h"
#include <cmath>
#include <numbers>
Circle::Circle(float r)
    : r(r), area(r*r*3.14f), size(2*r*3.14f)
{
}

float Circle::GetArea()
{
    return area;
}

float Circle::GetSize()
{
    return size;
}
