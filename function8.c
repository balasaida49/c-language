//program using arrays and functions
#include <stdio.h>
void display(int[]);
main(){

    int markes[]={98,73,87,95};
    display(markes);
}
void display(int markes[])




 {   
    int i;
    printf("marks of students:\n");
    for(i=0;i<4;i++)
    
        printf("marks=%d\n",markes[i]);
        
    


}


