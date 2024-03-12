#include "cylinder.h"

cylinder::cylinder()
{
	radius = 0;
	height = 0;
}


cylinder::cylinder(double radius_, double height_):figure_in_space()
{
	radius = radius_;
	height = height_;
}

double const cylinder::total_surface_area()
{
	double sum = 2 * M_PI * radius * (height + radius);
	return sum;
}

double const cylinder::figure_volume()
{
	double sum1 = M_PI * pow(radius, 2) * height;
	return sum1;
}


