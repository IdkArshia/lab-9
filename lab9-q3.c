#include <stdio.h>

void isPrime(int a) 
{
    if (a <= 1  || a==2) 
	{
        printf("%d is not a prime number\n", a);
        return;
    }

    for (int i = 2; i < a; i++) 
	{
        if (a % i == 0) 
		{
            printf("%d is not a prime number\n", a);
            return;
        }
    }

    printf("%d is a prime number\n", a);
}

int main() 
{
    int n1;

   
    printf("Enter a number: ");
    scanf("%d", &n1);

   
    isPrime(n1);

    return 0;
}
