//Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.

#include<iostream>//including library
using namespace std;
//the function that finds the maximum should be void, and takes a third, pass by reference parameter

void mAx(int a,int b,int& c)
//Write a program with a function that takes two int parameters,and takes a third, pass by reference parameter//
{
	if(a>=b)//finds the maximum,
	{
		c=a;//then puts the maximum in that.
	}
	else
	{
		c=b;//then puts the maximum in that.
	}
}
int main()
{
	int x,y,z;
	cout<<"Give me two numbers"<<endl;//The program should ask the user for two numbers,
	cin>>x>>y;//taking value from terminal
	mAx(x,y,z);
	cout<<"the maximum number is "<<z<<endl;
	return 0;
}
