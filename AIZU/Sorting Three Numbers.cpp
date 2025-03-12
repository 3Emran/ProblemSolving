#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>> a >> b >> c;
    if(a>b){
        //b,a
        if(c < b){
                //c,b,a
            cout << c << " " << b << " " << a << endl;
        }
           else if(c < a){
                //b,c,a
                cout << b << " " << c << " " << a << endl;
            }
            else{
                cout << b << " " << a << " " << c << endl;
            }
    }
    else{
        //a b
        if(c < a){
            //c,a,b
            cout << c <<" "<< a << " " << b << endl;
        }
        else if(c < b){
                //a,c,b
                cout << a <<" "<< c << " " << b << endl;
            }
            else{
                //a,b,c
                cout << a << " " << b << " " << c << endl;
            }
    }
   return 0;
}
