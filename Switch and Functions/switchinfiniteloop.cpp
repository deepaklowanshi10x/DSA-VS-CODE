#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    while (1)
    {
        switch (num)
        {
        case 1:
            cout << "First" << endl;
            break; 
            // continue is not valid in switch case 
        }
        exit(0);
    }
}