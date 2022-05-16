#include<stdio.h>

int main ()

{
    int grade;
    printf("\nEnter Your Grade: ");
    scanf("%d", &grade);
    
    if (grade >=92 && grade <=100)
    {
        printf("\nYour Letter Grade is A\n");
    }
    
    else if(grade >=84 && grade <=91)
    {
        printf("\nYour Letter Grade is A-\n");
    }
    
    else if(grade >=76 && grade <=83)
    {
        printf("\nYour Letter Grade is B\n");
    }
    
    else if(grade >=68 && grade <=75)
    {
        printf("\nYour Letter Grade is B-\n");
    }
    
    else if(grade >=60 && grade <=67)
    {
        printf("\nYour Letter Grade is C\n");
    }
    
    else if(grade >=50 && grade <=59)
    {
        printf("\nYour Letter Grade is D\n");
    }
    
    else if(grade >0 && grade <50)
    {
        printf("\nYour Letter Grade is F\n");
    }
    
    else 
    {
        printf("\nInvalid Input. Try Again!\n");
    }
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    