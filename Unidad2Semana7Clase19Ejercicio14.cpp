#include <iostream>
using namespace std;

void divisionSucesivaDe(int dividiendo, int divisor);

int main()
{
	int dividendo,divisor;
	cout <<"Ingresa el dividendo: "; cin>>dividendo;
	cout <<"Ingresa el divisor: "; cin>>divisor;
	divisionSucesivaDe(dividendo,divisor);
	
	return 0;
}

void divisionSucesivaDe(int dividendo, int divisor){
	int cociente;
	while(dividendo >= divisor)
	{ dividendo -= divisor; cociente++; }
	cout<<"El resto es: "<<dividendo<<endl;
	cout<<"El cociente es: "<<cociente<<endl;
}
