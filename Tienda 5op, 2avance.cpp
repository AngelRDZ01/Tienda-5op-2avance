#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<cmath>

using namespace std;

int Realizar, Regresar;
int i;
int cantidad=0;
int a, b;

struct comprador
{
	char Videojuego[20];
	int year;
	char clasif[20];
	char caracte[20];
	char descrip[20];
	char gener[20];


}juego[3];


int main()
{


	do {

		cout << " =========== BIENVENIDO AL PARAISO GEIMER ===========" << endl;
		cout << "1.-Agregar Artiuclo" << endl;
		cout << "2.-Modificar Articulo (No disponible)" << endl;
		cout << "3.-Eliminar Articulo (No disponible)" << endl;
		cout << "4.-Lista de Articulos Vigentes" << endl;
		cout << "5.-Limpiar pantalla" << endl;
		cout << "6.-Salir" << endl;
		cout << " ====================================================" << endl;
		cin >> Realizar;

		switch (Realizar)
		{


		case 1:
			
		{

			system("color 03");

			cout << "\n escriba el numero del articulo" <<  cantidad+1 << endl;
			cout << "\n --Escriba el Super Videojuego deseado:--" << endl;
			cin >> juego[i].Videojuego;

			cout << "\nEscriba el Año de salida del juego" << endl;
			cin >> juego[i].year;

			cout << "\nEscriba la clasificacion del juego" << endl;
			cin >> juego[i].clasif;

			system("color 02");
			cout << "\nEscriba alguna caracteristica del juego" << endl;
			cin >> juego[i].caracte;

			cout << "\nEscriba alguna descripcion del juego" << endl;
			cin >> juego[i].descrip;

			cout << "\nEscriba algun genero del juego" << endl;
			cin >> juego[i].gener;
			cantidad++;
			system("color 09");
			cout << "Juego solicitado y confirmado el precio esta en 250$MXN Mas 25$ de impuestos, Muchas gracias por comprar en paraiso PARAISO GEIMER " << endl;

			return main();
		}


		break;

		case 4: {

				for (i = 0; i < cantidad; i++)
				{
					cout << "\nJuego seleccionado:\n" << juego[i].Videojuego << endl;
					cout << "\naño del juego:\n" << juego[i].year << endl;
					cout << "\nclasificacion del juego:\n" << juego[i].clasif << endl;
					cout << "\n:caracteristica del juego\n" << juego[i].caracte << endl;
					cout << "\ndescripcion del juego:\n" << juego[i].descrip << endl;
					cout << "\nGenero del juego\n" << juego[i].gener << endl;


				}
			system("color 05");

			break;

		}


		case 5: {
			system("cls");
			system("color 05");

			break;

		}
		case 6: {
			cout << "Vas a salir." << endl;

			system("pause>null");
			exit(-1);

			break;
		}

		default:
		{
			cout << "La opcion seleccionada esta equivocada o no esta implementada por favor espere a una nueva actualizacion..." << endl;
			system("color 01");
			break;
		}



		}

	} while (a != 3);
	system("pause");
}