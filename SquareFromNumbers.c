#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for (int i =1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}