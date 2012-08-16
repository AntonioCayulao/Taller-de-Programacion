#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void hipotenusa(char *a, char *b, float *result)
{
	float as, bs;
	as = (float )(1 + atof(a));
	bs = (float )(1 + atof(b));
	*result = (float )sqrt(as*as + bs*bs);
	return;
}

int main(int argc, char *argv[])
{
//	printf("%s, %s\n", argv[1], argv[2]);
	float hip=0;
	
	printf("\n\tEste programa calcula la hipotenusa de un triangulo,\n\tuna ves ingresados los valores de los catetos\n\n\tPara ingresar los valores de los catetos debe ejecutar por terminal\n\t./a.out <cateto 1> <cateto 2>\n\n");
	
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("\n\tNo ingreso valores para los catetos 1 y/o 2\n\tEl programa terminara su ejecucion\n\n");
		return 0;
	}
	hipotenusa(argv[1], argv[2], &hip);
	printf("\tLa hipotenusa es : %f\n\ty sus lados son a = %s y b = %s\n\n", hip, argv[1], argv[2]);
	return 0;
}
