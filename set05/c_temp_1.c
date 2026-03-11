#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node * create_node(int value)
{
    struct node * newnode= (struct node *)malloc(sizeof(struct node *));
    newnode->data=value;
    newnode->next = NULL;
}
void insert_node_beginning(struct node ** head, int value)
{
    struct node* newnode=create_node(value);
    newnode->next=*head;
    *head=newnode;
}
void deletenode(struct node ** head, int value)
{
    struct node *temp=*head;
    struct node *prev=NULL;
    if(temp!=NULL&& temp->data==value)
    {
        *head=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=value)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf(":value %d not found in the list.\n", value);
        return;
    }
    prev->next=temp->next;
    free(temp);
}
void display_list(struct node * head)
{
    if(head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    struct node* temp=head;
    printf("Linked list: ");
    while(temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("Null\n");
}
