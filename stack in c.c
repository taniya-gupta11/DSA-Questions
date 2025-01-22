
#include <stdio.h>
#define maxsize 10

int q[maxsize], front=0, rear=-1, ch;
void insert();
void Delete();
void display();

void main(){
    do
    {
        printf("\n--------stack---------\n");
        printf("press 1 for insert operation\n");
        printf("press 2 for  Delete oeration\n");
        printf("press 3 for display operaation\n");
        printf("press 4 for exist \n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();break;
            case 2:Delete();break;
            case 3:display();break;
            case 4:break;
            default:printf("Invalid choice \n");
        }
        
    }

    while(ch!=4);
}
    
    
    
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
            printf("Delete data = %d",q[front]);
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


