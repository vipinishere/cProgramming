#include <stdio.h>
#include <conio.h>

int main()
{
    
    int num;
    printf("apne konsa exam pass kiya hai \n");
    printf("maths=1:\n");
    printf("science=2:\n");
    printf("For both=3:\n");
    scanf("%d",&num);
    if(num=1)
    {
        printf("you pass math's exam");
    }
    else if(num=2)
    {
        printf("you passed science exam");
    }
    else if(num=3)
    {
        printf("Great, Welldone you are passed both exams \n");
    }
    else{
        printf("thanks for coming\n");
    }
    
    getch();
    return 0;

}