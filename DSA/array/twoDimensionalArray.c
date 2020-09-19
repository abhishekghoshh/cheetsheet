#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int row =3,column=4;
    int count =0;
    // Using an array of pointers
    // two dimensional array can be thought as a one dimention array of pointers;
    // where this array has no of elements which is equal to row
    int *arr[row];
    
    // Using pointer to a pointer
    // We can create an array of pointers also dynamically using a double pointer. 
    // Once we have an array pointers allocated dynamically, 
    // we can dynamically allocate memory and for every row like method 2.
    // Note that arr[i][j] is same as *(*(arr+i)+j)
    int **arr2 = (int **)malloc(row * sizeof(int *)); 

    //initializing the array now
    for(int i=0;i<row;i++){
        arr[i]=(int*)malloc(sizeof(int*));
    }
    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            arr[i][j]= (++count)%12;
        }
    }
    for(int i = 0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}