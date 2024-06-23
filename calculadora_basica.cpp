#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	double num1,num2, r;
	int op;

	do{
		system("cls");
			cout<<"Ingrese un numero: "; cin>>num1;
			cout<<"Ingrese otro numero: "; cin>>num2;
		system("cls");	
		cout<<"\tMenu de Opciones"<<endl;
		cout<<"1. Sumar"<<endl;
		cout<<"2. Restar"<<endl;
		cout<<"3. Producto"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Opcion: "; cin>>op;
		switch(op){
			case 1: 
				system("cls");
				r=num1+num2;
				cout<<"La suma de "<<num1<<" y "<<num2<<" es: "<<r<<endl;
				system("pause");
				break;
			case 2: 
				system("cls");
				r=num1-num2;
				cout<<"La diferencia de "<<num1<<" y "<<num2<<" es: "<<r<<endl;	
				system("pause");
				break;
			case 3: 
				system("cls");
				r=num1*num2;
				cout<<"El producto de "<<num1<<" por "<<num2<<" es: "<<r<<endl;
				system("pause");
				break;
			case 4: 
					system("cls");
					if(num2==0){
						cout<<"Indeterminado"<<endl;
						system("pause");
					}
					else{
						r=num1/num2;
						cout<<"La division de "<<num1<<" entre "<<num2<<" es: "<<r<<endl;
						system("pause");
					}
				break;
			case 0: 
				system("cls");
				cout<<"El programa se cerrara"<<endl;
				system("pause");
				break;
			default: 
				cout<<"Opcion no valida"<<endl;
				system("pause");
				break;
		}
	}while(op!=0);
	return 0;
}
