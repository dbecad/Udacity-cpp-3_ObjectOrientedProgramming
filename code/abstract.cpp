// Include iostream for printing
#include <iostream>
#include <vector>

// Define Abstraction class
class Abstraction {
    // Define private attributes
    private:
        std::vector<float> data = {0,0};
    
    // Define public setter and printing functions    
    public:
        void Set(float a, float b)
        {
            data[0] = a;
            data[1] = b;
        }
    
        void Print() const
        {
            std::cout << data[0] << " " << data[1] << "\n";
        }
};
    
        
// Test in main()
int main()
{
    Abstraction a;
    a.Set(1.0, -7);
    a.Print();
}
