#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    cout<<a<<" is the Largest among three";
    else if(b>c)
    cout<<b<<" is the Largest among three";
    else 
    cout<<c<<" is the Largest among three";
    
    return 0;
}