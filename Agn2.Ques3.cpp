#include <stdio.h>
#include <string.h>
 
void main()
{
	printf("Assignment No.3\n");
  	char str[100];
  	int i, c=1;
 	printf("\t\t Enter the String :\n ");
 	gets(str);
  	 	   	
  	for(i = 0; str[i]!= '\0'; i++)
	{
		if(str[i] == ' ')
		{
		   c++;	
		} 
	}	
	printf("\n\t\t The Total Number of Words in String= %d", c);

}
