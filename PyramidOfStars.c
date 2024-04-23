#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int nsp=n-1;
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j<=nsp; j++)
        {
            printf("  ");
        }
        nsp--;
        for (int k = 1; k<=2*i-1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}