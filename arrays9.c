//program of selection sort
#include <stdio.h>
int main(){
    int a[20],i,j,n,min,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //selection sort algorithm
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        //swap a[i] and a[min]
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    printf("Sorted elements in ascending order:\n");
    for(i=0;i<n;i++){
        {
            printf("%d\t",a[i]);

        }
        return 0;
    }
}        