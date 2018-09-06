#include<iostream> //including all libraries
using namespace std;
int main(){ //programme to print a star pyramid
	int i,j,n;//defining variables
	cout<<"enter the number of stars in each sides of the square="<<endl; //ask user the number of * in the square
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"*";
			}
		cout<<endl;
		}
return 0;
}

