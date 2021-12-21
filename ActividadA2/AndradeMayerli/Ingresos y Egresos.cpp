//Ingresos y Egresos//
#include<iostream>
using namespace std;
int main()
{
	int c=0, x;
	float s=0, si=0, se=0, l;
	cout<<"Ingrese el limite: ";
	cin>>l;
	do{
	cout<<"Ingrese los valores: ";
	cin>>x;
	c=c+1;
	s=s+x;
	if(x>0){
	si=si+x;
	}else
        se=se+x;
	}while(c<l);
	if(c<l);
	else
	{
	cout<<"El saldo de Egresos es: "<<se<<endl;
	cout<<"El saldo de Ingresos es: "<<si<<endl;

		return 0;
}
}