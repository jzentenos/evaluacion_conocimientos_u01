#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num1,num2, r,op;

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
			case 1: r=num1+num2;
				cout<<"Resultado: "<<r<<endl;
				system("pause");
				break;
			case 2: r=num1-num2;
				cout<<"Resultado: "<<r<<endl;	
				system("pause");
				break;
			case 3: r=num1*num2;
				cout<<"Resultado: "<<r<<endl;
				system("pause");
				break;
			case 4: 
					if(num2==0){
						cout<<"Indeterminado"<<endl;
						system("pause");
					}
					else{
						r=num1/num2;
						cout<<"Resultado: "<<r<<endl;
						system("pause");
					}
				break;
			case 0: 
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
