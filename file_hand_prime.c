
#include <stdio.h>

// int prime(int n)
// {
//     if (n <= 1)
//     {
//         fprintf("%d is not prime number", n);
//         return 0;
//     }
// }
//  int main()
// {
//     // open the file
//     FILE *fptr;
//     int n;
//     printf("Ente rthe n value\n");
//     scanf("%d", &n);
//     fptr = fopen("result.txt", "w");

//     // file write
//     if (fptr == NULL)
//     {
//         printf("memort not got alloctated to file");
//     }
//     else
//     {

//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 fprintf(fptr,"%d is not prime number", n);
//                 return 0;
//             }
//         }

//         fprintf(fptr ,"%d is prime number", n);

//         fclose(fptr);
//     }
// }

#include<stdio.h>
int main(){
    FILE *file;
    char str[50];
    file=fopen("output.txt","r");
    printf("%c ",fgetc(file));
    fgets("%s",str,50);

}