#include<iostream>
using namespace std;
class date
{
private:
    int day;
    int month;
    int year;
    int bday,bmonth,byear;
    int age ;
public:
    date()
    {
        cout<<"Enter today's date "<<endl;
        cin>> day >> month >> year;
        cout<<day <<"/"<<month<<"/"<<year<<endl;
    }

    void leap()
    {
        if ((year%100!=0)&&(year%4 ==0)||(year%400==0))
            cout<<year<<"is a leap year"<<endl;
        else
            cout<<year<<"is not a leap year"<<endl;    

    }
    void dob()
   {
    int date1;
    int month1;
    int year1;
    cout<<"enter date of birth"<<endl;
    cin>>date1;
    cin>>month1;
    cin>>year1;
    cout<<date1<<"/"<<month1<<"/"<<year1<<endl;

    int mont[] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
    if (date1 > date) 
    {
        date = date + mont[month1 - 1];
        month = month - 1;
    }
    else if (month1 > month) 
    {
        year = year - 1;
        month = month + 12;
    }
    int date2 = date - date1;
    int month2 = month - month1;
    int year2 = year - year1;
    cout<<" Age is-" <<year2<< " years " << month2 << " months and " << "days-"<< date2;
   }
    
    
};
int main()
{
    date d1;
    d1.leap();
    d1.dob();
}
