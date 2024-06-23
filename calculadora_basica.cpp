#include<iostream>
using namespace std;
int main(){
	int num1,num2, r,op;
	cout<<"Ingrese un numero: "; cin>>num1;
	cout<<"Ingrese otro numero: "; cin>>num2;
	cout<<"\tMenu de Opciones"<<endl;
	cout<<"1. Sumar"<<endl;
	cout<<"2. Restar"<<endl;
	cout<<"3. Producto"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Opcion: "; cin>>op;
	
	switch(op){
		case 1: r=num1+num2;
			cout<<"Resultado: "<<r;
			break;
		case 2: r=num1-num2;
			cout<<"Resultado: "<<r;	
			break;
		case 3: r=num1*num2;
			cout<<"Resultado: "<<r;
			break;
		case 4: 
				if(num2==0){
					cout<<"Indeterminado";
				}
				else{
					r=num1/num2;
					cout<<"Resultado: "<<r;
				}
			break;
		case 0: 
			break;
		default: 
				cout<<"Opcion no valida";
	}
	
	return 0;
}
