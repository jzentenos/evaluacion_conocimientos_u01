#include<iostream>
using namespace std;
int main(){
	int num1,num2, r;
	char op;
	cout<<"Numero1: "; cin>>num1;
	cout<<"Operador: "; cin>>op;
	cout<<"Numero2: "; cin>>num2;
	switch(op){
		case '+':	
				r =num1+num2;	
		break;
		case '-': 
				r=num1-num2;
		break;
		case  '*':
				r=num1*num2;
		break;
		case '/': 
				r=num1/num2;
		break;
		default: 
		break;
	}
	cout<<r;
	return 0;
}
