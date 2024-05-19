#include <iostream>
using namespace std;

int AP(int n)
{
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans = 3 * n + 7; 
    } 
    return ans;
}

int main()
{
    int n;
    cin >> n; 
    cout<<"answer is : "<<AP(n)<<endl;
}