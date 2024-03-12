#pragma once
#include "figure_in_space.h"

class cone: public figure_in_space
{
private:
	double radius;
	double height;
public:
	cone();
	
	cone(double radius_, double height_);

	double const total_surface_area()override;

	double const figure_volume()override;
};

// ������� ����� �������� ������ P * r * (r + sqrt(pow(r,2) + pow(h, 2)))
// ������� ��'��� ������ 1.0/3 * P * pow(r, 2) * h