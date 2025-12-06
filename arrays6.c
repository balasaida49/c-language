//linear search in an array
#include <stdio.h>
int main(){
    int x[6]={23,45,12,67,34,89};
    int key,i,found=0,pos;
    printf("Enter element to search: ");
    scanf("%d",&key);
    for(i=0;i<6;i++){
        if (key==x[i])
        {
            found=1;
            pos=i;
            break;
        }
    }
    if (found==1)
    {
        printf("Element %d found at position %d\n",key,pos+1);
    }
    else
    {
        printf("Element %d not found in the array\n",key);
    }
    return 0;
}