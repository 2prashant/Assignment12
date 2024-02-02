//2. Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
int main()
{
    void naturalnum (int n);
    int num;
    printf("print n natural number in revere order\n Enter number=");
    scanf("%d",&num);
    naturalnum(num);
    return 0;
}
void naturalnum(int n)
{
    if(n==0)
    return;
    if(n!=0)
    printf("%d ",n);
    naturalnum(n-1);
}
