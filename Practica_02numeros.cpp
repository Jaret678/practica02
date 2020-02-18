#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opt, opc;
	float a, b, c, d;
	do
	{
		system("cls");
			printf("\nCalculadora\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division ");
			printf("\nIngrese una opcion: ");
			scanf("%d", &opt);
			printf("\nIngrese el primer valor: ");
			scanf("%f", &a);
			printf("\nIngrese el segundo valor: ");
			scanf("%f", &b);
			switch (opt)
			{
			case 1:
				c = a + b;
				break;
			case 2:
				c = a - b;
				break;
			case 3:
				c = a * b;
				break;
			case 4:
				while (b == 0)
				{
					system("cls");
					printf("Valor invalido no hay division entre cero\n");
					printf("\nIngrese el segundo valor: ");
					scanf("%f", &b);
				}
				c = a / b;
				break;
				default:
				printf("\nOpcion Incorrecta\n");
				break;
			}
		printf("\nEl resultado es: %f", c);
		
	printf("\n5.Seguir\n6. Salir");
		printf("\nIngrese la opcion: ");
		scanf("%d", &opc);
		while (opc > 6 or opc < 5)
		{
			system("cls");
			printf("Opcion invalida");
			printf("\n5.Seguir\n6. Salir");
			printf("\nIngrese la opcion: ");
			scanf("%d", &opc);
		}
	} while (opc == 5);
}