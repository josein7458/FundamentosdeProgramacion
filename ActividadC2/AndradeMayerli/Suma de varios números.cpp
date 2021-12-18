/********  SUMA VARIOS NÚMEROS  *******/
#include<iostream>
using namespace std;
int main()
{
	int c=0, n;
	float s=0,e;
	cout<<"Ingrese la cantidad del valor a sumar :";
	cin>>n;
	do{
		cout<<"Ingrese el elemento:"<<c+1;
		cin>>e;
		c=c+1;
		s=s+e;
	}while(c<n);
	cout<<"La suma de los elementos es : "<<s<<endl;
	
	return (0);
}
