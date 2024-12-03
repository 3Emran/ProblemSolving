#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin >> a >> b;
    string numbers[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i = a; i <= b; i++){
        if(1 <= i && i <= 9){
            cout << numbers[i-1] << endl;
        }
        else
        if(i%2==0){
        cout<<"even"<<endl;
        }
        else
        cout<<"odd"<<endl;
    }

        

    return 0;
}
