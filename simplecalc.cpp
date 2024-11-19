#include <iostream>

int main() {
    int num1;
    int num2;
    std::cout<<"Enter Your First Number: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter Your Second Number: ";
    std::cin>>num2;
    int sum = num1 + num2;
    int diff = num1 - num2;
    int multiplication = num1*num2;
    double division = num1/num2;
    std::cout<<sum<<std::endl;
    std::cout<<diff<<std::endl;
    std::cout<<multiplication<<std::endl;
    std::cout<<division;
    
    return 0;
}
