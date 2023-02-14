#include <iostream>

using namespace std;

int main()
{
    int rest=0,dollars,dollar_value{100},quarters,quarter_value{25},dimes,dime_value{10},nickels,nickel_value{5},amount,pennies;
    cout<<"Enter the amount in cents: "<<endl;
    cin>>amount;

    dollars=amount/dollar_value;
    rest=amount%dollar_value;

    quarters=rest/quarter_value;
    rest%=quarter_value;

    dimes=rest/dime_value;
    rest%=dime_value;

    nickels=rest/nickel_value;
    rest%=nickel_value;

    pennies=rest;

    cout<<"============================"<<endl;

    cout<<"dollars: "<<dollars<<endl;
    cout<<"quarters: "<<quarters<<endl;
    cout<<"dimes: "<<dimes<<endl;
    cout<<"nickels: "<<nickels<<endl;
    cout<<"pennies: "<<pennies<<endl;

    return 0;
}
