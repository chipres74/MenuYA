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
		cout << "\t3 .- Binario-Octal" << endl;
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
			cout << "Has elejido Binario-Octal. \n";
			{
#define ARREGLO_MAX 100
				string a;
				int bi[ARREGLO_MAX];
				int i;
				int num;
				string res[ARREGLO_MAX];
				cout << "Cuantos pares de 3 digitos son?:" << endl;
				cin >> num;
				for (i = 1; i <= num; i++) {
					cout << "Ingresa tres digitos de numeros: " << endl;
					cin >> bi[i - 1];
				}
				for (i = 1; i <= num; i++) {
					switch (bi[i - 1]) {
					case 000:
						res[i - 1] = "0";
						break;
					case 001:
						res[i - 1] = "1";
						break;
					case 010:
						res[i - 1] = "2";
						break;
					case 011:
						res[i - 1] = "3";
						break;
					case 100:
						res[i - 1] = "4";
						break;
					case 101:
						res[i - 1] = "5";
						break;
					case 110:
						res[i - 1] = "6";
						break;
					case 111:
						res[i - 1] = "7";
						break;
					}
				}
				for (i = 1; i <= num; i++) {
					a = a + res[i - 1];
				}
				cout << a << endl;
			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << "Has elejido Binario-Hexadecimal. \n";{
				
					char numero[9], temp[2];
					short potencia[9] = { 1,2,4,8,16,32,64,128 };
					int i, x, total = 0, decimal[9];
					cout << ("Escriba un numero binario: ");
					cin >> ("%s", numero);
					for (i = 0; numero[i] != '\0'; i++);
					int limite = i;
					i--;
					for (x = 0; x < limite; x++, i--) {
						temp[0] = numero[i];
						decimal[x] = atoi(temp);
						decimal[x] *= potencia[x];
						total += decimal[x];
					}
					printf("resultado en decimal: %d", total);
					printf("\nresultado en hexadecimal: %x", total);
			}
			getwchar();
			return 0;

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