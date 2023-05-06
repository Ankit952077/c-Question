#include<stdio.h>
int main(){
    int num;
    int sum=0;

    printf("Enter num\n");
    scanf("%d",&num);

 for (int i = 1; i <=num; i++)
 {
    sum+=i;
 }
 printf("table is :=%d\n",sum);
 return 0;

}