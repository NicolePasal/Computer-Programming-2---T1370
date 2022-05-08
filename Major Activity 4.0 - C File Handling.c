#include <stdio.h>
#include <stdlib.h>

int main() {
	char name[100];
	int i, n, ID, Mmarks, Smarks, Emarks;
	printf("Enter number of students: ");
	scanf("%d",&n);
	
	for (i=0;i<n;++i) {
		printf("For student %d\nEnter name: ",i+1);
		scanf("%s",name);
		FILE *fptr;
	    fptr = fopen(name,"w");
	    if(fptr==NULL) {
		printf("Error!");
		exit(1);
	    }
		printf("Enter Student ID number: ");
		scanf("%d", &ID);
		printf("Math Grade: ");
		scanf("%d", &Mmarks);
		printf("Science Grade: ");
		scanf("%d", &Smarks);
		printf("English Grade: ");
		scanf("%d", &Emarks);
		printf("Data Written Succesfully!");
		
		int TotalGrade = (Mmarks + Smarks + Emarks);
		float GradeAve = ((Mmarks + Smarks + Emarks)/3);
		
		fprintf(fptr,"\nName: %s \n Math Grade: %d \n Science Grade: %d \n English Grade: %d \n Total Grade= %d \n Grade Average: %f", name, Mmarks, Smarks, Emarks, TotalGrade, GradeAve);
	}
	
	return 0;
}