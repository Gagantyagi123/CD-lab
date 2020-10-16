//  STRING ACCEPTABLE BY GRAMMAR ARE OF FORM ac*b(a+b) EX:accba and accccbb.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[100];
int n,i;

void main()
{
    printf("ENTER STRING: ");
    scanf("%s",&a);
    n=strlen(a);

    if(a[0]=='a'&&(a[n-1]=='a'||a[n-1]=='b')&&a[n-2]=='b')
    {
        for(i=1;i<n-2;i++)
        {
            if(a[i]!='c')
            {
                printf("STRING IS NOT ACCEPTED\n");
                exit(0);

            }
        }
        printf("STRING IS ACCEPTED");
    }
    else
        printf("STRING IS NOT ACCEPTED\n");
}
