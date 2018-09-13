#include<iostream>//Including Library
using namespace std;


// Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module.Choose an appropriate name for this function.


void inputModule(float& unitCst,float& units,float& taxRt)
{
	cout<<"Give the unit cost"<<endl;
	cin>>unitCst;
	cout<<"Give the number of units"<<endl;
	cin>>units;
	cout<<"Enter the tax rate"<<endl;
	cin>>taxRt;
}

// Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue.Choose an appropriate name for this function.


void calculationModule(float& unitCst,float& units,float& taxRt,float& salesTx,float& totDue)
{
	salesTx = unitCst*taxRt/100;
	totDue = unitCst*(1+taxRt/100)*units;
}


// Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format.Choose an appropriate name for this function.


void outputModule(float& unitCst,float& units,float& taxRt,float& salesTx,float& totDue)
{
	cout<<"The unit cost is "<<unitCst<<endl;
	cout<<"The number of units is "<<units<<endl;
	cout<<"The rate of tax is "<<taxRt<<endl;
	cout<<"The sales Tax is "<<salesTx<<endl;
	cout<<"Hence, the total due is "<<totDue<<endl;
}


//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.Your program should call the functions listed above.


int main()
{
	float unitCost,unitsPurch,taxRate,salesTax,totalDue;
	
	inputModule(unitCost,unitsPurch,taxRate);
	
	calculationModule(unitCost,unitsPurch,taxRate,salesTax,totalDue);

	outputModule(unitCost,unitsPurch,taxRate,salesTax,totalDue);

	return 0;
}
