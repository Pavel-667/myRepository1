#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // your code goes here
    for (double x = -4; x <= 4; x += 0.5)
    {
        double y = std::fabs(-20 + (x + 10));
        std::cout << "x = " << x << " y = " << y << endl;
    }

    std::cin.get();

    return 0;
}