#include <iostream>
using namespace std;

int fibbo(int n)
{
    int a = 0, b = 1, ans = 0;
    for (int i = 2; i <= n - 1; i++)
    {

        ans = a + b;
        a = b;
        b = ans;
    }
    return b;
}
int main()
{
    int n;
    cout << "enter last term of fibonacci series = ";
    cin >> n;
    cout << "last term of fibonacci series is = " << fibbo(n);
    return 0;
}