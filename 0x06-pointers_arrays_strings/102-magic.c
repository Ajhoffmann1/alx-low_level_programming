#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 100;
	p = &n;

	/**
	 * write yout line code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything alse than line of your code
	 */
	*(p + 10) = 98;
/* .. so that this prints 98\n */
print("a[2] = %d\n", a[2];
return (0);
}