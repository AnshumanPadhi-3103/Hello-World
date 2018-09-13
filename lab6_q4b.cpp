//(By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.

#include<iostream>//including libraries
using namespace std;
int mIn(int a,int b,int& c)

//Write a program with a function that takes two int parameters, and takes a third

{
	if(a<=b)//finds the min
	{
		c=a;//then puts the minimum in that.
	}
	else
	{
		c=b;//then puts the minimum in that.
	}
}
int main()
{
	int x,y,z;
	cout<<"Give me two numbers"<<endl;//The program should ask the user for two numbers,
	cin>>x>>y;//taking value from terminal
	mIn(x,y,z);
	cout<<"the minimum number is "<<z<<endl;
	return 0;
}

