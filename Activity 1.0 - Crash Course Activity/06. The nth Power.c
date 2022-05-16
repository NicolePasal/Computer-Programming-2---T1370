#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, val;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    if (x != 0)
    {
        if (y > 0)
        {
            val = x;
            for (int i = 1; i < y; i++)
            {
                val *= x;
            }
        }
        else if (y < 0)
        {
            val = x;
            for (int i = 1; i < abs(y); i++)
            {
                val *= x;
            }
            printf("%d ^ %d = 1/%d", x, y, val);
            return 0;
        }
        else{
            val = 1;
        }
    }
    else
    {
        printf("ERROR! X should not be equal to 0.");
        return -1;
    }
    printf("%d ^ %d = %d", x, y, val);
    return 0;
}