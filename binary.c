
#include<stdio.h>
#include <stdlib.h>

void binary( int,int);
int main()
{
int i=0,n=12;
for (i=0;i<n;i++)
{
 binary(i+1,i+1);
 printf("\n");

}
 return 0;
}
void binary( int n ,int k)

{
    if(k==0)
     return;
    binary(n/2,--k);
    printf("%d",n%2);
}
