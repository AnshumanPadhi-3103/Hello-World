#include<iostream>//using all libraries
using namespace std;
int main()//integer main fucntion
{
int m,n;
	cout<<"No. of points in heighgt of triangle"<<endl;//printing in terminal
	cin>>n;//value in terminal
	int i=0; m=n-1;//defining variables
	for(i=0; i<=m;i++)
	{
	cout<<"*";
		for(int j=0; j<m-i;j++)
		{
		cout<<"*";
		}
		cout<<endl;
	}
return 0;
}
