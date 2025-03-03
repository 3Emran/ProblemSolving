#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double r;
    cin>>r;
    double area = M_PI*r*r;
    double circumference = 2*M_PI*r;
    cout <<fixed<<setprecision(6)<< area << " "<<fixed<<setprecision(6) << circumference <<endl;
    return 0;
}
