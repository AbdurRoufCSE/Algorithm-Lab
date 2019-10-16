#include<stdio.h>
int main(){

int i,j,a[100],n,temp;
printf("Enter the N:");
scanf("%d",&n);
printf("Enter the %d array value:\n",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("After sorting array:\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);

}


return 0;
}
