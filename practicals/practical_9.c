#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node
{
    int data;
    struct node *next;
};

struct node* f=NULL;
struct node* r=NULL;

void linkedlisttravsal(struct node *ptr)
{
    printf("printing the elment of linked list\n");
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val){
       
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if (n==NULL)
    {
       printf("Queue is full\n");
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if (f==NULL)
        {
            f=r=n;
        }
        else{
             r->next=n;
             r=n;
        }
        printf("Enqueuing element is : %d\n",val);
    }    
}

int dequeue(){
       
    int val=-1;
    struct node* n=f;
    if (f==NULL)
    {
       printf("Queue is Empty\n");
    }
    else
    {
      f=f->next;
      val=n->data;
      free(n);  
    } 
    return val;   
}

int main()
{   
     
    printf("Enrollment NO. :- 210130107011\n");
    printf("Student Name :- SMit Rajani\n");
    printf("Practical-9\n");
    printf("Practical Aim: Write a program to implement a queue using a linked list.\n");
    time_t my_time = time(NULL);
    printf("Time :- %s\n", ctime(&my_time));
    
    printf("dequeueing element is : %d\n",dequeue());
    linkedlisttravsal(f);
    enqueue(5);
    enqueue(51);
    printf("dequeueing element is : %d\n",dequeue());
    printf("dequeueing element is : %d\n",dequeue());

    linkedlisttravsal(f);

    return 0;
}