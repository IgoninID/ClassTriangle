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
    cout << "\n";

    FirstTri.set_x1_coord(56);
    cout << FirstTri.get_x1_coord() << "\n";
    print_triangle(FirstTri);
    cout << "\n";

    Triangle Second[10];
    Second[2].set_x3_coord(22);
    print_triangle(Second[2]);
    cout << "\n";

    Triangle* Third = new Triangle[3];
    Third[1].set_sideA(25);
    print_triangle(Third[1]);
    delete[] Third;
    cout << "\n";

    Triangle* Fourth[3];
    for (int i = 0; i < 3; i++)
    {
        Fourth[i] = new Triangle(34, 56, 78);
        cout << Fourth[i] -> to_string() << "\n";
    }
    for (int i = 0; i < 3; i++)
    delete Fourth[i];

    return 0;
}