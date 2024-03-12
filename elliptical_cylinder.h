#pragma once
#include "figure_in_space.h"
class elliptical_cylinder:public figure_in_space
{
private:
	double x;
	double y;
	double a;
	double b;
	double height;
public:
	elliptical_cylinder();

	elliptical_cylinder(double x_, double y_,double a_,double b_,double height_);

	double const total_surface_area()override;

	double const figure_volume()override;
};

