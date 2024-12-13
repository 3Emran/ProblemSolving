#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a="";
    cin>>a;
    string b="";
    cin>>b;
    cout<<a.length()<< " " <<b.length()<<"\n";
    cout << a+b << "\n";
    if(!a.empty() && !b.empty()){
        swap(a[0],b[0]);
    }
    cout << a << " " << b << endl;

    return 0;
}
