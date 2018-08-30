#include<iostream>//library
using namespace std;//using stanndard defination
int main(){ //using int main function
           int a1; //defining variable
           cout<<"Enter number-"<<endl;//ask user
           cin>> a1;//extract from terminal
           if((a1 % 5 ==0) && (a1 % 11==0)){//condition
              cout<<"Number is divisible by both 5 and 11"<<endl;
              }
           else{//alternative
              cout<<"Number is not divisible byb both 5 and 11"<<endl;
              }
           return 14;
          }  
