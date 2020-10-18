#include <iostream>

extern "C" {
    double fact(double);
}

int main() {
    std::cout << "fact of 3.0 : " << fact(3.0) << std::endl;
}