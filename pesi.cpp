#include<iostream>
using namespace std;
int main(){
	int n1,n2,c=0;
	int menor;
	cout<<"\tPrograma Numeros PESI"<<endl;
	cout<<"Numero 1: "; cin>>n1;
	cout<<"Numero 2: "; cin>>n2;
	if ( n1<=0 || n2<=0){
		cout<<"\nIngrese ambos numeros positivos";
		return 0;
	}

	if(n1<=n2){
		if(n1<n2){
			menor=n1;
		}
		else{
			cout<<"Los numeros "<<n1<<" y "<<n2<<"No son PESI";
		}
	}
	else{
		menor=n2;
	}
	
	int i=1;
	while(i<=menor){
		if(n1%i==0 && n2%i==0){
			c++;
		}
		i++;
	}
	if(c>1){
		cout<<"Los numeros "<<n1<<" y "<<n2<<" no son PESI";
	}
	else{
		cout<<"Los numeros "<<n1<<" y "<<n2<<" son PESI";
	}
	return 0;
}
