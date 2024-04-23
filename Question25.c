#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int i=1;
    int nsp=i-1;
    int nst=n;
    for (i = 1; i <=n; i++)
    {
        for (int j=1; j<=nsp; j++)
        {
            printf("  ");
        }
        for (int k = 1; k<=nst; k++)
        {
            printf("* ");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}