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

// ������� ����� ����� ������� 2 * P * r*(h + r)
// ������� ��'��� ������� P * pow(r, 2) * h