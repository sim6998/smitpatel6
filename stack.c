#include<stdio.h>
#define size 10

struct stack
{
	int s[size];
	int top;
}st;

int isempty()
{
	if(st.top==-1)
	return 1;
	else
	return 0;
}

int isfull()
{
	if(st.top==size-1)
	return 1;
	else
	return 0;
}

void push(int x)
{
	st.top++;
	st.s[st.top]=x;
}

int pop()
{
	int x;
	x=st.s[st.top];
	st.top--;
	return x;
}

int peep()
{
	printf("top of stack is ");
	printf("%d",st.s[st.top]);
}

void display()
{
	int i;
	for(i=st.top;i>=0;i--)
	printf("%d",st.s[i]);
}
int main()
{
	st.top=-1;
	int a,c,ch;
	read:
		printf("\n 1) push \n 2) pop \n 3) peep \n 4) display \n 5) exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(isfull==0)
				{
				printf("stack is full");
			    }
				else 
				{
					printf("\n enter the value ");
					scanf("%d",&a);
					push(a);
				}
				goto read;
			case 2:
					if(isempty())
					{
						printf("stack is empty");
					}
					else
					{
						c=pop();
						printf("\n %d",c);
					}
					goto read;
			case 3:
				peep();
				goto read;
					
			case 4:
					display();
					goto read;
			case 5:
				break;
		}
}
