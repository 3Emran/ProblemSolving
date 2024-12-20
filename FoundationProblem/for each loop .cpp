#include <iostream>
using namespace std;

//a program that counts to 100 by 10
void countNum()
{
    for(int i=10; i<=100; i+=10){
        cout << i << endl;
        }
}
//a program that only print even numbers
void printEven(){
    for(int i=0; i <= 10; i+=2){
        cout << i << endl;
        }
}
//To print odd number
void printOdd()
{
    for(int i=1; i <= 10; i+=2){
        cout << i << endl;
        }
}
//power of 2 up to 512
void powerOftwo()
{
    for(int i=2; i<= 512; i*=2){
    cout<<i << "" <<"\n";
    }
}

int main(){
    countNum();
    printEven();
    printOdd();
    powerOftwo();
}
