#include <stdio.h>
#include <stdlib.h>
int main () //procedimento principal, mandatario que não retorna resultado, por isso retorn 0 
{
	int cub [5] [5] [5];
	int i, j, k;
	//prenche o array de 3 dimensões com zeros
	for (i=0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k= 0; k < 5; k++)
			{
				if(i != j)
					cub [i] [j] [k] = 0;
				else
					cub [i] [j] [k] = 1;
			}
		}
	}
	for (i=0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 5; k++)
			{
				printf ("%d", cub[i] [j] [k]);
			
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
