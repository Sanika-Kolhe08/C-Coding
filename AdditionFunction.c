#include <stdio.h>
 
int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{   
    int ret = 0;

    ret = Addition(11,10);

    printf("Addition is : %d \n",ret);
    
    return 0;
}