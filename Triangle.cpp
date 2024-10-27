#include <cmath>
#include <string>
#include "Triangle.h"

///
Triangle::Triangle() 
{
    x1_coord = 0;
    x2_coord = 0;
    x3_coord = 0;
    y1_coord = 0;
    y2_coord = 0;
    y3_coord = 0;
    side_A = 0;
    side_B = 0;
    side_C = 0;
}

///
Triangle::Triangle(double x1_coord, double x2_coord, double x3_coord, double y1_coord, double y2_coord, double y3_coord)
{
    set_x1_coord(x1_coord);
    set_x2_coord(x2_coord);
    set_x3_coord(x3_coord);
    set_y1_coord(y1_coord);
    set_y2_coord(y2_coord);
    set_y3_coord(y3_coord);
    side_A = 0;
    side_B = 0;
    side_C = 0;
}

///
Triangle::Triangle(double side_A, double side_B, double side_C)
{
    x1_coord = 0;
    x2_coord = 0;
    x3_coord = 0;
    y1_coord = 0;
    y2_coord = 0;
    y3_coord = 0;
    set_sideA(side_A);
    set_sideB(side_B);
    set_sideC(side_C);
}

///
void Triangle::set_x1_coord(double x)
{
    x1_coord = x;
}

///
void Triangle::set_x2_coord(double x)
{
    x2_coord = x;
}

///
void Triangle::set_x3_coord(double x)
{
    x3_coord = x;
}

///
void Triangle::set_y1_coord(double y)
{
    y1_coord = y;
}

///
void Triangle::set_y2_coord(double y)
{
    y2_coord = y;
}

///
void Triangle::set_y3_coord(double y)
{
    y3_coord = y;
}

///
void Triangle::set_sideA(double side)
{
    if (side >= 0)
        side_A = side;
    else
        side_A = 0;
}

///
void Triangle::set_sideB(double side)
{
    if (side >= 0)
        side_B = side;
    else
        side_B = 0;   
}

///
void Triangle::set_sideC(double side)
{
    if (side >= 0)
        side_C = side;
    else
        side_C = 0;   
}

///
double Triangle::get_x1_coord() const
{
    return x1_coord;
}

///
double Triangle::get_x2_coord() const
{
    return x2_coord;
}

///
double Triangle::get_x3_coord() const
{
    return x3_coord;
}

///
double Triangle::get_y1_coord() const
{
    return y1_coord;
}

///
double Triangle::get_y2_coord() const
{
    return y2_coord;
}

///
double Triangle::get_y3_coord() const
{
    return y3_coord;
}

///
double Triangle::get_sideA() const
{
    return side_A;
}

///
double Triangle::get_sideB() const
{
    return side_B;
}

///
double Triangle::get_sideC() const
{
    return side_C;
}

///
double Triangle::calc_side(double first_x, double first_y, double second_x, double second_y)
{
    return sqrt(((first_x-second_x)*(first_x-second_x))+((first_y-second_y)*(first_y-second_y))); // Возвращает длину стороны треугольника по формуле
}

///
double Triangle::calc_perim(double sideA, double sideB, double sideC)
{
    if ((sideA+sideB<=sideC)||(sideB+sideC<=sideA)||(sideA+sideC<=sideB)) // если сумма двух сторон треугольника меньше или равна третьей стороне
        return sideA+sideB+sideC; // Возвращает сумму трех сторон треугольника(периметр)
    else
        return 0;
}

///
double Triangle::calc_area(double sideA, double sideB, double sideC)
{
    if ((sideA+sideB<=sideC)||(sideB+sideC<=sideA)||(sideA+sideC<=sideB)) // если сумма двух сторон треугольника меньше или равна третьей стороне
        return sqrt(((sideA+sideB+sideC)/2)*(((sideA+sideB+sideC)/2)-sideA)*(((sideA+sideB+sideC)/2)-sideB)*(((sideA+sideB+sideC)/2)-sideC)); // Возвращает периметр треугольника по формуле Герона
    else
        return 0;
}

///
std::string Triangle::to_string() const
{
    std::string s = 
    "First vertex: " + std::to_string(x1_coord) + " " + std::to_string(y1_coord) + "\n" + 
    "Second vertex: " + std::to_string(x2_coord) + " " + std::to_string(y2_coord) + "\n" + 
    "Third vertex: " + std::to_string(x3_coord) + " " + std::to_string(y3_coord) + "\n" + 
    "First side: " + std::to_string(side_A) + "\n" + 
    "Second side: " + std::to_string(side_B) + "\n" + 
    "Third side: " + std::to_string(side_C) + "\n";
    return s;
}
