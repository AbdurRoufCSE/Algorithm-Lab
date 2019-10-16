#include<stdio.h>


void main()
{
int i, index, num, value, arr[20];

printf("Enter size of array: ");
scanf("%d", &num);

printf("Enter %d elements in arry: \n", num);
for(i=0; i<num; i++)
{
scanf("%d", &arr[i]);
}

for(i=1; i<num; i++)
{
value=arr[i];
index=i-1;
while((value<arr[index])&&(index>=0))
{
arr[index+1]=arr[index];
index=index-1;
}
arr[index+1]=value;
}

printf("After Sorting elements: ");
for(i=0; i<num; i++)
{
printf("%d  ", arr[i]);
}
getch();
}
