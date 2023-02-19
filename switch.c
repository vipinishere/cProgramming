#include<stdio.h>
#include<conio.h>
int main()
{
    int num,roll;
    scanf("%d",&num);
    switch (num)
    {
    case 2:
        printf("value is 2");
        break;
    case 3:
        printf("value is 3");
    default:
        break;
    }
    getch();
    return 0;
}