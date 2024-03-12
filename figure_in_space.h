#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
#include<Windows.h>

using namespace std;

// ������������ �����
class figure_in_space
{
public:

	// ³��������� ����������
	virtual ~figure_in_space() {}

	// ����� �������� �������
	virtual const double total_surface_area() = 0;
	virtual const double figure_volume() = 0;
};

