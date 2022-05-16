#include<stdio.h>

int main()
{
    float origTemp, convTemp;
    char sel, conv;
    
    printf("[f] - Fahrenheit\n");
    printf("[c] - Celcius\n");
    printf("[k] - Kelvin\n");
    
    
    printf("\nInput Original Temperature Value: ");
    scanf("\n%f", &origTemp);
    printf("\nSelect Original Temperature Scale: ");
    scanf("\n%c", &sel);
    printf("\nSelect Converted Temperature Scale: ");
    scanf("\n%c", &conv);
    
    if (sel == 'f' || sel == 'F')
    {
        if (conv == 'f' || conv == 'F')
        {
            conv = origTemp;
        }
        else if (conv == 'c' || conv == 'C')
        {
            convTemp = (origTemp - 32) * 5/9;
        }
        else if (conv == 'k' || conv == 'K')
        {
            convTemp = (origTemp - 32) * 5/9 + 273.15;
        }
        else 
        {
            printf("\nSorry, You Input Invalid Keyword!");
            return -1;
        }
    }
    
    else if (sel == 'c' || sel == 'C')
    {
        if (conv == 'f' || conv == 'F')
        {
            convTemp = (origTemp * 9/5) + 32;
        }
        else if (sel == 'c' || sel == 'C')
        {
            convTemp = origTemp;
        }
        else if (sel == 'k' || sel == 'K')
        {
            convTemp = origTemp + 273.15;
        }
        else
        {
            printf("\nSorry, You Input Invalid Input");
            return -1;
        }
    }
    else if (sel == 'k' || sel == 'K')
    {
        if (conv == 'f' || conv == 'F')
        {
            convTemp = (origTemp - 273.15) * 9/5 + 32;
        }
        else if (conv == 'c' || conv == 'C')
        {
            convTemp = origTemp - 273.15;
        }
        else if (conv == 'k' || conv == 'K')
        {
            convTemp = origTemp;
        }
        else 
        {
            printf("\nSorry, You Input Invalid Keyword!");
            return -1;
        }
    }
    else 
    {
        printf("\nSorry, You Input Invalid Keyword!");
        return -1;
    }
    
    printf("\n%.2f %c = %.2f %c", origTemp, sel, convTemp, conv);
    return 0;
    
}