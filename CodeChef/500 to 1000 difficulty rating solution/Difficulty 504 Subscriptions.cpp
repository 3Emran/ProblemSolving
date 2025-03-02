#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long int t,n,x;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> x;
        int subsNeed = (n+5)/6;
        int totalCost = subsNeed* x;
        cout << totalCost << endl;
    }
    return 0;
}
