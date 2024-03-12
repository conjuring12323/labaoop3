#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
#include<Windows.h>

using namespace std;

// Абстрактиний класс
class figure_in_space
{
public:

	// Віртуальний деструктор
	virtual ~figure_in_space() {}

	// чисто віртуальні функції
	virtual const double total_surface_area() = 0;
	virtual const double figure_volume() = 0;
};

