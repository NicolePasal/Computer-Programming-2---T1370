#include<stdio.h>
int main()
{
    int n, rows, colns;

    printf("Enter integer: ");
    scanf("%d",&n);

    for(rows=1;rows<=n;rows++)
    {
      
      for(colns=1;colns<=n-rows;colns++) 
      printf(" ");
      
      for(colns=1;colns<=rows;colns++) 
      printf("* ");

      printf("\n");
    }

    return 0;
}