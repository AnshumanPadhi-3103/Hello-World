#include<iostream>//library

using namespace std;//using standard defination
int main(){//using int main function
           int a1;//declaring variable
           cout<<"enter year"<< endl;//ask user
           cin >> a1;//extract from terminal
           if(a1%4==0){//condition 1
		if(a1%100==0){//condition 2
			if(a1%400==0)//condition 3
                        cout<< a1<< " is leap year"<< endl;
                        else{//alternative 3
			cout<< a1<< " is not a leap year";
                        }
                 }
                 else{//alternative 2
                 cout<< a1<<" is a leap year"<< endl;
                 }
           }
           else//alternative 1
           cout<< a1 << " is not a leap year"<< endl;
           


return 14;
}
      
