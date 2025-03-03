#include <iostream>
using namespace std;

class BkashAccount
    {
        private:

        double Balance;

        public:

        double getBalance()
        {
            int password;
            cin >> password;
            cout << "Enter your password: "<<endl;

            return Balance;
        }
    };

int main()
{

    BkashAccount account;
    cout << "Check Balance: "<<account.getBalance()<<endl;
    return 0;
}
