/*#include<stdio.h>
int main(){
    int a[6] = {80,60,20,70,10,50};
    int key=80,i,found=0,pos;
    for(i=0;i<=5;i++){
        if(key==a[i]){
            found=1;
            pos=i;
        }
    }
    if(found==1)
    printf("The search element found in %d position",pos);
    else
    printf("search element not found");
    return 0;
}*/
#include<stdio.h>
int main(){
   int a[6] = {10,20,50,60,70,80};
   int low=0,mid,high=5,key=60,pos;
   while(low<=high)
   {
    mid = (high+low)/2;
    if(key==a[mid]){
        pos=mid;
        break;
    }
    else if (key<=a[mid])
    {
        high = mid-1;
    }
    else
    low = mid +1;
    
   }
   printf("the search element found in %d position",pos);
   return 0;
}