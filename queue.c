#include<stdio.h>
#define MAX 5

struct queue
{
	int que[MAX];
	int rear,front;
}q;

void insert(int b)
{
	if(q.rear==MAX-1)
	{
		printf("\n queue is full");
	}
	else
	{
	q.rear++;
	q.que[q.rear]=b;
    }
}

void delete()
{
	int c;
	c=q.que[q.front];
	q.front++;
}

void display()
{
	int i;
	for(i=q.front;i<=q.rear;i++)
	{
		printf("\n %d",q.que[i]);
	}
}

main()
{
	q.rear=-1;
	q.front=0;
	int a,b;
	read:
		printf("\n menu \n 1) insert \n 2) dele \n 3) dispaly");
		scanf(" %d",&a);
		switch(a)
		{
			case 1:
				printf("\n enter the number");
				scanf("%d",&b);
				insert(b);
				goto read;
			case 2:
				delete();
				goto read;
			case 3:
				display();
				goto read;
				
		}
}

