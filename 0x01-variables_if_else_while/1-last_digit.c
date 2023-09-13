#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
        int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	printf("Last digit of %d is %d and is greater then 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less then 6 and not 0", n, m);
			printf("\n");
	return (0);
}
