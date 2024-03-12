#pragma once
#include "figure_in_space.h"
class cylinder: public figure_in_space
{
private:
	double radius;
	double height;
public:
	cylinder();

	cylinder(double radius_, double height_);

	double const total_surface_area()override;

	double const figure_volume()override ;
};

// формула площі повної поверхні 2 * P * r*(h + r)
// формула об'єму циліндра P * pow(r, 2) * h