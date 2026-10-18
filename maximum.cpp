#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cout<<"Please enter 3 numbers :";
    
    std::cin >> a >> b >> c;

    int maximum = 0;

    if (a >= b && a >= c)
    {
        maximum = a;
    }
    else if (b >= a && b >= c)
    {
        maximum = b;
    }
    else
    {
        maximum = c;
    }

    std::cout << maximum << '\n';

    return 0;
}