#include <iostream>

class Date {
    // Declare member variables 
    private:
        int day;
        int month;
        int year;
        
    public:
        // Declare member setter function
        void SetDate(int day, int month, int year);
        int GetYear();
        int GetMonth();
        int GetDay();
};

int Date::GetYear()
{
    return year;
}

int Date::GetMonth()
{
    return month;
}

int Date::GetDay()
{
    return day;
}

// Define the SetDate() function
void Date::SetDate(int day, int month, int year) 
{
    int day_numbers[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // TODO: Your code goes here to check if input year is a leap year
    // and if it is, give February 29 days
    if(year % 4 == 0)
        day_numbers[1] = 29;

    // Validate inputs
    if(year < 1 || day < 1 || month < 1 || month > 12 || day > day_numbers[month - 1])
        throw std::domain_error("Invalid date!");

    // Set date
    Date::day = day; 
    Date::month = month; 
    Date::year = year;
}

// Test in main
int main()
{
   Date date;
   date.SetDate(29, 2, 2020);
   std::cout << date.GetDay() << "/" << date.GetMonth() << "/" << date.GetYear() << "\n";
}

