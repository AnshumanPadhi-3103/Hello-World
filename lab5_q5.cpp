#include<iostream>				//library
using namespace std ;			//standard defination


int main(){//using integer main function
          char letter;//declaring variables 
            cout <<"enter alphabet"<< endl;//ask user
            cin >> letter;//extract from terminal
            if(letter== 'a' or 
               letter=='e' or
               letter=='i' or 
               letter=='o' or 
               letter=='u'){//condition 
           
               cout<<letter <<" is a vowel"<< endl;
               }
            else{//alternative
                cout<< letter << " is a consonant"<<endl;
                }
return 3;
}
