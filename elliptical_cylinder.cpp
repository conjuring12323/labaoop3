#include "elliptical_cylinder.h"

// по умолчанию
elliptical_cylinder::elliptical_cylinder()
{
	x = 0;
	y = 0;
	a = 0;
	b = 0;
	height = 0;
}

// инициализации
elliptical_cylinder::elliptical_cylinder(double x_, double y_, double a_, double b_,double height_)
{
	x = x_;
	y = y_;
	a = a_;
	b = b_;
	height = height_;
}

double const elliptical_cylinder::total_surface_area()
{
	double x_squared_over_a_squared = pow(x / a, 2);
	double y_squared_over_b_squared = pow(y / b, 2);
	double sum = x_squared_over_a_squared + y_squared_over_b_squared;
	return sum;
}

double const elliptical_cylinder::figure_volume()
{
	double volume = M_PI * a * b * height;
	return volume;
}
