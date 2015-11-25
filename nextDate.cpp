#include <ctime>
#include <iostream>
 using namespace std;
#define lowerYearLimit 1900
#define upperYearLimit 2100

 class date
 {
    int day,month,year,dayLimit,monthLimit,yearLimit;
    int nextDay,nextMonth,nextYear;
    public:
    date()
    {
        day = 1;
        month = 1;
        year = lowerYearLimit;
        dayLimit = 30;
        monthLimit = 12;
        yearLimit = upperYearLimit;
    }
    bool validate()
    {
        bool cond1,cond2,cond3;
        cond1 = (year >= lowerYearLimit) && (year <= upperYearLimit);
        cond2 = (month >= 1) && (month <= 12);
        switch(month){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dayLimit = 31;
                break;
            case 4: case 6: case 9: case 11:
                dayLimit = 30;
                break;
            case 2:
                if(year%4 == 0){
                    if(year%100 == 0){
                        if(year%400 == 0)
                            dayLimit = 29;
                        else
                            dayLimit = 28;
                    }
                    else
                        dayLimit = 29;
                }
                else
                    dayLimit = 28;
                break;
            default:
                break;
        }
        //cout<<dayLimit;
        cond3 = (day >= 1) && (day <= dayLimit);
        if(!cond1)
            cout<<"\nEntered Year is out of range\n";
        if(!cond2)
            cout<<"\nEntered month is invalid\n";
        if(!cond3)
            cout<<"\nEntered Day is invalid\n";
        return (cond1 && cond2 && cond3);
    }
    void setDate()
    {

        do
        {
            cout<<"\nEnter the Date in the format DD MM YYYY: ";
            cin>>day>>month>>year;
        }while(!validate());
    }
    void findNextDay()
    {
        if(day == dayLimit && month == monthLimit && year == yearLimit){
            cout<<"Next Day out of range";
            return;
        }
        if(day < dayLimit){
            nextDay = day + 1;
            nextMonth = month;
            nextYear = year;
        }
        else if(day == dayLimit)
        {
            nextDay = 1;
            if(month == monthLimit){
                nextYear = year + 1;
                nextMonth = 1;
            }
            else{
                nextMonth = month + 1;
                nextYear = year;
            }
        }
        cout<<"\nNext date : "<<nextDay<<"/"<<nextMonth<<"/"<<nextYear<<endl;
    }
 };

int main()
{
    int n;
    cout<<"Enter the number of test cases: ";
    cin>>n;
    date d[n];
    for(int i = 0; i < n; i++)
    {
        d[i].setDate();
        d[i].findNextDay();
    }
    return 0;

}
