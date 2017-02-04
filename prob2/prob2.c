#include <stdio.h>

#define MAX 4000000

int main(void)
{
	int fib1, fib2, sum = 2;

	for (fib1 = 1, fib2 = 2; fib2 < MAX;) {
		int next = fib2 + fib1;
		if (next  % 2 == 0) {
			sum += next;
		}
		
		fib1 = fib2;
		fib2 = next;
	}

	printf("%d\n", sum);

	return 0;
}
