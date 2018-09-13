//Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.

#include<iostream>//including library
using namespace std;

//Write a program with a function that takes two int parameters, adds them together, then returns the sum.

int funcSum(int First,int Second)
{
	int sum;
	sum=First+Second;
	return (sum);
}

//The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.

int main()
{
	int first,second;
	cout<<"give two integers"<<endl;//The program should ask the user for two numbers
	cin>>first>>second;
	
//then call the function with the numbers as arguments, and tell the user the sum.
	
	cout<<"The sum is "<<funcSum(first,second)<<endl;
	return 0;
}
