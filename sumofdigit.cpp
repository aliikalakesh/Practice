#include <iostream>

int main()
{

int sum = 0;
    int n;

 do{
std::cout<<"Please enter a number n :";
std::cin>>n;
}while(n<=0);

    
while(n>0){
    sum += n%10;
    n=n/10;
}
std::cout<<"The sum of the number is :"<<sum;
    
    return 0;
}s