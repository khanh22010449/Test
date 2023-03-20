#include <iostream>
#include "mathlib.h"

using namespace std;

int main() {
    int a = 3, b = 4;
    int c = MathLib::add(a, b);
    cout << "The sum of " << a << " and " << b << " is " << c << endl;
    return 0;
}
