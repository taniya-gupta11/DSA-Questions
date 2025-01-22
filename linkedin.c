
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*add;
};
struct node*start = NULL,*temp, *New,*prev,*next;

void create();
void display();
void insert();
void main(){
    int ch;
    do
    {
        
        printf("press 1 for create operation\n");
        printf("press 1 for insert operation\n");
        printf("press 2 for  Delete oeration\n");
        printf("press 3 for display operaation\n");
        printf("press 4 for exist \n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();break;
            case 2:display();break;
            case 3:insert();break;
            case 4:break;
            default:printf("Invalid choice \n");
        }
        
    }
     while(ch!=4);
}
   void create()
   {
       int n;
       char ch;
       printf("enter a value:");
       scanf("%d", & n);
       start = (struct node*)malloc(sizeof(struct node));
       start->data=n;
       start->add=NULL;
       temp=start;
       printf("to add mole element, press Y ");
       scanf("%c",& ch);
       while(ch=='Y'|| ch=='y')
       {
           printf("enter next value:");
           scanf("%d",&n);
           New = (struct node*)malloc(sizeof(struct node));
           New->data = n;
           New->add=NULL;
           temp->add= New;
           temp =New;
           printf("to add more element ,press Y");
           scanf("%c",& ch);
       }
   }  
    void display()
      {
              if(start == NULL){
                  printf("list not created , create a list first");
              }
              else
              {
                  temp = start;
                  while(temp!=NULL){
                      printf("%d \t",temp->data);
                      temp=temp->add;
                  }
             }
         }
    void insert()
    {
        int n,position, i=1, count=0;
        if(start == NULL)
        {
            printf("list not create");
        }
        else
        {
            printf("enter a value:");
            scanf("%d",& n);
            New = (struct node*)malloc(sizeof(struct node));
            New->data=n;
            New->add=NULL;
            printf("enter a position");
            scanf("%d",&position);
            if(position==1){
            New->add=start;
            start=New;
            }
            else
            {
                temp=start;
            while (temp!=NULL){
            count++;
            temp=temp->add;
        }
            
        if(position>count+1)
        {
            printf("invalid position, it should be <= %d",count+1);
        }
        else if(position==count+1){
         temp=start;
         while(temp->add!=NULL)
         {
             temp = temp->add;
         }
         temp->add=New;
    }
    else{
        next=start;
        while(i<position)
        {
        prev=next;
        next = next->add;
        
        i++;
    }
    prev->add=New;
    New->add=next;
       }
      }
     }
    }
    