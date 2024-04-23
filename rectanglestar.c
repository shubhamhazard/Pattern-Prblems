#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int r,c,n;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    for(int i=1; i<=r; i++){
        for(int i=1; i<=c; i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}