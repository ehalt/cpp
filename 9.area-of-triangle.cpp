// Calculating area of triangle

#include<iostream>
using namespace std;
int main()
{
    double base, height, area;
    cout << "Enter base: ";
    cin >> base;
    
    cout << "Enter height: ";
    cin >> height;
    
    // area = 1.0 / 2 * base * height;
    // area = (double) 1/2 * base * height;
    area =0.5 * base * height;
    cout << "Area of triangle: " << area <<endl;
}