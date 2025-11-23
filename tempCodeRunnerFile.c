// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() 
{
int *arr;
int numofstudent;
printf("enter the number of students");
scanf("%d",&numofstudent);
arr=(int*) malloc(numofstudent*sizeof(int));
if(arr==NULL)
{
    printf("memory alllocation failed");
    return 1;
}
for (int i=0;i<=numofstudent;i++)
{
    printf("enter the marks of students %d",i+1);
    scanf("%d",&arr[i]);
}
printf("marks of students are: \n");

for(int j=0;j<=numofstudent;j++)
{
    printf("the marks if students %d is %d \n ",j+1,arr[j]);
}
    return 0;
}