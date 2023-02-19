#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    int md;
    printf("Enter the number: \n");
    scanf("%d" ,&number);
    printf("Enter the number of multipication: \n");
    scanf("%d" ,&md);
    for (size_t count = 1; count <=md; count++)
    {
        printf("%d * %d = %d \n",number,count,number*count);
    }
    getch();
    return 0;
}