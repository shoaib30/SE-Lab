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
        void validate() {
            for(int i = 0; i < 3; i++)  {
                if(side[i] <= upperLimit && side[i] >= lowerLimit)
                    continue;
                cout<<"Side "<< i+1 << " out of range";
                cout<<endl;
                return;
            }
            if(isATriangle())
            {
                if(side[0] == side[1] && side[1] == side[2])
                    cout<<"Equivalent Triangle";
                else if(side[0] == side[1] || side[1] == side[2] || side[2] == side[0])
                    cout<<"Isoceles Triangle";
                else
                    cout<<"Scalene Triangle";
            }
            else
                cout<<"Not a triangle";
            cout<<endl;
        }
    public:
        triangle()  {
            for(int i = 0; i < 3; i++)
                side[i] = 0.0;
        }
        void getSide()  {
            int temp;
            cout<<"\nEnter the sides\n";
            for(int i = 0; i < 3; i++)  {
                cout<<"side "<<i+1<<" : ";
                side[i] = validInput();
            }
            validate();
        }
        void setSide(float a,float b,float c)   {
            side[0] = a; side[1] = b; side[2] = c;
            validate();
        }

};

void generateBoundaryValues(int bVal[])   {
    bVal[0] = lowerLimit;
    bVal[1] = lowerLimit + 1;
    bVal[2] = (lowerLimit + upperLimit) / 2;
    bVal[3] = upperLimit - 1;
    bVal[4] = upperLimit;
}
void generateRobustValues(int rVal[])   {
    rVal[0] = lowerLimit - 1;
    rVal[1] = lowerLimit;
    rVal[2] = lowerLimit + 1;
    rVal[3] = (lowerLimit + upperLimit) / 2;
    rVal[4] = upperLimit - 1;
    rVal[5] = upperLimit;
    rVal[6] = upperLimit + 1;
}
int main()
{
    triangle t;
    bool flag = true;
    int ch,i,j;
    int bVal[5],rVal[7];
    generateBoundaryValues(bVal);
    generateRobustValues(rVal);
    do{
        cout<<"\nChoice: \n1.User Input\n2.Boundary Value Test Cases\n3.Robust Test Cases\n4.Exit\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            t.getSide();
            break;
        case 2:
            cout<<"\n\nBoundary Value Test Cases:\n";
            for(i = 0; i < 5; i++)
            {
                cout<<bVal[i]<<"\t"<<bVal[2]<<"\t"<<bVal[2]<<"\t";
                t.setSide(bVal[i],bVal[2],bVal[2]);
            }
            for(i = 0; i < 5; i++)
            {
                cout<<bVal[2]<<"\t"<<bVal[i]<<"\t"<<bVal[2]<<"\t";
                t.setSide(bVal[2],bVal[i],bVal[2]);
            }
            for(i = 0; i < 5; i++)
            {
                cout<<bVal[2]<<"\t"<<bVal[2]<<"\t"<<bVal[i]<<"\t";
                t.setSide(bVal[2],bVal[2],bVal[i]);
            }
            cout<<endl;
            break;
        case 3:
            cout<<"\n\nRobust Test Cases:\n";
            for(i = 0; i < 7; i++)
            {
                cout<<rVal[i]<<"\t"<<rVal[3]<<"\t"<<rVal[3]<<"\t";
                t.setSide(rVal[i],rVal[3],rVal[3]);
            }
            for(i = 0; i < 7; i++)
            {
                cout<<rVal[3]<<"\t"<<rVal[i]<<"\t"<<rVal[3]<<"\t";
                t.setSide(rVal[3],rVal[i],rVal[3]);
            }
            for(i = 0; i < 7; i++)
            {
                cout<<rVal[3]<<"\t"<<rVal[3]<<"\t"<<rVal[i]<<"\t";
                t.setSide(rVal[3],rVal[3],rVal[i]);
            }
            cout<<endl;
            break;
        case 4:
            flag = false;
            break;
        default:
            cout<<"\nEnter correct value\n";
            break;
        }

    }while(flag);
    return 0;
}

