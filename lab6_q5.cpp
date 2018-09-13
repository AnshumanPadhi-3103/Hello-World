
//Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 




//Q2A Sum (by value)
/*Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.
*/
#include<iostream>
using namespace std;
/*
Write a program with a function that takes two int parameters, adds them together, then returns the sum.
*/
int funcSum(int Frst,int Scnd)
{
	int sUm;
	sUm=Frst+Scnd;
	return (sUm);// then returns the sum.
}

//Q3a.Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

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

//MINIMUM(By Value) Write a program with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.

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

//Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 

int main()
{
	int x,y;
	float o;
	cout<<"give two integers"<<endl;//The program should ask the user for two numbers
	cin>>x>>y;
	flag:
	cout<<"Give your choice /n 1. sum /n 2.maximum /n 3. minimum"<<endl;
	cin>>o;
	if (o==1)
	{
		cout<<"The sum is "<<funcSum(x,y)<<endl;
	}
	else if(o==2)
	{
		cout<<"The maximum number is "<<mAx(x,y)<<endl;
	}
	else if(o==3)
	{
		cout<<"The minimum number is "<<mIn(x,y)<<endl;
	}
	else
	{
		cout<<"Give a valid response"<<endl;
		goto flag;
	}
	return 0;
}
