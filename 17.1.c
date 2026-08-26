/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>

    int main()
    {
        int a;
        int sum=0;
        int rem;
        int c=0;
        int original;

        printf("Enter a number ");
        scanf("%d",&a);
        original=a;
        while (a!=0)
        {
            c++;
            a=a/10;
        }
        a=original;

        while(a!=0)
        {
        rem=a%10;
        sum=sum+pow(rem,c);
        a=a/10;
        

        }
        if(sum==original)
        {
            printf("number is armstrong");
        }
        else{
        printf("number is not armstrong");
        }
        return 0;
    }
