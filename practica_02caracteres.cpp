#include <stdio.h>
#include <stdlib.h>

int main()
{
	char opt, opc;
	float a, b, c, d;
			printf("\nCalculadora\na.Suma\nb.Resta\nc.Multiplicacion\nd.Division ");
			printf("\nIngrese una opcion: ");
			opt=getchar();
			printf("\nIngrese el primer valor: ");
			scanf("%f", &a);
			printf("\nIngrese el segundo valor: ");
			scanf("%f", &b);
			switch (opt)
			{
			case 'A':
			case 'a':
				c = a + b;
				break;
			case 'B':
			case 'b':
				c = a - b;
				break;
			case 'C':
			case 'c':
				c = a * b;
				break;
			case 'D':
			case 'd':
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
}