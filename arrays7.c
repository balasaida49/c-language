//program of binary search
#include <stdio.h>  
int main(){
    int a[10],i,low=0;
    int mid,high,key,pos;
    printf("enter to elements in ascending order:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        high=9;
        printf("enter element to search:");
        scanf("%d",&key);
        while (low<=high){
            mid=(low+high)/2;
            if (key==a[mid]){
                pos=mid;
                break;
            }
            else if (key<a[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            printf("element %d found at position %d\n",key,pos+1);
        }
        return 0;
    }
}
