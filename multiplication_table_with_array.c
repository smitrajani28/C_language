#include<stdio.h>

    int main()
    {
        int mul[10],n;
        printf("table do you want(number) :");
        scanf("%d",&n);
        for (int i = 0; i < 10; i++)
        {
           if(i<9)
           {
            mul[i] = n*(i+1);
            printf("    %d  x   %d  =   %d\n",n,i+1,mul[i]);
           }
           else
           {
            mul[i] = n*(i+1);
            printf("    %d  x  %d  =   %d\n",n,i+1,mul[i]);
           }
        }
        
        return 0;
    }