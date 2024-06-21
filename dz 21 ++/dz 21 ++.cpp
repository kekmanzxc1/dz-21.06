#include <iostream>

class Drib {
private:
    int numerator;
    int denominator;

public:
    Drib() : numerator(0), denominator(1) {}

    void input() {
        std::cout << "Enter the numerator:  ";
        std::cin >> numerator;
        std::cout << "Enter the denominator: ";
        std::cin >> denominator;
    }

    void display() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    Drib d;
    std::cout << "Fraction:" << std::endl;
    d.input();
    std::cout << "Your fraction: ";
    d.display();
}
