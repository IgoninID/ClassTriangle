#include <iostream>
#include "Triangle.h"

using namespace std;

void print_triangle(const Triangle &Trian)
{
    cout << Trian.to_string();
}

int main()
{
    Triangle FirstTri;
    print_triangle(FirstTri);
    return 0;
}