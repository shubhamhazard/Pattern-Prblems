#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int b=65;
    char c=b;
    for (int j=1; j<=2*n+1; j++)
    {
        printf("%c ", c);
        c++;        
    }
    printf("\n");
    int nsp=1;
    int nst=n;
    for (int i =1; i <=n; i++)
    {
        int ch=65;
        char a=ch;
        for (int k = 1; k<=nst; k++)
        {
            printf("%c ", a);
            a++;
        }
        for (int l=1; l<=nsp; l++)
        {
            printf("  ");
            a++;
        }
        for (int m=1; m<=nst; m++)
        {
            printf("%c ", a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    return 0;
}