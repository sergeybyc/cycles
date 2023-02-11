#include <stdio.h>

main()
{
	printf("Zadanie 1.1\n");
	int a=0;
	while(a<10)
	{
		printf("Hello\n");
		a=a+1;
	}
	
	printf("Zadanie 1.2\n");
	int i=0;
	while(i<16)
	{
		printf("%i\n", i);
		i=i+1;
	}
	
	printf("Zadanie 1.3\n");
	int k=1;
	while(k<15)
	{
		printf("%i\n", k);
		k=k+2;
	}
	
	printf("Zadanie 2\n");
	int e=5;
	int sum=0;
	while(e<15)
	{
		sum=sum+e;
		printf("%i+", e);
		e=e+1;
	}
	sum=sum+e;
	printf("%i=%i\n", e, sum);
}


