#include<stdio.h>
int main()
{
    int item[5]={4,6,7,8};
    int num=80;
    int j; 
    int k=0;
    int n=4;
    for(j=n;j>k;j--)
    {
        item[j]=item[j-1];
        }
    item[k]=num;
    n++;
    for(j=0;j<n;j++)
    {
        printf("Element at [%d] is %d\n",j,item[j]);
        }
    return 0;
}