/*3: Construya un programa que dado como dato la calificaci�n�de un alumno en un examen,
escriba Aprobado�si su calificaci�n es mayor o igual a 8 y reprobado en caso contrario*/

#include<iostream>
using namespace std;
int main(){
	
	int n1,aprobado,reprobado,num;
	cout<<"nota del examen "<<endl;
	cin>>num;
	
	if (n1>=8){
		cout<<"usted esta aprobado "<<endl;
	}
	else
	{
		cout<<"usted a reprobado "<<endl;
	}
    return 0;
}
