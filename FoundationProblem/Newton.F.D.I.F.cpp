#include <iostream>
#include <iomanip>
using namespace std;

//Function to calculate factorial
int factorial(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}
//function to perform Newton forward difference formula
double newtonForwInter(double x[], double  y[], int n, double value){
    double differenceTable[n][n];
    for(int i=0; i<n; i++){
        differenceTable[i][0] = y[i];
    }
    for(int j=1; j<n; j++){
        for(int i=0; i<n-j; j++){
            differenceTable[i][j] = differenceTable[i+1][j-1] - differenceTable[i][j-1];

        }
    }
    //Display the forward diff. table
    cout << "Forward diff table: " << endl;
    for(int i=0; i<n; i++){
     cout<< setw(4) << x[i];
     for(int j=0; j<n-i; j++){
        cout << setw(4) << differenceTable[i] [j];
     }
     cout << endl;
    }
    //calculate the interpolated value
    double result = y[0];
    double p = (value -x[0]) / (x[1] - x[0]);
    double pTerm = 1;
    for(int i=1; i<n; i++){
        pTerm*=(p-(i-1));
        result+=(pTerm*differenceTable[0][i]/ factorial(i));
    }
    return result;
}


int main()
{
    int n;
    cout << "Enter the num of data point: ";
    cin >> n;
    double x[n],y[n];
    cout << "Enter the data points (x and y):\n";
    for(int i=0; i<n; i++){
        cout << " x [" << i << "] = ";
        cin >> x[i];
        cout << " y [" << i << "] = ";
        cin >> y[i];
    }
    double value;
    cout << "\nEnter the value to interpolate: ";
    cin >> value;
    // Perform interpolation and display the result
    double result = newtonForwInter(x,y,n,value);
    cout << "The interpolated value at " << value << " is: " << result << endl;

   return 0;
}
