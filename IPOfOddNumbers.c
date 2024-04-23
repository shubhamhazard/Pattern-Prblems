// METHOD-------1
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for (int i = 1; i <=n; i++)
//     {
//         int a=1;
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",a);
//             a=a+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }
//METHOD----------2
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        // int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",2*j-1);
            // a=a+2;
        }
        printf("\n");
    }
    return 0;
}