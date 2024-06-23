#include<iostream>
using namespace std;
int main(){
	int n1,n2,c=0;
	cout<<"Ingrese un numero: "; cin>>n1;
	cout<<"Ingrese otro numero: "; cin>>n2;
	int i=1;
	while(i<=n1 && i<=n2){
		if(n1%i==0 && n2%i==0){
			c++;
		}
		i++;
	}
	if(c>1){
		cout<<"No son PESI";
	}
	else{
		cout<<"Son PESI";
	}
	return 0;
}
