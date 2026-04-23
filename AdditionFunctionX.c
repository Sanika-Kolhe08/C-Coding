#include <stdio.h>
 
int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{   
    int ret=0, a=11, b=10;

    ret = Addition(a,b);

    printf("Addition is : %d \n",ret);
    
    return 0;
}