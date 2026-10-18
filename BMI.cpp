#include <iostream>

int main()
{
    double height;
    float weight;
std::cout<<"Enter height :"<<"\n";
    std::cin >> height;
std::cout<<"Enter weight : ";
std::cin >>weight;
double BMI = weight / (height * height);

if(BMI<18.50){
    std::cout<<"Underweight";
}
else if(BMI<25.0){
    std::cout<<"Healthy range";
}
else if(BMI<30.0){
    std::cout<<"overweight";
}
else{
    std::cout<<"obesity range";
}
    return 0;
}