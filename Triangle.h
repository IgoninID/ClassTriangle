#pragma once
#include <string>

///
class Triangle
{
    private:
        double x1_coord;
        double x2_coord;
        double x3_coord;
        double y1_coord;
        double y2_coord;
        double y3_coord;
        double side_A;
        double side_B;
        double side_C;
    
    public:

        Triangle();

        Triangle(double x1_coord, double x2_coord, double x3_coord, double y1_coord, double y2_coord, double y3_coord);

        Triangle(double side_A, double side_B, double side_C);

        void set_x1_coord(double x);

        void set_x2_coord(double x);

        void set_x3_coord(double x);

        void set_y1_coord(double y);

        void set_y2_coord(double y);

        void set_y3_coord(double y);

        void set_sideA(double side);

        void set_sideB(double side);

        void set_sideC(double side);

        double get_x1_coord() const;

        double get_x2_coord() const;

        double get_x3_coord() const;
        
        double get_y1_coord() const;

        double get_y2_coord() const;

        double get_y3_coord() const;

        double get_sideA() const;

        double get_sideB() const;

        double get_sideC() const;

        std::string to_string() const;

        double calc_side(double first_x, double first_y, double second_x, double second_y);

        double calc_perim(double sideA, double sideB, double sideC);

        double calc_area(double sideA, double sideB, double sideC);
};