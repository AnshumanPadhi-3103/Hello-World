#include<iostream> //including all libraries
using namespace std;
int main(){ //integer main function
	int n;//definaning variables
	cout<<"enter the number of stars in each side of the square"<<endl; //asking user for input
	cin>>n; //value in terminal
	for(int i=0; i<n;i++) //using for command
	{
		for(int j=0; j<(n-i);j++)
		{
		cout<<"*";
		}
		for(int j=0; j< (2*i);j++)
		{
		cout<<" ";
		}
		for(int j=0; j<(n-i); j++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
	for(int i=0; i<n;i++) //using for command
	{
		for(int j=0; j<i+1;j++)
		{
		cout<<"*";
		}
		for(int j=2*i; j< 2*n-2;j++)
		{
		cout<<" ";
		}
		for(int j=0; j< i+1;j++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
return 0;
}
