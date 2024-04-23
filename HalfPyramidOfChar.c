#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n ; i++)
    {
        int a=65;
        char ch=a;
        for (int j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    
    
    return 0;
}