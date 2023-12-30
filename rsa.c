#include <stdio.h>
#include <stdbool.h>

bool is_prime(long long int n)
{
	long long int divisor;

	if (n < 2)
		return false;
	if (n == 2 || n == 3)
		return false;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	divisor = 5;
	while(divisor * divisor <= n)
	{
		if (n % divisor == 0 || n % (divisor + 2) == 0)
			return false;
		divisor += 6;
	}
	return true;
}

void factorize(long long int n){
	long long int i;

	for (i = 2; i <= n/2; i++)
	{
		if (n % i == 0 && is_prime(i) && is_prime(n / i))
		{
			printf("%lld=%lld*%lld\n", n, i, n/i);
			return;
		}
	}
}


int main(int argc, char *argv[])
{
	long long int num;

	FILE *file = fopen(argv[1], "r");

	if(fscanf(file, "%lld", &num) != 1)
		return (1);
	factorize(num);

	fclose(file);

	return (0);
}
