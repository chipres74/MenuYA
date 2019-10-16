// ProgramaMenu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
void pausa();

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Conversiones" << endl;
		cout << "-----------" << endl << endl;
		cout << "\t1 .- Binario-Decimal" << endl;
		cout << "\t2 .- Decimal-Binario" << endl;
		cout << "\t3 .- Binario-Decimal" << endl;
		cout << "\t4 .- Binario-Hexadecimal" << endl;
		cout << "\t5 .- Texto-Binario" << endl;
		cout << "\t6 .- Salir" << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << "Has elejido Binario-Decimal. \n";
			{
				int exp, digito;
				double binario, decimal;
				cout << "Introduce el numero binario: ";
				cin >> binario;
				exp = 0;
				decimal = 0;
				while (((int)(binario / 10)) != 0)
				{
					digito = (int)binario % 10;
					decimal = decimal + digito * pow(2.0, exp);
					exp++;
					binario = (int)(binario / 10);
				}
				decimal = decimal + binario * pow(2.0, exp);
				cout << endl << "El Decimal es: " << decimal << endl;
			}
			pausa();
			break;
		case '2':
			system("cls");
			cout << "Has elejido Decimal-Binario. \n";
			{
				int numero, exp, digito;
				double binario;
				cout << "Introduce numero: ";
				cin >> numero;
				exp = 0;
				binario = 0;
				while (numero / 2 != 0)
				{
					digito = numero % 2;
					binario = binario + digito * pow(10.0, exp);
					exp++;
					numero = numero / 2;
				}
				binario = binario + numero * pow(10.0, exp);
				cout << fixed << setprecision(0);
				cout << "binario: " << binario << endl;
			}
			pausa();
			break;
		case '3':
			system("cls");
			cout << "Has elejido Binario-Octal. \n"; {

			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Binario-Hexadecimal. \n";{

		}
			pausa();
			break;
		case '5':
			system("cls");
			cout << "Has elejido Texto-Binario. \n";

			{
				char texto[300];
				int contador = 0, num, resul, cerosunos[20], i;
				int clrscr();
				printf("introduzca un texto para convertirlo a codigo binario:\n");
				cin >> (texto);
				while (contador < strlen(texto))
				{
					i = 1;
					num = texto[contador];
					while (num > 0)
					{
						resul = num % 2;
						if (resul == 0)
						{
							cerosunos[i] = 0;
							i = i + 1;
						}
						else
						{
							cerosunos[i] = 1;
							i = i + 1;
							num = num - 1;
						}
						num = num / 2;
					}
					i = i - 1;
					while (i > 0)
					{
						printf("%i", cerosunos[i]);
						i = i - 1;
					}
					printf(" ");
					contador = contador + 1;
				}
				getwchar();

				return 0;
			}
			pausa();
			break;
		case '6':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} while (bandera != true);
	return 0;

}
//Desarrollamos la función
void pausa()
{
	cout << "Pulsa una tecla para continuar... ";
	getwchar();
	getwchar();
}