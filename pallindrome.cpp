#include <iostream>
using namespace std;
int main()
{
    int n, r, c, s = 0;
    cout << "Enter a number: \n";
    cin >> n;
    c = n;
    while (n > 0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==c)
    cout<<c<<" is pallindrome";
    else
    cout<<c<<" is not pallindrome";

    return 0;
}