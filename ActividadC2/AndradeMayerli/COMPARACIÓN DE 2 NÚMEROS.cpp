// COMPARACION DE 2 NÚMEROS//

#include<iostream>
using namespace std;
int main()
{
float N1, N2;
cout<<"Ingrese N1: "; cin>>N1;
cout<<"Ingrese N2: "; cin>>N2;
if (N1==N2){
cout<<"El valor de N1: "<<N1<<" Es igual a N2: "<<N2<<endl;
}
else{
if (N1<N2){
cout<<"El valor de N1: "<<N1<<" ES MENOR a N2: "<<N2<<endl;  
}else{
cout<<"El valor de N2: "<<N2<<" ES MENOR a N1: "<<N1<<endl;
}
}
return 0;
}
