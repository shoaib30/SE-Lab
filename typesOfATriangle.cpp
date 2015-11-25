#include<iostream>
#include <limits>
using namespace std;

#define upperLimit 200.0
#define lowerLimit 1.0

class triangle
{
    private:
        int side[3];
        bool isATriangle() {
            if(side[0]+side[1] > side[2] && side[1]+side[2] > side[0] && side[0]+side[2] > side[1] )
                return true;
            return false;
        }
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
    public:
        triangle()  {
            for(int i = 0; i < 3; i++)
                side[i] = 0.0;
        }
        void setSide()  {
            int temp;
            cout<<"Enter the sides\n";
            for(int i = 0; i < 3;)  {
                cout<<"side "<<i+1<<" : ";
                temp=validInput();
                if(temp <= upperLimit && temp >= lowerLimit)
                    side[i++] = temp;
                else
                    cout<<"Value out of range. Please insert again\n";
            }
        }
        void validate() {
            if(isATriangle())
            {
                if(side[0] == side[1] && side[1] == side[2])
                    cout<<"\nEquivalent Triangle";
                else if(side[0] == side[1] || side[1] == side[2] || side[2] == side[0])
                    cout<<"\nIsoceles Triangle";
                else
                    cout<<"\nScalene Triangle";
            }
            else
                cout<<"\nNot a triangle";
            cout<<endl;
        }
};
int main()
{
    cout<<"Enter the numbe of test case: ";
    int numberOfTestCases;
    cin>>numberOfTestCases;
    triangle t[numberOfTestCases];
    for(int i = 0; i < numberOfTestCases; i++)  {
        t[i].setSide();
        t[i].validate();
    }
    return 0;
}

