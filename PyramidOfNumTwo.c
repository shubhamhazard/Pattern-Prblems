#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int nsp=n-1;
    for (int i = 1; i <=n; i++)
    {
        int str=1;
        for (int j = 1; j<=nsp; j++)
        {
            printf("  ");
        }
        for (int k = 1; k<=i; k++)
        {
            printf("%d ",str);
            str++;
        }
        int a=i-1;
        for (int l = 1; l <=i-1; l++)
        {
            printf("%d ",a);
            a--;
        }
        nsp--;
        printf("\n");
    }
    
    return 0;
}