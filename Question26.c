#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int j = 1; j <=n*2+1; j++)
    {
        printf("* ");
    }
    printf("\n");
        int nst1=n;
        int nsp=1;
    for (int i = 1; i <=n; i++)
    {
        for (int k =1; k<=nst1; k++)
        {
            printf("* ");
        }
        for (int j=1; j<=nsp; j++)
        {
            printf("  ");
        }
        for (int l=1; l<=nst1; l++)
        {
            printf("* ");
        }
        nsp+=2;
        nst1--;
        printf("\n");
    }
    return 0;
}