//ingresosyegresos//
#include<iostream>
using namespace std;
int main()
{
	int x,c=0;
	float s=0,si=0,se=0,l;
	cout<<"ingrese el limite: ";
	cin>>l;
	do{
	cout<<"ingrese los valores: ";
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
	cout<<"el saldo de egreso es: "<<se<<endl;
	cout<<"el saldo de ingreso es: "<<si<<endl;
	return 0;
	}
	}
