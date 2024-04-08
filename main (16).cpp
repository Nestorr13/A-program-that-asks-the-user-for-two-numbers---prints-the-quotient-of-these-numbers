#include <iostream>
#include <string>

double divide(int a, int b) {
    if (b) {
        double result = static_cast<double>(a) / b;
        return result;
    }
    throw std::string("На нуль делить нельзя");
}

int main() {
    int num1, num2;
    
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    try {
        double result = divide(num1, num2);
        std::cout << "Результат деления: " << result << std::endl;
    } catch (std::string& error_message) {
        std::cerr << error_message << std::endl;
    }
    
    return 0;
}
