#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};
void insert(struct Node** head, int data)
{
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}
void Delete(struct Node** head, int delVal)
{
    struct Node* temp = *head;
    struct Node* previous;
    if(temp->next==NULL)
    {
       *head = NULL;
       free(temp);
       printf("Value %d, deleted \n",delVal);
       return;
    }
    if(temp!=NULL && temp->data==delVal)
    {
        *head = temp->next;
        printf("Value %d, deleted \n",delVal);
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != delVal)
    {
        previous = temp;
        temp = temp->next;
    }
    if(temp==NULL)
    {
        printf("Value not found\n");
        return;
    }
    previous->next = temp->next;
    free(temp);
    printf("Value %d, deleted \n",delVal);
}
void display(struct Node* node)
{
  while(node!=NULL)
  {
    printf("%d ",node->data);
    node = node->next;
  }
  printf("\n");
}
int main()
{
  struct Node* head = NULL;
  insert(&head,12);
  insert(&head,16);
  insert(&head,20);
  insert(&head,24);
  insert(&head,30);
  insert(&head,22);
  printf("Linked List Before Operations : ");
  display(head);
  Delete(&head, 22);
  Delete(&head,20);
  Delete(&head,12);
  printf("Linked List After Operations : ");
  display(head);
 return 0;
}

