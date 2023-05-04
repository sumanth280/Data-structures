#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node* createNode(){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    return (newNode);
}
 
void insertNodeAtEnd(){
    struct node *temp,*ptr;
    temp=createNode();
    printf("enter the data you want to insert:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void viewList(){
    struct node* temp=head;
    if(temp==NULL){
        printf("list is empty");
    }
    else{
        while(temp->next!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d \t",temp->data);
    }
}
int menu(){
    int choice;
    printf("\n 1.Add value to the list at end");
    printf("\n 2.Travesre/View List");
    printf("\n 3.exit");
    printf("\n Please enter your choice: \t");
    scanf("%d",&choice);
    return(choice);
}
 int main(){
    while(1){
        switch(menu()){
            case 1:
                insertNodeAtEnd();
                break;
            case 2:
                viewList();
                break;
            case 3:
                exit(0);
            default:
                printf("invalid choice");
        }
        getch();
    }
 
}
