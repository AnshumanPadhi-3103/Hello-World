/*
6.Sum of even and odd
 a.Write a function that outputs the sum of all even numbers between firstNum and 
 secondNum. (use loop); create a user-defined function called sumEvenNumbers(). 
 Use call-by-value
 b.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); 
 create a user-defined function called sumOddNumbers(). Use call-by-value
 c.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. 
 (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
 d.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum.
  (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
 e.Write a main program. 
	i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. 
	Use sumEven to hold a returned value.
	ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. 
	Use sumOdd to hold a returned value.
	iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function.
	 Use sumSquareEven to hold a returned value.
	iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. 
	Use sumSquareOdd to hold a returned value.
Then display the values.
*/

#include<iostream>
using namespace std;

/*
a.Write a function that outputs the sum of all even numbers between firstNum and 
 secondNum. (use loop); create a user-defined function called sumEvenNumbers(). 
 Use call-by-value
*/

int sumofEvenNumbers(int firstNum,int secondNum)
{
	int sum=0;
	for(int i=firstNum;i<=secondNum;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	return (sum);
}

/*
b.Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); 
 create a user-defined function called sumOddNumbers(). Use call-by-value
*/

int sumofOddNumbers(int firstNum,int secondNum)
{
	int sum=0;
	for(int i=firstNum;i<=secondNum;i++)//initialising for loop
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
	}
	return (sum);
}

/*
c.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. 
 (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
*/

int sumofSquareOddNumbers(int firstNum,int secondNum)
{
	int sum=0;
	int i=firstNum;
	while(i<=secondNum)//(use while loop)
	{
		if(i%2==1)
		{
			sum=sum+(i*i);
		}
		i++;
	}
	return (sum);
}

/*
 d.Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum.
  (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
*/

int sumofSquareEvenNumbers(int firstNum,int secondNum)
{
	int sum=0;
	int i=firstNum;
	while(i<=secondNum)//(use while loop)
	{
		if(i%2==0)
		{
			sum=sum+(i*i);
		}
		i++;
	}
	return (sum);
}

/*
e.Write a main program. 
	i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. 
	Use sumEven to hold a returned value.
	ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. 
	Use sumOdd to hold a returned value.
	iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function.
	 Use sumSquareEven to hold a returned value.
	iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. 
	Use sumSquareOdd to hold a returned value.
Then display the values.
*/

int main()//Write a main program.
{
	int firstNum,secondNum,x,y,sumofEven,sumofOdd,sumofSquareOdd,sumofSquareEven;
	cout<<"Give me two numbers"<<endl;//asking user for values
	cin>>x>>y;
	if(x>=y)//putting condition
	{
		firstNum=y;
		secondNum=x;
	}
	else//putting alternative
	{
		firstNum=x;
		secondNum=y;
	}
	/*
	i.Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. 
	Use sumEven to hold a returned value.
	*/
	sumofEven=sumofEvenNumbers(firstNum,secondNum);
	/*
	ii.Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. 
	Use sumOdd to hold a returned value.
	*/
	sumofOdd=sumofOddNumbers(firstNum,secondNum);
	/*
	iii.Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function.
	 Use sumSquareEven to hold a returned value.
	*/
	sumofSquareEven=sumofSquareEvenNumbers(firstNum,secondNum);
	/*
	iv.Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. 
	Use sumSquareOdd to hold a returned value.
	*/
	sumofSquareOdd=sumofSquareOddNumbers(firstNum,secondNum);
	/*
	display the values.
	*/
	cout<<"The sum of the even numbers inbetween the two entered numbers is "<<sumEven<<endl;
	cout<<"The sum of the odd numbers inbetween the two entered numbers is "<<sumOdd<<endl;
	cout<<"The sum of the square of the even numbers inbetween the two entered numbers is "<<sumSquareEven<<endl;
	cout<<"The sum of the square of the odd numbers inbetween the two entered numbers is "<<sumSquareOdd<<endl;
	return 0;
}
