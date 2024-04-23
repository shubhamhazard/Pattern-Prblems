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
        int a=65;
        char ch=a;
        int str=2*i-1;
        for (int j = 1; j<=nsp; j++)
        {
            printf("  ");
        }
        for (int k= 1; k<=str; k++)
        {
            printf("%c ",a);
            a++;
        }
        nsp--;
        printf("\n");
    }
    return 0;
}