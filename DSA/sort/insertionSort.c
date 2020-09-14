#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int* create(int count){
    int *array = (int*)malloc(count*sizeof(int));
    for(int i=0;i<count;i++){
        array[i] = rand()%count;
    }
    return array;
}
void print(int *array,int count){
    printf("The array is :\n");
    for(int i=0;i<count;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
void swap(int *first,int *second){
    int temp=*first;
    *first=*second;
    *second=temp;
}
void sortAscend(int *array,int count){
    int key,j;
    for(int i=1;i<count;i++){
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
           array[j+1]=array[j];
           j=j-1; 
        }
        array[j+1]=key;
    }
}
void sortDescend(int *array,int count){
    int key,j;
    for(int i=1;i<count;i++){
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]<key){
           array[j+1]=array[j];
           j=j-1; 
        }
        array[j+1]=key;
    }
}
int main(){
    int *array;
    int count = 10;
    array = create(count);
    print(array,count);
    sortAscend(array,count);
    print(array,count);
    sortDescend(array,count);
    print(array,count);
}