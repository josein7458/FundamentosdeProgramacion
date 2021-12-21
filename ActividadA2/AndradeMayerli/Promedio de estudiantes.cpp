#include<iostream>
using namespace std;
int main()
{
	int c=0, x;
	float ca=0, cr=0, l=30;
	do{
	cout<<"Ingrese las notas: ";
	cin>>x;
	
	c=c+1;
	if(x>7){
	ca=ca+1;	
	}else
	if(x<5){
	cr=cr+1;
	}
	
	}while(c<l);
	
	cout<<"La cantidad de aprobados es: "<<ca<<endl;
	cout<<"La cantidad reprobados es: "<<cr<<endl;

    return 0;

}