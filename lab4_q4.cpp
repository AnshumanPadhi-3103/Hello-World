#include<iostream>//library
using namespace std; //using standard defination
int main(){
int years, p, months, d,days;
cout << "Number of days is equal to" << endl;
cin >> days; //enter value in terminal 
years= days/365;//conversion
p= days%365;//conversion
months= p/30;//conversion
d= p%30;
cout << "number of months equals=" << months << "months" << endl;
cout << "number of years equal="   << years << "years" << endl;
cout << "number of days equals=" << d << "days" << endl;
return 3;
}
