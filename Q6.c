//6. Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
int main()
{
    void evennum(int num);
    int n;
    printf("print first n even natural number\n enter number=");
    scanf("%d",&n);
    evennum(n);
}
void evennum(int num)
{
    if(num==0)
    return ;
    printf("%d ",2*num);
    evennum(num-1);
}