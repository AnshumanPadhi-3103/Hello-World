#include<iostream>//library
//taking standard definations
using namespace std;
int main(){ //integer function
//declaring float variables
float centimeter,meter,kilometer;
cout << "Enter Length in centimeters" << endl;//print in terminal
cin >> centimeter ;
meter = centimeter/100 ;
kilometer = centimeter/100000;
cout << "length in meters is" << meter <<" meter" << endl;
cout << "length in kilometer is" << kilometer <<" kilometer" << endl;
return 0;
}

