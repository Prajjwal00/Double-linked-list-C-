/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root =NULL;
void append(void);
void display(void);
int length(void);
void atbegin(void);
void anywhwere(void);
// for adding an element to list
void append()
{
    struct node *temp;
    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root ==NULL)
    {
        root =temp;
        
    }
    else
    {
        struct node *p;
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=temp;
        temp->left=p;
    }
    
}
// adding node at the begining of list
void atbegin()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root == NULL)
    {
        root =temp;
        
    }
    else
    {
        temp->right=root;
        root->left=temp;
        root=temp;
    }
}
// for finding out the length
int length()
{
    struct node *temp=root;
    int count =0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->right;
    }
    return count;
}
// printing the elements to display
void display()
{
    struct node *temp=root;

    
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->right;
    }
    
}

// adding node anywhwere in the list
void anywhere()
{
    struct node *temp,*p;
    int loc;
    int i=0;
    printf("Enter the location");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("Invalid ");
        
    }
    else
    {
        temp =(struct node*)malloc(sizeof(struct node));
        printf("Enter data ");
        scanf("%d",&temp->data);
        temp->left=NULL;
        temp->right=NULL;
        while(i<loc);
        {
            p=p->right;
            loc++;
        }
        temp->right=p->right;
        p->right->left=temp;
        temp->left=p;
        p->right=temp;
        
    }
}