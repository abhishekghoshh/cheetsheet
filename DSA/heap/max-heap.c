#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct heap{
    int heapSize;
    int length;
    int *items;
};
struct heap create(int length){
    struct heap heap_;
    heap_.length=length;
    heap_.items=(int*)malloc(length*sizeof(int*));
    heap_.heapSize=0;
    return heap_;
}
void swap(int *first ,int *second){
    int temp = *first;
    *first=*second;
    *second=temp;
}
void maxHeapify(struct heap *heap_,int start){
    int left = 2*start+1;
    int right = 2*start+2;
    int largest;
    if(left < heap_->heapSize && heap_->items[left]>heap_->items[start]){
        largest=left;
    }else{
        largest=start;
    }
    if(right < heap_->heapSize && heap_->items[right]>heap_->items[largest]){
        largest=right;
    }
    if(largest!=start){
        swap(&(heap_->items[start]),&(heap_->items[largest]));
        maxHeapify(heap_,largest);
    }
}
void buildHeap(struct heap *heap){
    heap->heapSize=heap->length;
    int i=((heap->length)/2)-1;
    while(i>=0){
        maxHeapify(heap,i);
        i--;
    }
}
void print(struct heap heap_){
    printf("Items in the heap are : ");
    for(int i=0;i<heap_.length;i++){
        printf("%d ",heap_.items[i]);
    }printf("\n");
}
int main(){
    int length=7;
    struct heap heap_ = create(length);
    for(int i=0;i<length;i++){
        heap_.items[i]=rand()%length;
    }
    print(heap_);
    buildHeap(&heap_);
    print(heap_);
    return 0;
}