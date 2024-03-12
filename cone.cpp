#include "cone.h"


cone::cone()
{
	radius = 0;
	height = 0;
}

cone::cone(double radius_, double height_)
{
	radius = radius_;
	height = height_;
}

double const cone::total_surface_area()
{
	double sum = M_PI * radius * (radius + sqrt(pow(radius, 2) + pow(height, 2)));
	return sum;
}

double const  cone::figure_volume()
{
	double sum1 = 1.0 / 3 * M_PI * pow(radius, 2) * height;
	return sum1;
}
