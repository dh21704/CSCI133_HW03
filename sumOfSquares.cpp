
#include <iostream>

using namespace std;

double sumOfSquares(int n, double &t);

int main()
{
    int number;
    cout << "\nEnter a Num: ";
    cin >> number;
    
    double total = 0;
    
    double finalNumber = sumOfSquares(number, total);
    
    cout << "\n\nFinal Sum: " << finalNumber << endl;
    

    return 0;
}

double sumOfSquares(int n, double &t)
{
    
    if (n == 0)
    {
        cout << "\nFinal T: " << t;
        return t;
    }
    else
    {
        cout << "\nHere iteration: " << n;    
        
        double temp = n * n;
        
        cout << "\n\nTemp: " << temp;
        
        t += temp;
        
        cout << "\n\nT: " << t;
        
        sumOfSquares(n-1, t);
        
    }
    
    
    return t;
}
