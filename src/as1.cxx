#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {
    x = x + 1;
}

bool isOdd(int x) {
    return (x % 2 != 0);
}

int floatToInt(float x) {
    return static_cast<int>(x);
}

int factorial(int n) {
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

} // namespace homework
