#include<stdio.h>
void main()
{
	printf("Assignment No.4\n");
    int a[50], size, i, big, small;

    printf("\t\tEnter the size of the array: ");
    scanf("%d", &size);

    printf("\n\t\tEnter the %d elements of the array:\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    big = a[0]; 
   
    for(i = 1; i < size; i++)
    {
        if(big < a[i])   
        {
            big = a[i]; 
        }
    }
    printf("\n\t\tThe largest element is: %d", big);

    small = a[0];  
       
    for(i = 1; i < size; i++)
    {
        if(small>a[i])  
        {
            small = a[i];   
        }
	}
    printf("\n\t\tThe smallest element is: %d", small);
}
   
