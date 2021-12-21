//contador de notas//
#include<iostream>
using namespace std;
int main()
{
	int c=0,x;
	float ca=0,cr=0,p=5;
	do{
	cout<<"ingrese las notas: ";
	cin>>x;

	c=c+1;
	if(x>7){
	ca=ca+1;
	}else
	if(x<7){
	cr=cr+1;
	}
	}while(c<p);
	cout<<"la cantidad de aprobados es:"<<ca<<endl;
	cout<<"la cantidad de reprobados es:"<<cr<<endl;
	return 0;
}
