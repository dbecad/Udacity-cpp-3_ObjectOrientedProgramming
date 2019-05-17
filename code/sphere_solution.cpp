// Include iostream for printing
#include <iostream>
#include <cmath>

// Define class Sphere
class Sphere {
public:
    // Define public constructor
    Sphere(uint radius) : _radius(radius) 
    {
            _volume = pi * 4 / 3 * pow(radius, 3);
    }
    uint Radius() const { return _radius; }
    void Radius(uint radius)
    {
        _radius = radius;
        _volume = pi * 4 / 3 * pow(radius, 3);
    }
    // Define a function to return the volume
    int Volume() const
    {
        return _volume;
    }
    static constexpr double pi = 3.14;

    // Define private attributes
    uint _radius {0};
    uint _volume {0};
};
    
// Test in main()
int main(void)
{
    Sphere s(5);
    std::cout << s.Volume() << "\n";
    s.Radius(3);
    std::cout << s.Volume() << "\n";
}