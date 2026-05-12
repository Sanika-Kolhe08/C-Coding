#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0;
    float *marks = NULL;
    int i=0;
    printf("Enter no. of elements: ");
    scanf("%d",&size);

    //Dynamic memory allocation
    marks=(float *)calloc(size , sizeof(float));
    //float marks[5];      //40 bytes

    printf("Enter your marks : \n");

    //iteration
    //loop counter
          //1       //2     //3
    for (int i = 0; i < size; i++)       
    {
        scanf("%f",&marks[i]); //4
    }

    printf("Entered marks are : \n");
    int j = 0 ;
          //1       //2     //3
    for (int j = 0; j < size; j++)
    {
        printf("%f\n", marks[j]); //4
    }

    free(marks);
    
    return 0;
}