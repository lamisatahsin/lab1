#include <iostream>
using namespace std;

int main()
{
    string first_name;
    string last_name;
    cout <<" enter first name:";
    cin>>first_name;
    cout<<"enter last name:";
    cin>>last_name;
    string full_name= first_name + "  "+ last_name;
    cout<<"enter full name:"<<full_name;

    return 0;
}
