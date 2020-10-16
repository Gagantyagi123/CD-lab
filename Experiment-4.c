#include <stdio.h>
#include <ctype.h>

int con=0,var=0,op=0;
void check(char c)
{
    if(isalpha(c))
        var++;
    if(c==47||c==42||c==43||c==45||c==61||c==94)
        op++;
}
void main()
{
    char str[15];
    char c;
    int i;
    printf("ENTER THE STRING: \t");
    scanf("%s",&str);
    for(int i=0;i<13;i++)
    {
        c=str[i];
        check(c);
    }
    for(i=0;i<15;i++)
    {
        if(isdigit(str[i]&&isdigit(str[i+1])))
           {
               i=i+2;
               con++;
           }
        else if(isdigit(str[i]))
            con++;
    }

    printf("OPERATORS:%d\nVARIABLES:%d\nCONSTANTS:%d\n",op,var,con);
    printf("TOTAL TOKENS=%d",op+var+con);

}

