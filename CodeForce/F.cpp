#include <iostream>
using namespace std;
int main()
{
    long long n,m,SumoflastDigit,firstNumLastDigit,secondNumLastDigit;
    cin >> n >> m;
    firstNumLastDigit=n%10;
    secondNumLastDigit=m%;
    SumoflastDigit = firstNumLastDigit+secondNumLastDigit;
    cout << SumoflastDigit << endl;
    return 0;
}
