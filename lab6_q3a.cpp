//Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

#include<iostream>//including library
using namespace std;
int mAx(int a,int b)//Write a program with a function that takes two int parameters,
{
	if(a>=b)//finds the maximum,
	{
		return (a);//then returns the maximum
	}
	else
	{
		return(b);//then returns the maximum
	}
}
int main()
{
	int x,y;
	cout<<"Give me two numbers"<<endl;//The program should ask the user for two numbers
	cin>>x>>y;//taking value from terminal
	cout<<"The maximum number is "<<mAx(x,y)<<endl;//then call the function with the numbers as arguments, and tell the user the maximum.
	return 0;
}
