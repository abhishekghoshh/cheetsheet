#include<stdio.h>
// #include<conio.h>
#include<stdlib.h>
int array[]={1,2,3,4,5};

struct doublyLinkedList{
    struct node *start;
    struct node *last;
    int length;
};

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void printList(struct doublyLinkedList list){
    struct node *start;
    start=list.start;
    printf("The list is : ");
    if(NULL!=start){
        while(NULL!=start){
            printf("%d ",start->data);
            start=start->next;
        }
    }printf("\n");
}
void printListwithAddress(struct doublyLinkedList list){
    struct node *start;
    start=list.start;
    printf("The list is :\n");
    if(NULL!=start){
        while(NULL!=start){
            printf("prev addr = %p , data = %d next addr = %p\n",start->data);
            start=start->next;
        }
    }
}
struct node* getOneNode(int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data=data;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}   
struct doublyLinkedList initializeLinkedList(int *array,int count){
}
void insertAtBegin(struct doublyLinkedList *list,int data){
}
void insertAtEnd(struct doublyLinkedList *list,int data){
}
int deleteFromBegin(struct doublyLinkedList *list){
}
int deleteFromEnd(struct doublyLinkedList *list){
}
void insertAtN(struct doublyLinkedList *list,int position,int data){
}
int deleteAtN(struct doublyLinkedList *list,int position){
}
void reverse(struct doublyLinkedList *list){
}
struct doublyLinkedList initialize(){
}
int main(){
    struct doublyLinkedList list;
    return 0;
}