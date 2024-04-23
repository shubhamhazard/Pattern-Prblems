// METHOD---1
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <=n; i++)
//     {
//         for(int j=1;j<=n+1-i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }





// METHOD-----2
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a=n;
//     for (int i = 1; i <=n; i++)
//     {
        
//         for(int j=1;j<=a;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//         a--;
//     }
//     return 0;
// }

// METHOD-----------3
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
        for(int j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}