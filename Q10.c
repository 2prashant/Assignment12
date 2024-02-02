//10. Write a recursive function to print reverse of a given number.
#include<stdio.h>
void reverse_Number(int num)
{
    if(num<=0)
    {
        return;
    }
    int x=num%10;
    printf("%d",x);
    reverse_Number(num/10);
}
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    reverse_Number(num);
    return 0;
}
