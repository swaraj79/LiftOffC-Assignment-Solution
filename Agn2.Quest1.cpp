#include<stdio.h>
void main()
{
	printf("Assignment No.1\n");
    int num, sum=0;

    printf("\t\t Enter the number  ");
    scanf("%d", &num);

    while(num!=0)
    {
        sum += num % 10;
        num = num / 10;
    }

    printf("\t\t Sum of digits = %d", sum);
}

