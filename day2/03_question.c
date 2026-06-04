
#include <stdio.h>
int main(){
    int num,rem,p;
    printf("enter the number");
    scanf("%d",&num);
    for(p=1;num>0;num=num/10)
{
    rem=num%10;
    p=p*rem;
}
printf("the product is %d",p);
    return 0;
}