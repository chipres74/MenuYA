// menuuu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include<vector>
#include<array>
#include<string>
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
		system("cls");
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << BLINK_ON << "||    P R O G R A M A    D E    C O N V E R S I O N E S     ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||----------------------------------------------------------||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "|| NOTA: * ''Un numero binario esta compuesto por           ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||           numeros 1's y 0's''.                           ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||       * ''Cuando el programa marca decimal no significa  ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||           que tenga un punto decimal, si no que tiene    ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||           mas numeros que '1' y '0' (del 0/1 al 9)''.    ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||----------------------------------------------------------||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "|| " DEFAULT0 << LIGHT_YELLOWF << RED << "E s t a s   s o n   l a s   o p c i o n e s:" DEFAULT0 << LIGHT_YELLOWF << BLUE << "             ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "||                                                          ||" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t1.- Binario-Decimal                 ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t2.- Decimal-Binario                 ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t3.- Binario-Octal                   ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t4.- Binario-Hexadecimal             ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t5.- Texto-Binario                   ||" DEFAULT0 << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << LIGHT_MAGENTAF << WHITE << "||                     \t6.-" DEFAULT0 << BLACKF << RED " SALIR " DEFAULT0 << LIGHT_MAGENTAF << WHITE << "                          ||" << endl;
		cout << LIGHT_YELLOWF << BLUE << "--------------------------------------------------------------" DEFAULT0 << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << BLUEF << LIGHT_GREEN << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << BLUEF << BLACK << "||  H A S   E L E G I D O   B I N A R I O - D E C I M A L   ||" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_GREEN << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_GREEN << "||                                                          ||" DEFAULT0 << endl; // 54 + 8
			{
				int exp, digito;
				double binario, decimal;
				cout << WHITEF << GREEN << "|| Introduce el numero binario:                             ||" DEFAULT0 << endl;
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
				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;
				cout << WHITEF << GREEN << "||  El Decimal es: " << decimal << "                                       ||" DEFAULT0 << endl;
				cout << WHITEF << GREEN << "||----------------------------------------------------------||" DEFAULT0 << endl;
			}
			pausa();
			break;
		case '2':
			system("cls");
			cout << WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << WHITEF << MAGENTA << "||  H A S   E L E G I D O   D E C I M A L - B I N A R I O   ||" DEFAULT0 << endl;
			cout << WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl; //61
			{
				int numero, exp, digito;
				double binario;
				cout << GREENF << WHITE << "|| Introduce un numero en decimal:                          ||" DEFAULT0 << endl;
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
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "|| En binario seria: " << binario << "                                 ||" DEFAULT0 << endl;
				cout << GREENF << WHITE << "||----------------------------------------------------------||" DEFAULT0 << endl;
			}
			pausa();
			break;
		case '3':
			system("cls");
			cout << GREENF << RED << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << GREENF << RED << "||    H A S   E L E G I D O   B I N A R I O - O C T A L     ||" DEFAULT0 << endl;
			cout << GREENF << RED << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << GREENF << RED << "||                                                          ||" DEFAULT0 << endl;
			{
				int par; string resus, repu;
				vector <string> bina;
				vector <string> resul;
				cout << REDF << LIGHT_YELLOW << "|| ¿Cuantos grupos de 3 digitos tiene tu codigo?:          ||" DEFAULT0 << endl;
				cin >> par;
				for (int i = 0; i < par; i++) {
					cout << i + 1 << ": " << REDF << LIGHT_YELLOW << "|| Ingresa 3 digitos (en binario) de tu codigo:          ||" DEFAULT0 << endl;
					cin >> repu;
					bina.push_back(repu);
					if (bina[i] == "000") {
						resul.push_back("0");
					}
					if (bina[i] == "001") {
						resul.push_back("1");
					}
					if (bina[i] == "010") {
						resul.push_back("2");
					}
					if (bina[i] == "011") {
						resul.push_back("3");
					}

					if (bina[i] == "100") {
						resul.push_back("4");
					}
					if (bina[i] == "101") {
						resul.push_back("5");
					}
					if (bina[i] == "110") {
						resul.push_back("6");
					}

					if (bina[i] == "111") {
						resul.push_back("7");
					}
					resus = resus + resul[i];
				}
				cout << REDF << LIGHT_YELLOW << "|| El codigo Octal es:" << resus << "                                   ||" DEFAULT0 << endl;
			}
			pausa();
			break;
		case '4':
			system("cls");
			cout << LIGHT_WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << LIGHT_WHITEF << MAGENTA << "|| E L E G I S T E    B I N A R I O - H E X A D E C I M A L ||" << endl;
			cout << LIGHT_WHITEF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << LIGHT_WHITEF << MAGENTA << "||                                                          ||" DEFAULT0 << endl; {

				char numero[9], temp[2];
				short potencia[9] = { 1,2,4,8,16,32,64,128 };
				int i, x, total = 0, decimal[9];
				cout << LIGHT_MAGENTAF << LIGHT_GREEN << ("|| Escriba un numero binario:                               ||" DEFAULT0) << endl;
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
				cout << LIGHT_MAGENTAF << LIGHT_GREEN << "||                                                          ||" DEFAULT0 << endl;
				printf(LIGHT_MAGENTAF); printf(LIGHT_GREEN); printf("|| El resultado en decimal es: %d", total);
				printf("                           ||\n");
				printf("|| El resultado en hexadecimal: %x", total);
				printf("                          ||\n"); printf(DEFAULT0);
			}
			getwchar();
			pausa();
			break;

		case '5':
			system("cls");
			cout << LIGHT_CYANF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << LIGHT_CYANF << MAGENTA << "||    H A S   E L E G I D O   T E X T O - B I N A R I O     ||" DEFAULT0 << endl;
			cout << LIGHT_CYANF << MAGENTA << "--------------------------------------------------------------" DEFAULT0 << endl;
			cout << LIGHT_CYANF << MAGENTA << "||                                                          ||" DEFAULT0 << endl;


			{
				char texto[300];
				int contador = 0, num, resul, cerosunos[20], i;
				int clrscr();
				printf(LIGHT_GRAYF); printf(BLACK); printf("|| Introduzca un texto para convertirlo a codigo binario:   ||\n");
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
					printf("\n");
				}
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
