#include<stdio.h>
int main(){
   int array[]={1,23,45,67,77,123,444};
    int num;
    int max=0;

    

 for (int i = 0; i <=6; i++)
 {
    if (array[i]>max)
    {
      max=array[i];
    }
    
 }
 printf("max num :=%d\n",max);
 return 0;

}