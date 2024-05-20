#include<iostream>
using namespace std;
int nofsetbit(int num)
{
    int count=0;
    while(num)
    {
        if(num&1==1)
        {
            count+=1;
        }
    num=num>>1;

    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    
    int set_bits_in_a=nofsetbit(a);
    int set_bits_in_b=nofsetbit(b);
    cout<<"sum of set bits present in a and b are : "<<set_bits_in_a+set_bits_in_b;
 

}
