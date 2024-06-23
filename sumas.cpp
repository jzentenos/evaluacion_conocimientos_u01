#include<iostream>
#include<stdlib.h>
using namespace std;
double suma(int a);
int fact(int b);
int main(){
	int n;
	cout<<"\tPrograma que calcula la sumatoria dada"<<endl;
	cout<<"Ingrese la cantidad de elementos: "; cin>>n;
	if(n>=0){
		double sum= suma(n);
		cout<<"La sumatoria de los primeros "<<n<<" elementos es: "<<sum<<endl;
	}
	else{
		cout<<"Ingrese numeros positivos"<<endl;
	}
	system("pause");
	return 0;
}
double suma(int a){
	double s=0.0;
	for(double i=1; i<=a; i++){
		s=s+ ( fact(i) ) / (2.0*i);
	}
	return s;
}
int fact(int b){
	int f=1;
	for(int i=2; i<=b; i++){
		f=f*i;
	}
	return f;
}
