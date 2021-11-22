#include <stdio.h>

/* Global variable */
int g;

/* Add a and b and store result in global variable g */
void gSum(int a, int b) {
	g = a + b;
}

/* Add a and b and return result */
int sum(int a, int b)
{
	return (a+b);
}

void gSum2(int a, int b)
{
	int g;
	
	g = a+b;
}

int main(int argc, char *argv[])
{
	int a = 2;
	int b = 3;
	int c;

	printf("a=%d   b=%d   c=%d   g=%d\n",a,b,c,g);
	
	gSum(a, b);
	c = sum(a, b);
	printf("a=%d   b=%d   c=%d   g=%d\n",a,b,c,g);

	a = 12;
	b = 13;
	gSum2(a, b);
	c = sum(a, b);
	printf("a=%d   b=%d   c=%d   g=%d\n",a,b,c,g);
	
	return 0;
}
