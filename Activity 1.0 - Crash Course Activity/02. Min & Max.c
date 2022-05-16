#include<stdio.h> 
int main()
{ 
int a[10];
int i, max=1, min=1; 
printf("Enter 10 Positive Integers: \n"); 
for(i=0;i<10;i++) 
{ 
    printf("[%d] Input Number: ",i+1); 
    scanf("%d",&a[i]); 
    if(a[i] > 0)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    } 
    else 
    {
        printf("This is an invalid input. Try Again.\n");
        --i;
        continue;
    }
        
}
    printf("Min: %d",min);
    printf("\nMax: %d",max);
    return 0;
}