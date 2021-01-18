//Determining if the point is within a circle or not
#include <iostream>
#include <math.h>
using namespace std;

// calculate distance
double distance(double x,double y,double circle_x,double circle_y, double radius){
  if((pow((x-circle_x),2) - pow((y-circle_y),2)) < pow(radius,2)){
      cout << "The point is inside the circle.";
  }
  else{
      cout << "The point is not inside the circle.";
  }
}

int main(int argc, char const *argv[])
{
    double x, y, circle_x, circle_y, radius;
    cout << "Enter x-coordinate for the circle: ";
    cin >> circle_x; 
    cout << "Enter y-coordinate for the circle: ";
    cin >> circle_y;
    cout << "Enter the radius for the circle: ";
    cin >> radius; 
    cout << "Enter x-coordinate for the point: ";
    cin >> x; 
    cout << "Enter y-coordinate for the point: ";
    cin >> y;
    distance(x, y, circle_x, circle_y, radius);

    return 0;
}


