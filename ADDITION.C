#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a[2][2],b[2][2],c[2][2];
clrscr();
printf("Enter the value of matrix a:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the value of matrix b:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Matrix a and b is:\n");
printf("A:\n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
}
}
printf("B\n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
{
printf("%d\t",b[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("Addition of matrix a and b is:\n");
printf("C\n");
for(i=0;i<2;i++)
{
printf("\n");
for(j=0;j<2;j++)
printf("%d\t",c[i][j]);
}
}
getch();
}