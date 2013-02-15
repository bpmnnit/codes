/* 
Problem : DCEPC504 Spoj
how to create THUE MORSE series--

a(2n)=a(n)
a(2n+1)=1-a(n)

let for n=0,a(0)=0;
*/
#include<stdio.h>
int main()
{
    int t,count;
    long long int k,num;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%lld %lld",&k,&num);
        if(num==1)
            printf("Male\n");
        else if(num==2)
            printf("Female\n");
        else{
            num=num-1;
        while(num>1)
        {
            if(num%2!=0)
                count+=1;
            num=num/2;
        }
        if(count%2==0)
            printf("Female\n");
        else
            printf("Male\n");
        }
        printf("\n");
    }
    return 0;
}
