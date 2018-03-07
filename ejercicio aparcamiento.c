#include <stdio.h>
void main() {
	char numero,estado1='D',estado2='D';
	char matricula1[8],matricula2[8];
	int elegirreservar, elegirabandonar,bucle=1;
	while (bucle == 1)
	{
		printf("Introduzca la letra\n");
		printf("Si presiona R reservas la plaza\n");
		printf("Si presiona A abandonas la plaza\n");
		printf("Si presionas E conoces el estado de la plaza\n");
		scanf_s("%c", &numero);
		system("cls");
		system("color <3> <5>");
		switch (numero) {
		case ('R'):
			if (estado1 == 'O' && estado2 == 'O') {
				printf("Estan todas ocupadas");
			}
			else if (estado1 == 'O' && estado2 == 'D') {
				printf("Usted solo puedes reservar la plaza 2\n ");
				printf("Introduce la matricula\n");
				scanf_s("%s", &matricula2);
				printf("Usted ha reservado la plaza 2\n");
				estado2 = 'O';
			}
			else if (estado1 == 'D' && estado2 == 'O') {
				printf("Usted solo puede reservar la plaza 1\n");
				printf("Introduce la matricula\n");
				scanf_s("%s", &matricula1);
				printf("usted ha reservado la plaza 1\n");
				estado1 = 'O';
			}
			else
				printf("cual quieres reservar\n");
			scanf_s("%d", &elegirreservar);
			switch (elegirreservar) {
			case (1):
				printf("Introduce la matricula\n");
				scanf_s("%s", &matricula1);
				printf("Usted ha reservado la plaza 1\n");
				estado1 = 'O';
				break;

			case (2):
				printf("Introduce la matricula");
				scanf_s("%s", &matricula2);
				printf("usted ha reservado la plaza 2\n");
				estado2 = 'O';
				break;
			default:
				printf("Error\n");

			}
			break;
		case ('A'):
			if (estado1 == 'O' && estado2 == 'D') {
				printf("Has abandonado la plaza 1\n");
				estado1 = 'D';
			}
			else if (estado1 == 'D' && estado2 == 'O') {
				printf("Has abandonado la plaza 2\n");
				estado2 = 'D';
			}
			else if (estado1 == 'D' && estado2 == 'D') {
				printf("Todas las plazas estan disponibles\n");
			}
			else
				printf("Que plaza quieres abandonar\n");
			scanf_s("%d", &elegirabandonar);
			switch (elegirabandonar) {
			case (1):
				printf("Usted ha abandonado la plaza 1\n");
				estado1 = 'D';
				break;
			case (2):
				printf("Usted ha abandonado la plaza 2\n");
				estado2 = 'D';
				break;
			default:
				printf("error");


			}

		case('E'):
			printf("D= disponible,O=ocupado\n");
			printf("la plaza 1 esta %c \n", estado1);
			if (estado1 = 'D')
			{

			}
			else
				printf("Su matricula es [%s]\n", matricula1);

			printf("la plaza 2 esta %c \n", estado2);
			if (estado2 = 'D') {

			}
			else
				printf("Su matricula es [%s]\n", matricula2);

			break;
		default:
			printf("Error");
		}
	}
		system("pause");
	
}