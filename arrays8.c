//program of bubble sort
#include <stdio.h>
int main(){
    int a[20],i,j,n,temp=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //bubble sort algorithm
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                //swap a[j] and a[j+1]
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted elements in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}