#include<iostream>
using namespace std;
double suma(int a);
int fact(int b);
int main(){
	int n;
	cout<<"Ingrese la cantidad de elementos: "; cin>>n;
	double sum= suma(n);
	cout<<"La suma es: "<<sum<<endl;
	return 0;
}
double suma(int a){
	double s=0;
	for(double i=1; i<=a; i++){
		s=s+ ( fact(i) ) / (2*i);
	}
	return (s);
}
int fact(int b){
	int f=1;
	for(int i=2; i<=b; i++){
		f=f*i;
	}
	return (f);
}
