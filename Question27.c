#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int j=1; j<=2*n+1; j++)
    {
        printf("%d ", j);        
    }
    printf("\n");
    int nsp=1;
    int nst=n;
    for (int i =1; i <=n; i++)
    {
        int a=1;
        for (int k = 1; k<=nst; k++)
        {
            printf("%d ", a);
            a++;
        }
        for (int l=1; l<=nsp; l++)
        {
            printf("  ");
            a++;
        }
        for (int m=1; m<=nst; m++)
        {
            printf("%d ", a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    return 0;
}