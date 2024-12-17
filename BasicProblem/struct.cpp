#include <iostream>
using namespace std;
int main()
{
    struct
    {
       int myNum;
       string myString;
    }myStruct;

    //Assign values into myStruct
    myStruct.myNum = 1;
    myStruct.myString = "I'm Emran Hossain";

    //print member of my struct
    cout << myStruct.myNum<<endl;
    cout << myStruct.myString<<endl;
}

