#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"1.January\n2.February\n3.March\n4.April\n5.May\n6.June\n7.July\n8.August\n9.September\n10.October\n11.November\n12.December";
    cout<<"\nenter your your choice: ";
    cin>>a;
    switch(a)
    {
        case 1:
        {
            cout<<"January";
            break;
        }
        case 2:
        {
            cout<<"February";
            break;
        }
        case 3:
        {
            cout<<"March";
            break;
        }
        case 4:
        {
            cout<<"April";
            break;
        }
        case 5:
        {
            cout<<"May";
            break;
        }
        case 6:
        {
            cout<<"June";
            break;
        }
        case 7:
        {
            cout<<"July";
            break;
        }
        case 8:
        {
            cout<<"August";
            break;
        }
        case 9:
        {
            cout<<"september";
            break;
        }
        case 10:
        {
            cout<<"October";
            break;
        }
        case 11:
        {
            cout<<"November";
            break;
        }
        case 12:
        {
            cout<<"December";
            break;
        }
        default:
        {
            cout<<"enter valid input";
            break;
        }
    }
}
