//allocating the memory for 1 integer
#include<stdio.h>
#include<stdlib.h>
void main()
{
/*int *p;
p=malloc(sizeof(int));
printf("Enter the data\n");
scanf("%d",p);
printf("d=%d\n",*p);
*/

//allocationg memory for 5 integers
/*int *p;
int i,n=5;
p=malloc(sizeof(int)*n);
printf("Enter the data\n");
for(i=0;i<n;i++)
  scanf("%d",&p[i]);

for(i=0;i<n;i++)
  printf("%d ",p[i]);

printf("\n");
*/


//Allocating a dynamic memory for 1 string
char *s;
s=malloc(sizeof(char)*10);
printf("Enter the string\n");
scanf("%s",s);
printf("%s",s);
}
