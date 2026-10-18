#include <iostream>
int main()
{
    bool heightValid = height > 0.0f;
bool sameWeight = weight == targetWeight;
bool adult = age >= 18;
std::cout << std::boolalpha
<< heightValid << '\n';
return 0;
}
