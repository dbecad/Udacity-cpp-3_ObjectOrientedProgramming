// Solution for Abstract Class
// include iostream for printing
#include <iostream>
// Define class Abstract
class  Abstract {
    // Define private attributes
    private:
        int number;
        char character;
        // Define private method - Used to perform inner logic
        void ProcessAttributes(void);

    // Define public getter and setter (one calls private method)
    public:
        void SetMyValues(int n, char c);
        void GetMyValues(void);
    };

void Abstract::ProcessAttributes() {
    Abstract::number *= 6;
    Abstract::character++;
}
void Abstract::SetMyValues(int n, char c) {
    Abstract::number = n; Abstract::character = c;
}
void Abstract::GetMyValues() {
    Abstract::ProcessAttributes();
    std::cout << "Number is: " << Abstract::number << "\n";
    std::cout << "Character is: " << Abstract::character << "\n";
}
// Test in main()
int main() {
    Abstract a;
    a.SetMyValues(100, 'X');
    a.GetMyValues();
    a.GetMyValues();
}