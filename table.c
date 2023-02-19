#include <stdio.h>
#include <conio.h>

int main() {

    int number;
    printf("Enter the number:");
    scanf("%d" ,&number);
    for (size_t count = 1; count <=10; count++)
    {
        printf("%d * %d = %d \n",number,count,number*count);
        
    }
    
    getch();
    return 0;
}