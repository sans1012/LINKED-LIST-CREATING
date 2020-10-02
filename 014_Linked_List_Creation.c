#include<stdio.h>
#include<stdlib.h>

struct node
{ int info;
  struct node *link;
};
 
struct node * start;

void create(int item)
{ struct node *nnw=(struct node *)malloc(sizeof(struct node ));
  nnw->info=item;
  nnw->link=NULL;
  if(start==NULL)
  { start=nnw; }
  else
  { struct node *temp=start;
    while(temp->link!=NULL)
    temp=temp->link;
    temp->link=nnw;
  }
}

void display()
{ if(start==NULL)
  { printf("\n No list"); }
  else
  { struct node * ptr=start;
    while(ptr->link!=NULL)
    { printf("%d  --->  ",ptr->info);
      ptr=ptr->link;
    }
    printf("%d",ptr->info);
  }
}	

void insert_beg(int item)
{ struct node *nnw=(struct node *)malloc(sizeof(struct node ));
  nnw->info=item;
  nnw->link=NULL;
  if(start==NULL)
  { start=nnw; }
  else
  { nnw->link=start;
    start=nnw;
  }			
}

insert_last(int item)
{ struct node *nnw=(struct node *)malloc(sizeof(struct node ));
  nnw->info=item;
  nnw->link=NULL;
  if(start==NULL)
  { start=nnw; }
  else
  { struct node * ptr=start;
    while(ptr->link!=NULL)
    ptr=ptr->link;
    ptr->link=nnw;	
  }
}
	
void main()
{ int ch,item;
  char ans='Y';
  start=NULL;

  while(ans=='Y'||ans=='y')
  { system("cls");
    printf("\n********************  CHOICE MENU  *************************\n");
    printf("\n 1. Creating a linked list ");
    printf("\n 2. Inserting node in a beginning of the linked list");
    printf("\n 3. Inserting node in a end of the linked list");
    printf("\n 4. Displaying a linked list ");
    printf("\n 5. Exit");
    printf("\n Enter choice : ");
    scanf("%d",&ch);

    switch(ch)
    { case 1: printf("\n Enter the no. of nodes : ");
	      int n,item,i;
	      scanf("%d",&n);
	      for(i=0;i<n;i++)
	      {	printf("\n Enter the data for node %d : ",i+1);
		scanf("%d",&item);
		create(item);
	      }
	      break;
			
      case 2: printf("\n Enter the element to be inserted at the Beginning of list: ");
	      scanf("%d",&item);
	      insert_beg(item);
	      printf("\n Element Added ");
	      break;
					
      case 3: printf("\n Enter the element to be inserted at the end of list: ");
	      scanf("%d",&item);
	      insert_last(item);
	      printf("\n Element Added ");
	      break;
			
      case 4: display();
	      break;
					
      case 5: printf("\n Terminating");
	      exit(0);
	      break;
					
      default: printf("\n Wrong choice entered ");
	       break;
    }
    printf("\n Do you want to enter more choices(y/Y for Yes ,any other key for no): ");
    fflush(stdin);
    scanf("%c",&ans);
  }
  printf("\nPress any key to EXIT...");
  getch();
}
