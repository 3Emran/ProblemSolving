#include <iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;
    //I solved this problem without using %operator
    int last_two_digit = X-X/100*100;
    //first divided the num by 100 to get int quotient
    //multiply the number to get nearest multiple of 100
    //subtract this value from original value
    cout<<"K" << (last_two_digit < 10 ? "0":"")<<last_two_digit <<endl;
    return 0;
}
