#include <iostream>
int main()
{
int age;
float weight, height;
std::cout << "Enter age:     ";
std::cin >> age;
std::cout << "Enter weight (kg): ";
std::cin >> weight;
std::cout << "Enter height (m): ";
std::cin >> height;
float bmi = weight / (height * height);
std::cout << "Age: " << age << " years\n";
std::cout << "BMI: " << bmi << '\n';
return 