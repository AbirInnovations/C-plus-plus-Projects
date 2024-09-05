#include<iostream>
using namespace std;
    int main()
{
    char choice,length ,redius,area,width ;
    do{
    std::cout << "Please choose from the choices listed.";
    std::cout << "1 --Area of a square\n";
    std::cout << "2 -- Area of a circle\n";
    std::cout << "3 -- Area of a right triangle\n";
    std::cout << "4 -- Quit\n";
    std::cin >> choice;

    if (choice == '1')
  {

    float length;
    std::cout << "Enter length of square.";
    std::cin >> length;
    std::cout << "Area of the square =" << length*length << "\n\n"; }

    else if (choice == '2')
  {

    float radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    area = 3.142 * radius * radius ;
        cout << "Area of a circle is ="; }


    else if (choice == '3')
        std::cout << "Enter the length of the right triangle:";
        std::cin >> length;
        std::cout << "Enter the width of the right traingle: ";
        std::cin >> width;
        std::cout << "Area of the right triangle =" << length*width/2 << "\n\n";

    } while (choice != '4');



    return 0;


}
