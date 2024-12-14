#include <iostream>
using namespace std;
int main()
{
    int numbers,reverseNum=0;
    cin>>numbers;
    while(numbers){
            //get the last number of"numbers and add it to reverseNum"
        reverseNum= reverseNum*10+numbers%10;
        //remove the last number of numbers
        numbers/=10;
    }
    cout << "Reverse numbers:"<<reverseNum<<endl;

    return 0;
}
