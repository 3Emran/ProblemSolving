#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    int Messi = a*2+b*1;
    int Ronaldo = c*2+d*1;
    if(Messi>Ronaldo){
        cout<<"Messi"<<endl;
    }
    else if(Messi==Ronaldo){
                cout<<"Equal"<<endl;
    }
    else{
        cout<<"Ronaldo"<<endl;
    }
    return 0;
}

