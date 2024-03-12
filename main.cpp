#include "cylinder.h"
#include "cone.h"
#include "elliptical_cylinder.h"

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout << "Виконав студент 1 курсу Сторожук Назар Валерійович Группи ІР-12 3 підгрупи" << endl;
    cout << "Варіант 13 згідно списків" << endl << "Рівень складності: Б" << endl << endl;

    double cylinder_radius;
    double cone_radius;
    double cylinder_height;
    double cone_height;
    double elliptical_cylinder_x;
    double elliptical_cylinder_y;
    double elliptical_cylinder_a;
    double elliptical_cylinder_b;
    double elliptical_cylinder_height;

    char restart = 'y';

    while (restart == 'y') {
        cout << "Enter the radius for cylinder: ";
        cin >> cylinder_radius;
        cout << "Enter the cylinder height: ";
        cin >> cylinder_height;

        cout << "Enter the radius for cone: ";
        cin >> cone_radius;
        cout << "Enter the cone height: ";
        cin >> cone_height;

        cout << "Enter the x for elliptical cylinder: ";
        cin >> elliptical_cylinder_x;
        cout << "Enter the y for elliptical cylinder: ";
        cin >> elliptical_cylinder_y;

        cout << "Enter the a for elliptical cylinder: ";
        cin >> elliptical_cylinder_a;
        cout << "Enter the b for elliptical cylinder: ";
        cin >> elliptical_cylinder_b;
        cout << "Enter the elliptical cylinder height: ";
        cin >> elliptical_cylinder_height;
        cout << endl;

        figure_in_space* A = new cylinder(cylinder_radius, cylinder_height);
        figure_in_space* B = new cone(cone_radius, cone_height);
        figure_in_space* C = new elliptical_cylinder(elliptical_cylinder_x, elliptical_cylinder_y, elliptical_cylinder_a, elliptical_cylinder_b, elliptical_cylinder_height);

        double surface_cylinder_area = A->total_surface_area();
        double cylinder_volume = A->figure_volume();

        cout << "Cylinder" << endl;
        cout << "Cylinder surface area: " << surface_cylinder_area << endl;
        cout << "Cylinder volume: " << cylinder_volume << endl << endl;

        double surface_cone_area = B->total_surface_area();
        double cone_volume = B->figure_volume();
        cout << "Cone" << endl;
        cout << "Cone surface area: " << surface_cone_area << endl;
        cout << "Cone volume: " << cone_volume << endl << endl;

        double elliptical_cylinder_surface_area = C->total_surface_area();
        double elliptical_cylinder_volume = C->figure_volume();
        cout << "elliptical cylinder" << endl;
        cout << "elliptical cylinder surface area: " << elliptical_cylinder_surface_area << endl;
        cout << "elliptical cylinder volume: " << elliptical_cylinder_volume << endl << endl;

        delete A;
        delete B;
        delete C;

        cout << "Do you want to restart? y/n: ";
        cin >> restart;
    }
    return 0;
}
