#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char ch;
    float f;
    double d;
    cin >> a >> b >> ch >> f >> d;
    cout << a << endl;
    cout << b << endl;
    cout << ch << endl;
    cout << fixed << setprecision(3)<< f << endl;
    cout << fixed << setprecision(9)<< d << endl;
    return 0;
}
