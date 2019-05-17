#include <iostream>
#include <cmath>

// TODO: Define class Pyramid
class Pyramid {
    // Private class members
    private:
        unsigned int length;
        unsigned int width;
        unsigned int height;
    
    // Public class members
    public:    
        // constructor for "Pyramid"
        Pyramid(unsigned int length, unsigned int width, unsigned int height) : 
            length(length), width(width), height(height) {}
    
        // get base length
        unsigned int Length() const
        {
            return length;
        }
    
        // get base width
        unsigned int Width() const
        {
            return width;
        }
        
        // get height
        unsigned int Height() const
        {
            return height;
        }
        
        // public method that finds volume of pyramid
        float Volume() const
        {
            return length * width * height / 3;
        }
    
        unsigned SurfaceArea() const
        {
            unsigned int base = length * width;
            unsigned int long_sides = length * height;
            unsigned int wide_sides = width * height;
            return base + long_sides + wide_sides;
        }
    
};
    
// TODO: Test in main()
int main()
{
    Pyramid p(1, 2, 3);
    std::cout << p.Length() << "x" << p.Width() << "x" << p.Height() << "\n";
    std::cout << p.Volume() << "\n";
    std::cout << p.SurfaceArea() << "\n";
}
