#include <iostream>
#include <string>

using namespace std;

int main()
{
	char salir = 'y';
	float A , B , resultado;
	int operacion;
	while (salir != 'n')
	{
		cout<<"Menu de operaciones\n";
		cout<<"1.Suma\n";
		cout<<"2.Resta\n";
		cout<<"3.Multiplicacion\n";
		cout<<"4.Division\n";
		cout<<"5.Raiz\n";
		cout<<"6.Potencia\n";
	
		cin>>operacion;

		cout<<"Ingresa el primer numero\n";
		cin>> A;
		cout<<"Ingrse el segundo numero\n";
		cin>> B;

		switch (operacion)
		{
		case 1:
			cout<<"El resultado de " << A <<" + "<< B <<" = " << A + B <<"\n" ;
			break;
		case 2:
			cout<<"El resultado de" << A <<" - "<< B <<" = " << A - B <<"\n" ;
            break;
		case 3:
			cout<<"El resultado de" << A <<" * "<< B <<" = " << A * B <<"\n" ;
            break;
		case 4:
			cout<<"El resultado de" << A <<" / "<< B <<" = " << A / B <<"\n" ;
            break;
		case 5:
			cout<<"El resultado de" << A <<" RAIZ "<<B <<" = " << pow(A,1/B) <<"\n" ;
            break;
		case 6:
			cout<<"El resultado de" << A <<" ^ "<< B <<" = " << pow(A,B) <<"\n" ;
            break;
		default:
			break;
		}
		cout<<"¿Quieres realizar otra operacion?(y/n)\n";
		cin>>salir;
		system("cls");
	}
	return 0;
}
