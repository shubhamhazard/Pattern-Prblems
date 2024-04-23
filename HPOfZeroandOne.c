// METHOD------1
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
//     int n,a;
//     printf("Enter the numbers: ");
//     scanf("%d", &n);
//     for (int i = 1; i <=n; i++)
//     {   if(i%2!=0)
//         a=1;
//         else a=0;
//         for (int j = 1; j<=i; j++)
//         {
//             printf("%d ",a);
//             if(a==0)
//             a=1;
//             else
//             a=0;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// METHOD------2
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
        for (int j=1; j<=i; j++)
        {
            if((i+j)%2==0)
            printf("%d ", 1);
            else
            printf("%d ", 0);
        }
        printf("\n");
    }
    
    return 0;
}