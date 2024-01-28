//Implementation of stack using linked list

#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
void count();
void evenNode();
void reverse();
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 7)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Count\n5.evennodes\n6.reverse\n7.exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:  
            {  
                count();  
                break;  
            }  
            case 5:  
            {  
                evenNode();  
                break;  
            }
			case 6:  
            {  
                reverse();  
                break;  
            }    
            case 7:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
} 
void count(){  
    int i,count=0;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;
			count++;  
        }
		printf("Count is :%d",count);  
    }  
} 
	
void evenNode() {
  int i=0;
  struct node *ptr;
  ptr=head;
  while(ptr!=NULL){
  	ptr=ptr->next;
  	i++;
  }  
  ptr=head;
  printf("Even nodes values are:");
  while(i>0){
  
  if(i%2==0){
  	printf("%d\n",ptr->val);
  }
  ptr=ptr->next;
  i--;
}
}

void reverse(){
	struct node *ptr,*pre;
	ptr=head;
	pre=NULL;
	while(pre!=head){
		ptr=head;
		while(ptr->next!=pre)ptr=ptr->next;
		printf("%d\n",ptr->val);
		pre = ptr;
		
	}
}


/*


*********Stack operations using linked list*********

----------------------------------------------


Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
1
Enter the value10
Item pushed

Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
1
Enter the value20
Item pushed

Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
1
Enter the value30
Item pushed

Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
1
Enter the value40
Item pushed

Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
2
Item popped

Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
3
Printing Stack elements
30
20
10


Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
4
Printing Stack elements
30
20
10
Count is :3

Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
5
Even nodes values are:20


Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
6
10
20
30


Chose one from the below options...

1.Push
2.Pop
3.Show
4.Count
5.evennodes
6.reverse
7.exit
 Enter your choice
7
Exiting....

*/