#include <iostream>

 using namespace std;

 inline void show(){	
 	 
 	 double X,Y;
 	 char Operator;
 	 
 	 cout<<"Enter First Value Of A: ";
 	 cin>>X;
 	 cout<<"Enter Second Value Of B: ";
 	 cin>>Y;
 	 cout<<"Enter Operator(+,-,*,/): ";
 	 cin>>Operator;

 
 switch(Operator) {
 	case '+':
 	 cout<<"Addition: "<<X+Y;
     break;
 		
 	case '-':
	 cout<<"Substraction: "<<X-Y;
	 break;
	 
	case '*':
	 cout<<"Multiplication: "<<X*Y;
	 break;
	 
	case '/':
	 if(B!=0){
	 	cout<<"Division: "<<X/Y;
	 }else{
	 	cout<<"Invalid Division!!";
	 break;
}
	default:
	 cout<<"Error!!.. invalid Operator";  	
  
 }
 }
