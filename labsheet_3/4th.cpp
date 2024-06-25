#include <iostream>
#include <cmath>

using namespace std;
#define PI 3.14
class circle
{
    float radius;

public:
    void get_radius(int r)
    {
        radius = r;
    }
    void display_area_circle()
    {
        cout << "Area of circle is: " << PI * radius * radius << endl;
    }
    void display_perimeter()
    {
        cout << "Perimeter of Circle is: " << 2 * PI * radius << endl;
    }
};
class triangle
{
private:
    float a, b, c;

public:
    void get_side_of_triangle(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void perimeter_of_triangle()
    {
        cout << "Perimeter of triangle is: " << a + b + c << endl;
    }
    void area_of_triangle()
    {
        float s;
        s = (a + b + c) / 2;

        cout << "Area of triangle is: " << sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
class rectangle
{
private:
    float a, b;

public:
    void get_side_of_rectangle(int x, int y)
    {
        a = x;
        b = y;
    }
    void perimeter_of_rectangle()
    {
        cout << "Perimeter of triangle is: " << 2 * (a + b) << endl;
    }
    void area_of_rectangle()
    {
        cout << "Area of rectangle is: " << a * b;
    }
};
int main()
{
    circle c;
    triangle t;
    rectangle r;
    int select;
    cout << "Press 1 to find Area or Perimeter of Triangle ,2 for Area or Perimeter of rectangle,3 for Area or Perimeter of circle: " << endl;
    cin >> select;
    if (select == 1)
    {
        int a, Side_first, Side_second, Side_third;
        cout << "Enter the side of triangle: " << endl;
        cin >> Side_first >> Side_second >> Side_third;
        t.get_side_of_triangle(Side_first, Side_second, Side_third);
        cout << "Press 1 for area ,Press 2 for perimeter: " << endl;
        cin >> a;
        if (a == 1)
        {
            t.area_of_triangle();
        }
        else if (a == 2)
        {
            t.perimeter_of_triangle();
        }
        else
        {
            cout << "Wrong selection!!";
        }
    }

    else if (select == 2)
    {
        int a, Side_first, Side_second;
        cout << "Enter the side of rectangle: " << endl;
        cin >> Side_first >> Side_second;
        r.get_side_of_rectangle(Side_first, Side_second);

        cout << "Press 1 for area ,Press 2 for perimeter: " << endl;
        cin >> a;
        if (a == 1)
        {
            r.area_of_rectangle();
        }
        else if (a == 2)
        {
            r.perimeter_of_rectangle();
        }
        else
        {
            cout << "Wrong selection!!";
        }
    }
    else if (select == 3)
    {
        int a, radius;
        cout << "Enter the radius of circle: " << endl;
        cin >> radius;
        c.get_radius(radius);

        cout << "Press 1 for area ,Press 2 for perimeter: " << endl;
        cin >> a;
        if (a == 1)
        {
            c.display_area_circle();
        }
        else if (a == 2)
        {
            c.display_perimeter();
        }
        else
        {
            cout << "Wrong selection!!";
        }
    }
}