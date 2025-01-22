
#include <stdio.h>
#define maxsize 10

int q[maxsize], front=0, rear=-1;
void insert();
void Delete();
void display();

void main()
{
    void insert()
    {
        if(rear==maxsize-1)
        {
            printf("Queue overflow");
        }
        else
        {
            rear++;
            printf("enter a value:");
            scanf("%d" , & q[rear]);
        }
    }
    void Delete()
    {
        if(front>rear)
        {
            printf("Queue underflow");
        }
        else
        {
            printf("Delete data = %\n",q[front]);
            front++;
        }
    }
    void display(){
        int i;
        if(front>rear)
        {
            printf("Queue underflow");
        }
        else{
            for(i=front; i<=rear; i++){
                printf("%d \t" ,q[i]);
            }
        }
    }
}

