#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef number_t;
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typederf can be replaced with using keyword

using text_t = std::string;
using number_t = int;

namespace first
{
    int x = 1;
}

// namespace second
// {
//     int x = 2;
// }

int main()
{
    // using namespace std::cout;
    // using namespace second;                    // implies that we are using the x from namespace
    std::cout << "I like pizza!" << std::endl; // ending a line -> flushes the output buffer
    std::cout << "It's really good!" << '\n';  // \n can also used for new line

    // Declaring variables
    int y = 6;
    // Assigning  a variable

    // Double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char intial = 'B';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (object that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";

    std::cout << name << '\n';

    std::cout << intial << std::endl;

    std::cout << first::x << '\n';
    std::cout << y << '\n';
    std::cout << y + first::x << '\n'; // namespace used
    // std::cout << y + second::x << '\n';
    std::cout << "Hello " << name << std::endl;

    // The const keyword
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 2234567;
    const int HEIGHT = 1920;
    const int WIDTH = 100;

    std::cout << circumference << " cm";

    // Namespace = provides a solution for preventing name conflicts
    //      in large projects. Each entity needs a unique name.
    //      A namespace allows  for identically named entities as
    //      long as the namespaces are different.

    // typedef  => reserved keyword to create an additional name
    //      (alias) for another data type.
    //      New identifier for an existing type
    //      Helps with readability and reduces typos
    //      Replaced with 'using' (work better with templates)

    pairlist_t pairlist;
    text_t firstName = "Bro";
    number_t age = 20;

    // arithmetic operators = return the result of a specific
    //      arithmetic operation ( + - * /)

    int students = 20;
    // students += 2;
    // students++;
    // students -= 2;
    // students--;

    // students = students * 2;
    // students  * 2;
    // students = students / 2;
    //  students /= 2;

    int remainder = students % 3;

    std::cout << remainder;
    std::cout << students;

    return 0;
}