// Example solution for Animal class
// include iostream for printing
#include <iostream>
// Define base class Animal
class Animal {

    // Define protected base class attributes
    protected:
        std::string color;
        std::string name;
        int age;
    // Define public setters and getters
    public:
        void SetColor(std::string c) {
            color = c;
        }

        std::string GetColor() {
            return color;
        }

        void SetName(std::string n) {
            name = n;
        }

        std::string GetName() {
            return name;
        }

        void SetAge(int a) {
            age = a;
        }

        int GetAge() {
            return age;
        }

};
// Define subclass Snake
class Snake : public Animal {
    // Define private attribute length
    private:
        int length;
    // Define public getter and setter
    public:
         void SetLength(int l) {
             length = l;
         }

         int GetLength() {
             return length;
         }

         void MakeSound() {
            std::cout << "Hiss" << "\n";
        }
};
// Define subclass Cat
class Cat : public Animal {
    // Define private attribute height
    private:
        int height;
    // Define public getter and setter
    public:
        int GetHeight() {
            return height;
        }

        void SetHeight(int h) {
            height = h;
        }
        void MakeSound(){
            std::cout << "Meow" << "\n";
        };
};
// Test in main()
int main() {

    Cat c;
    Snake s;

    c.SetAge(10);
    c.SetName("Lucy");
    c.MakeSound();
    s.MakeSound();

    std::cout << c.GetAge() << " " << c.GetName() << "\n";
}