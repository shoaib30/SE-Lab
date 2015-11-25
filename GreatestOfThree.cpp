#include<iostream>
#include<limits>

using namespace std;

float validInput()
{
    float x;
    cin >> x;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Not a numeric value please enter again\n";
        cin >> x;
    }
    return x;
}
float greatest(float a,float b,float c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= c && b >= a)
        return b;
    else
        return c;
}

int main()
{
    float num1,num2,num3;
    cout<<"Enter three numbers: ";
    cout<<"1: ";
    num1 = validInput();
    cout<<"2: ";
    num2 = validInput();
    cout<<"3: ";
    num3 = validInput();
    cout<<"\nGreatest of the three numbers is: "<<greatest(num1,num2,num3);
}
