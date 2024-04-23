#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        int a= 65;
        char ch=a;
        for (int j = 1;j<=n; j++)
        {
            printf("%c ", ch);
            ch=ch+1;
        }
        printf("\n");
    }
    return 0;
}