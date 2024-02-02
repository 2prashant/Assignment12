//4. Write a recursive function to print first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    void oddnum(int num);
    int n;
    printf("print first N odd number in reverse order\n Enter number=");
    scanf("%d",&n);
    oddnum(n);
}
void oddnum(int num)
{
    if(num<0)
    return;
    printf("%d ",2*num+1);
    oddnum(num-1);
}
