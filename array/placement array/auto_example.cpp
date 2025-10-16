#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    auto f = [x, &y](int z) {
        // x by value → original x change nahi hoga
        // y by reference → original y modify ho sakta hai
        // z = parameter
        
        // modify
        x += z; // ERROR: x is by value, cannot modify original x (without mutable)
        y += z;   // modifies original y

        cout << "Inside lambda: x = " << x << ", y = " << y << ", z = " << z << endl;
    };

    f(5);

    cout << "Outside lambda: x = " << x << ", y = " << y << endl;

    return 0;
}
