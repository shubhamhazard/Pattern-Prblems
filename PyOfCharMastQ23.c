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
        int a=i-1;
        for (int j = 1; j<=nsp; j++)
        {
            printf("  ");
        }
        int p=65;
        for (int k = 1; k<=i; k++)
        {
            printf("%c ", p);  //or (k+64);
            p++;
        }
        for (int k=1;k<=i-1;k++)
        {
            printf("%c ",(a+64));
            a--;
        }
        nsp--;
        printf("\n");        
    }
    
    return 0;
}