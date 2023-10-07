#include<stdio.h>
int isprime(int);
int main()
{
    int n1,n2,r,i;
    printf("Enter the range n1 and n2 to find prime");
    scanf("%d,%d",&n1,&n2);
    printf("The prime numbers between %d and %d",n1,n2);
    {
        r=isprime(i);
        if(r==1)
        {printf("%d \t",i);}
    }
}
int isprime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
      if( x%i == 0)
      {
        c++;
      }
      if(c==2)
      {
        return(1);
      }
      else{
        return(0);
      }
    }
}