#include <iostream>
using namespace std;
int main()
{
    int n=4;
   // cin >> n;
    int i = 1; 
     while (i <= n)
    {
       int  j = 1;
        while (j <= n)
        {
            cout << j;//cout<<i; 
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}