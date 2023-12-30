#include <stdio.h>

void factorize(unsigned long long int n){
	unsigned long long int i;

	for (i = 2; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			printf("%lld=%lld*%lld\n", n, i, n/i);
			return;
		}
	}
}


int main(int argc, char *argv[])
{
	unsigned long long int num;

	FILE *file = fopen(argv[1], "r");

	while(fscanf(file, "%lld", &num) == 1)
		factorize(num);

	fclose(file);

	return (0);
}
