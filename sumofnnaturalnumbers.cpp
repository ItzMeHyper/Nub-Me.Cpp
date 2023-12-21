#include <iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"Enter a number: \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    cout<<"The sum of square of first "<<n<<" numbers is "<<s;
    return 0;
}