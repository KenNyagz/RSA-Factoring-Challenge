#include <stdio.h>

void factorize(int n){
int i, factor;

/*find first factor*/
for (int i = 2; i <= n; i++)
{
	if (n % i == 0)
	{
		factor = i;
		printf("%d=%d*", n, i);
		
		n /= i;
		i = 1;
	}
}
printf("%d\n", i);
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
