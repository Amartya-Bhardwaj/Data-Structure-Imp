#include <unistd.h>
#include <stdio.h>
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sumfir = 0, sumla = 0, n, i;
	n = fork();
	if (n > 0) {
		for (i = 0; i < 5; i++) {
			sumfir = sumfir + a[i];
		}
		printf("Parent process \n");
		printf("sum of first 5 is %d\n",sumfir);
	}
	else {
		for (i = 5; i < 10; i++) {
			sumla = sumla + a[i];
		}
		 printf("\nChild process \n");
		printf("\nSum of last 5 is %d",sumla);
	}
	return 0;
}
