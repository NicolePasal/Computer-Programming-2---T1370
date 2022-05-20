#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reverse[100];
    int len, i, index, Start, End;

    printf("Enter Any String: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    Start = len - 1;
    End   = len - 1;

    while(Start > 0)
    {
        if(str[Start] == ' ')
        {
            i = Start + 1;
            while(i <= End)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            End = Start - 1;
        }

        Start--;
    }
    for(i=0; i<=End; i++)
    {
        reverse[index] = str[i];
        index++;
    }
    reverse[index] = '\0'; 

    printf("\nOriginal string: %s\n", str);
    printf("Reverse ordered words: %s\n", reverse);

    return 0;
}