#include <stdio.h>
void main()
{  
   int id, consm;
   float chg, surchg=0, gramt,netamt;
   
   printf("Input Customer ID: ");
   scanf("%d",&id);
   printf("Input The Unit Consumed By The Customer: ");
   scanf("%d",&consm);
   if (consm <199 )
	chg = 1.50;
   else	if (consm>=200 && consm<400)
		chg = 1.60;
	else if (consm>=400 && consm<600)
			chg = 1.85;
		else
			chg = 2.00;
   gramt = consm*chg;
   if (gramt>400)
	surchg = gramt*10/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID Number                        :%d\n",id);
   printf("Unit Consumed                             :%d\n",consm);
   printf("Amount Charges @P. %4.2f  per unit        :P %8.2f\n",chg,gramt);
   printf("Surchage Amount                           :P %8.2f\n",surchg);
   printf("Total Costumer Bill                       :P %8.2f\n",netamt);
   
   printf("\n\nThank You!");

}  