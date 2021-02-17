#include<stdio.h>
int main()
{
	printf("Assignment No.2\n");
   int i, s=0, n,a[10];
   for ( i =0; i<=9 ; i++)
    {
     printf ("\t\t Enter a no . ");
     scanf("%d",&a[i] );
     printf("\n");
    }
    for ( i =0 ; i <=9; i++)
    {
     if ((a[i]%2== 0)||(i%2 ==0))
      {
       s = s + a[i] ;
      }
    }
    printf("\t\t Sum of all the even no. and even position elements= %d", s);

}
