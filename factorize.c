#include <stdio.h>

void factorize(int n){
	int i, factor;

	//printf("%d=", n);
	/*find first factor*/
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			factor = i;
			printf("%d=%d*%d\n", n, i, n/i);
			return;
		}
	}
	printf("\n");
}


int main(int argc, char *argv[])
{
	int num;

	FILE *file = fopen(argv[1], "r");

	while(fscanf(file, "%d", &num) == 1)
		factorize(num);

	fclose(file);

	return (0);
}
