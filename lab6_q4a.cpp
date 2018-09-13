//By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.

#include<iostream>//including libraries
using namespace std;
int mIn(int a,int b)//Write a program with a function that takes two int parameters,
{
	if(a<=b)//finds the min
	{
		return (a);//then returns the minimum.
	}
	else
	{
		return(b);//then returns the minimum.
	}
}
int main()
{
	int x,y;
	cout<<"Give me two numbers"<<endl;//The program should ask the user for two numbers,
	cin>>x>>y;//taking value from terminal
	cout<<"The minimum number is "<<mIn(x,y)<<endl;//then call the function with the numbers as arguments, and tell the user the minimum.
	return 0;
}
