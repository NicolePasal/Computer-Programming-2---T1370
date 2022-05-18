#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[100];
  char str1;
  
	printf("Input The File Location: ");
	scanf("%s",fname);		
    fptr = fopen(fname, "a"); 
    printf("Input How Many Lines To Be Appended: ");
    scanf("%d", &n);
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
    
  }
  fclose (fptr);
	fptr = fopen (fname, "r"); 
	
	printf("\nFile %s Content Is:\n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
    printf("\nSuccessfully Inputted!");
  return 0;
}
