// Example solution for Rectangle and Square classes
// include iostream for printing
#include <iostream>
// Declare class Rectangle
class Rectangle;
// Define class Square as friend of Rectangle
class Square {
    friend class Rectangle;
  // Add private attribute side to Square
  private:
      int side;
  // Add public constructor to Square, initialize side
  public:
      Square(int s) : side(s) {}
};
// Implement Rectangle
class Rectangle {
    // Add private attributes width, height
    int width, height;
    // Add public functions to Rectangle: area() and convert()
    public:
       int Area();
       void Convert(Square a);
};
 // Define convert() to take Square and initialize Rectangle
void Rectangle::Convert(Square a) {
    width = a.side;
    height = a.side;
}

// Define area() to compute area of Rectangle
int Rectangle::Area() {
    int result = Rectangle::width * Rectangle::height;
        return result;
}
// Test in main()
int main(){
    Rectangle r;
    Square s(4);
    r.Convert(s);
    std::cout << r.Area() << "\n";  
}