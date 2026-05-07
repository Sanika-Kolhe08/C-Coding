#include <iostream>
using namespace std;

int main()
{
    int size=0;
    float *marks = NULL;
    int i=0;
    cout<<"Enter no. of elements:  \n ";
    cin>>size;

    //Dynamic memory allocation
    marks = new float[size];
    //float marks[5];      //40 bytes

    cout<<"Enter your marks : \n";

    //iteration
    //loop counter
          //1       //2     //3
    for (int i = 0; i < size; i++)       
    {
        cin>>marks[i]; //4
    }

    cout<<"Entered marks are : \n";
    int j = 0 ;
          //1       //2     //3
    for (int j = 0; j < size; j++)
    {
        cout<<marks[j]<<"\n"; //4
    }

    delete []marks;
    
    return 0;
}