#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result =  n | (1 << 0);
     result = result & (~(1 << 1));
     result = result ^ (1 << 2);
     cout<<result<<endl;
     return 0;
}
