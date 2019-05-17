// Example solution for Line and Circle classes
// include iostream for printing
#include <iostream>

// Define pi
const double pi = 3.14159;
// Define Line Class
class Line {
    // Define protected attribute length
    protected:
        double length;
};
// Define Circle subclass
class Circle:Line { // Circle is the derived class.
    // Define public setRadius() and getArea()
    public:
      double GetArea();
      void SetRadius(double x);
};

void Circle::SetRadius(double x) {
    Circle::length = x;
}
double Circle::GetArea() {
    // in this case length is radius line length
    return Circle::length*Circle::length*pi;
}
// Test in main()
int main() {
    Circle circle;
    circle.SetRadius(1);
    std::cout << "Circle Area : " << circle.GetArea() << "\n";
}