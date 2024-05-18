#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            cout << "not a prime number" << endl;
        }
        else
        {
            cout << "prime number" << endl;
        }
        break;
    }
    return 0;
}