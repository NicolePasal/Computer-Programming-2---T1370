#include<stdio.h>
int main()
{
    int i=1, num, inp=0, sum=0;
    float ave;
    
    while(1)
    {
        printf("[%d] Input Integer: ", i);
        scanf("%d", &num);
        
        if (num < 0)
        {
            continue;
        }
        else if (num == 0)
        {
            break;
        }
        else 
        {
            inp++;
            sum += num;
            i++;
        }
    }
    ave = (float)sum / (float)inp;
    printf("\nAverage = %.2f", ave);
    return 0;
}