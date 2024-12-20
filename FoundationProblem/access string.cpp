/*You are given a string and you have to find the
10th psition character, how do you find it?*/
#include <iostream>
using namespace std;
main()
{
    string text="aquickbrownfoxjumpoverthelazydog";
    cout<<text.at(10);//we can use at function to access the position of the character
    //to find the last character
    cout<<text.at(text.length()-1);
    return 0;
}
