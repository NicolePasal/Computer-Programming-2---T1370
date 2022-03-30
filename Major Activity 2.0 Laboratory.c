#include<stdio.h>

int pi(int crdtls [3][2], int ID, int PIN)
{
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(ID == crdtls[i][0] && PIN == crdtls[i][1]){
        flag = 1;
        }
    }
    return flag;
}

int main ()
{
    int crdtls[3][2] = {{00000,0000}, {11111,1111}, {22222,2222}};
    int ID, PIN;
    
    printf("Enter ID Number: ");
    scanf("%d", &ID);
    
    printf("Enter PIN: ");
    scanf("%d", &PIN);
    
    if(pi(crdtls,ID,PIN))
    {
        printf("\nYou have successfully logged in!\n ID#:%d", ID);
    } else {
        printf("\nInvalid ID/PIN!");
    }
    return 0;
}
    
   