#include <iostream>

int main() {
    int a, b, c;
    int *p1, *p2, *p3;
    
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    std::cout << "Enter value for a: ";
    std::cin >> *p1;
    
    std::cout << "Enter value for b: ";
    std::cin >> *p2;
    
    std::cout << "Enter value for c: ";
    std::cin >> *p3;
    
    int sum = *p1 + *p2 + *p3;
    
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    std::cout << "Value of c: " << c << std::endl;
    std::cout << "Sum of a, b, and c is " << sum << std::endl;
    
    return 0;
}
