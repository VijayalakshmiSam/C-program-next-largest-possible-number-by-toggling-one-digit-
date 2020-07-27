#include<stdio.h>
#include <math.h>

int main()
{
   long int number,num,index,binary[1000],ind=0,flag=0,povalue,sum=0,power=0;
   scanf("%ld",&number);
   num=number;
   while(number>0)
   {
       binary[ind++]=number%2;
       if(number%2==0) 
       {
           flag=1;
       }
       number/=2;  
   }
   if(flag==0) 
   {  
        printf("%ld",num);
   }
   else
   {
       for(index=ind-1;index>=0;index--)
       {
           if(binary[index]==0)
           {
               binary[index]=1;
               break;
           }
       }
       for(index=0;index<ind;index++)
       {
           povalue=pow(2,power);
           sum+=(binary[index]*povalue);
           power++;
       }
       printf("%ld",sum);
   }

}