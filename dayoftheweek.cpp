#include <iostream>
using namespace std;
int main()
{
    int d;
    cout<<"Enter a number: \n";
    cin>>d;
    switch(d)
    {
        case 1:
        cout<<"Sunday";
        break;

        case 2:
        cout<<"Monday";
        break;

        case 3:
        cout<<"Tuesday";
        break;
        
        case 4:
        cout<<"Wenesday";
        break;
        
        case 5:
        cout<<"Thursday";
        break;
        
        case 6:
        cout<<"Friday";
        break;
        
        case 7:
        cout<<"Saturday";
        break;
        
        default:
        cout<<"Wrong/invalid input";
    }
    return 0;

}