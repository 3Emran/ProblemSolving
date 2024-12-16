#include <iostream>
using namespace std;
int main()
{
    int myNumbers[6]={1,2,3,4,5,7};
    int getArraylength = sizeof(myNumbers)/sizeof(myNumbers[0]);
    cout << getArraylength;
}
