/*
7.UpperCase and LowerCase
 a.Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
 b.Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
 c.Write a main program, that calls the above function based on the input of the user. 
 If the user enters a lower case character, it should automatically detect it and call toUpper() 
 and display the upper case value and vice-versa. 
*/
#include<iostream>
using namespace std;


//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.


char toUpper(char leTer)
{
	int i;
	i=int(leTer);
	return (char(i-32));
}


//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.

char toLower(char leTer)
{
	int i;
	i=int(leTer);
	return (char(i+32));
}


//Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa.


int main()//integer main function
{
	char leTer;
	int i;
	//input of the user.
	cout<<"Give a letter "<<endl;
	cin>>leTer;
	i=int(leTer);
	
	 //If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value 
	
	if(i>=97&&i<=122)//putting conditions
	{
		cout<<"the upper case is "<<toUpper(leTer)<<endl;
	}
	/*
	 If the user enters a upper case character, it should automatically detect it and call toLower() 
 	and display the lower case value
	*/
	else if(i>=65&&i<=90)//alternative
	{
		cout<<"the lower case is "<<toLower(leTer)<<endl;
	}
	else
	{
		cout<<"ERROR"<<endl;
	}
	return 0;
}
