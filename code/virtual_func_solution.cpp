// Example solution for Shape inheritance
// include iostream for printing
#include <iostream>

// Define pi constant
const double pi = 3.14159;

// Define Shape base class
// strictly base class because its interface is pure virtual methods
class Shape {
    // Define public empty constructor
    // Define public virtual Area() and PerimeterLength()
    public:
        Shape() {}
        //const = 0 specifier in interface is telling the compiler that this method must be implemented in one of the derived classes
        // For this class it is just part of the interface
        virtual double Area() const = 0;
        virtual double PerimeterLength() const = 0;
};

// Define Rectangle to inherit publicly from Shape
class Rectangle : public Shape {
    // Declare private attributes width and height
    private:
        double width;
        double height;
    // Declare public constructor
    // Override virtual base class functions
    public:
        Rectangle(double w, double h) {
            Rectangle::width = w;
            Rectangle::height = h;
        }
        // Overriding methods
        virtual double Area() const override{
            std::cout << "Rectangle:" << "\n";
            return width*height;
        }
        virtual double PerimeterLength() const override{
            std::cout << "Rectangle:" << "\n";
            return 2*(width + height);
        }
};

// Define Circle to inherit publicly from Shape
class Circle : public Shape {
    // Declare private attributes width and height
    private:
        double radius;
    // Declare public constructor
    // Override virtual base class functions
    public:
        Circle(double r) {
            Circle::radius = r;
        }
        virtual double Area() const override {
            std::cout << "Circle:" << "\n";
            return Circle::radius*Circle::radius*pi;
        }
        virtual double PerimeterLength() const override{
            std::cout << "Circle:" << "\n";
            return 2 * radius*pi;
    }
};
// Test in main()
int main() {
    // Generic containter of Shapes (array) :
    Shape** shapes = new Shape*[2];
    shapes[0] = new Circle(12.31);
    shapes[1] = new Rectangle(10, 6);
    for (int i = 0;i < 2;i++) {
        std::cout << "Area: " << shapes[i]->Area()<< "\n";
        std::cout << "Perimeter: " << shapes[i]->PerimeterLength() << "\n";

    }
}
