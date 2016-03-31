/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cylinder_overload_menu.cpp
 * Author: k
 *
 * Created on 31 March 2016, 10:59 PM
 */

// This program illustrates the local and global variables and call-by-value.
// This program computes the side area and the cross section area of a cylinder
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
double PI = 3.14159; // This variable is defined globally, known to all
// functions in this program as PI
double area(double); // Function declaration for function cross area
double area(double, double); // Function declaration for function side area

int main() {
    double h, r; //variables local to the main function
    cout << "Enter the radius and the height of the cylinder in cm <Enter> ";
    cin >> r >> h;
    cout << endl;
    cout << "Before I do any computation or call any function, I want to let you know that \n";
    cout << "you have entered r = " << r << " and h = " << h << "." << endl;
    cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
    cout << "in the second one I will convert h \n";
    cout << "The cross section area of the cylinder is " << cross_area(r) << " inch-sqr" << endl;
    cout << "The side area of the cylinder is " << side_area(r, h) << " inch-sqr \n\n";
    return 0;
}

double area(double r) {
    //Cross section area includes the disks at the bottom and the top
    r = r * 0.3937; // converting r to inch
    return 2 * PI * pow(r, 2);
}

double area(double r, double h) {
    double area; //variable local to side area function
    h = h * 0.3937; // converting h to inch
    area = 2 * PI * r*h;
    return area;
}