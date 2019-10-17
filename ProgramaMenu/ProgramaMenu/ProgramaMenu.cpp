#include <string>
#include <iostream>
#include <cmath>
#include<cstdlib>
#include <iomanip>
#include <cmath>
#include <stdio.h>
using namespace std;
void pausa();

#define DEFAULT0 "\x1b[0m" //TEXTO
#define DEFAULT1 "\x1b[39m" // COLOR
#define DEFAULTF "\x1b[49m" // FONDO

//== = Colores == = 
//== = Texto == = 
//-Rojo 
#define RED "\x1b[31m" 
//- Verde 
#define GREEN "\x1b[32m" 
//- Negro
#define BLACK "\x1b[30m" 
//- Azul 
#define BLUE "\x1b[34m" 
//- Amarillo 
#define YELLOW "\x1b[33m" 
//- Magenta 
#define MAGENTA "\x1b[35m" 
//- Cyan
#define CYAN "\x1b[36m" 
//- Blanco 
#define WHITE "\x1b[37m" 
//- Gris Claro
#define LIGHT_GRAY "\x1b[90m" 
//- Rojo Claro 
#define LIGHT_RED "\x1b[91m" 
//- Verde Claro 
#define LIGHT_GREEN "\x1b[92m" 
//- Amarillo Claro
#define LIGHT_YELLOW "\x1b[93m" 
//- Azul Claro 
#define LIGHT_BLUE "\x1b[94m" 
//- Magenta Claro 
#define LIGHT_MAGENTA "\x1b[95m" 
//- Cyan Claro 
#define LIGHT_CYAN "\x1b[96m"
//- Blanco Claro 
#define LIGHT_WHITE "\x1b[97m" 

//== = Modificadores == = 
//== = Texto == = 
//-Dim(No identificado aun) 
#define DIM "\x1b[2m" 
//- Reverse(Si el fondo es negro, el texto sera blanco y al contrario) 
#define REVERSE "\x1b[7m"
//- Hidden(No identificado aun) 
#define HIDDEN "\x1b[8b" 
//- Bold(ON / OFF) (No identificado aun) 
#define BOLD_ON "\x1b[1m" 
#define BOLD_OFF "\x1b[21m" 
//- Underline(ON / OFF) (Subraya el texto) 
#define UNDERLINE_ON "\x1b[4m" 
#define UNDERLINE_OFF "\x1b[24m" 
//- Blink(ON / OFF) (No identificado aun) 
#define BLINK_ON "\x1b[5m" 
#define BLINK_OFF "\x1b[25m" 

//== = Fondos == = 
//== = Texto == = 
//-Negro 
#define BLACKF "\x1b[40m" 
//- Rojo 
#define REDF "\x1b[41m" 
//- Verde 
#define GREENF "\x1b[42m" 
//- Amarillo 
#define YELLOWF "\x1b[43m" 
//- Azul 
#define BLUEF "\x1b[44m" 
//- Magenta
#define MAGENTAF "\x1b[45m" 
//- Cyan
#define CYANF "\x1b[46m" 
//- Blanco
#define WHITEF "\x1b[47m"
//- Gris Claro
#define LIGHT_GRAYF "\x1b[100m" 
//- Rojo Claro
#define LIGHT_REDF "\x1b[101m" 
//- Verde Claro
#define LIGHT_GREENF "\x1b[102m" 
//- Amarillo Claro
#define LIGHT_YELLOWF "\x1b[103m" 
//- Azul Claro 
#define LIGHT_BLUEF "\x1b[104m" 
//- Magenta Claro
#define LIGHT_MAGENTAF "\x1b[105m" 
//- Cyan Claro 
#define LIGHT_CYANF "\x1b[106m" 
//- Blanco Claro
#define LIGHT_WHITEF "\x1b[107m" 

int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		system("color 7F");
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "||    C O N V E R S I O N E S   ||" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "||                              ||" DEFAULT0 << endl;
		cout << MAGENTAF << WHITE << "||     \t1.- Binario-Decimal     ||" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << MAGENTAF << WHITE << "||     \t2.- Decimal-Binario     ||" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << MAGENTAF << WHITE << "||     \t3.- Binario-Octal       ||" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << MAGENTAF << WHITE << "||     \t4.- Binario-Hexadecimal ||" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << MAGENTAF << WHITE << "||     \t5.- Texto-Binario       ||" DEFAULT0 << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
		cout << "||    \t6.- Salir               ||" << endl;
		cout << YELLOWF << BLUE << "----------------------------------" DEFAULT0 << endl;
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
				cout <<"El resultado es: " << a << endl;
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