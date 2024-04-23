#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n + 1; i++)
    {
        printf("%d ", i);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a--;
    }
    printf("\n");
    int nst = n;
    int nsp = 1;
    for (int i = n; i >= 1; i--)
    {
        int b = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", b);
            b++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        for (int m = i; m >= 1; m--)
        {
            printf("%d ", m);
        }

        printf("\n");
        nsp += 2;
        nst--;
    }

    return 0;
}