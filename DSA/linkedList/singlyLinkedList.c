#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printList(struct node *next){
    struct node *start;
    start=next;
    int count=0;
    if(NULL!=start){
        while(NULL!=start){
            printf("%dth data is %d\n",count++,start->data);
            start=start->next;
        }
    }
}
struct node* getOneNode(int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
struct node* initializeLinkedList(int *array,int count){
    struct node *start = NULL,*temp,*travarser=NULL;
    for(int i=0;i<count;i++){
        temp=(struct node*)getOneNode(array[i]);
        if(NULL==start){
            start=travarser=temp;
        }else{
            travarser->next=temp;
            travarser=temp;
        }
    }
    return start;
}
struct node* insertAtBegin(struct node *start,int data){
    struct node *temp = getOneNode(data);
    temp->next=start;
    return temp;
}
void insertAtEnd(struct node *start,int data){
    struct node *temp = getOneNode(data);
    if(NULL!=start){
        while(NULL!=start->next){
            start=start->next;
        }
        start->next=temp;
    }
}
void deleteFromBegin(){

}
void DeleteFromEnd(){
    
}
int getCount(struct node *start){
    int count =0;
    if(NULL!=start){
        while(NULL!=start){
            count++;
            start=start->next;
        }
    }
    return count;
}
void insertAtN(struct node **start,int position,int data){

}
int deleteAtN(struct node **start,int position){

}
int main(){
    int array[]={1,2,3,4,5};
    struct node *start;

    start=initializeLinkedList(array,((sizeof(array))/sizeof(int)));
    printList(start);

    printf("Insertion of 7 at begining\n");
    start = insertAtBegin(start,7);
    printList(start);

    printf("Insertion of 9 at end\n");
    insertAtEnd(start,9);
    printList(start);
    return 0;
}
