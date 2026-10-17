#include <iostream>
int main()
{
int age = 20;
double weight = 72.0; // kg
double height = 1.80; // m
double bmi= weight / (height * height);
std::cout<< "Age: " << age << " years\n";
std::cout<< "BMI: " << bmi<< "        kg\n";
return 0;
}