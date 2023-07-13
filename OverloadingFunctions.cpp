#include <iostream>
#include <cmath>
using namespace std;


//function prototypes
int find_area(int);
double find_area(double, double);
void area_calc();


int main()
{
    area_calc();
}

void area_calc() {

    int square_area{ find_area(2) };
    double rectangle_area{ find_area(4.5, 2.3) };

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}


int find_area(int side_length) {
    return side_length * side_length;
    //or
    //return pow(side_length,2);
}

double find_area(double length, double width) {
    return length * width;
}
