#include<iostream>
using namespace std;
#include<stdlib.h>
typedef struct node
{
    int val;
    node *next;
}node_t;
node_t *head=NULL;
node_t *current=NULL;
void push();
void pop();
void dis();
void fun();
int top=-1;
int main()
{
    int k;
    char c;
    label:
        cout<<"menu\n1.push\n2.pop\n3.display\n4.even before odd:\n";
        cin>>k;
        switch(k)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            dis();
            break;
        case 4:
        	if(top>0)
        	fun();
        	else
        	dis();
        	break;
		}
        cout<<"\n enter y for continuing session or enter n for session ending:";
        cin>>c;
        if(c=='y')
            goto label;
        else if(c=='n')
            exit(0);
            return 10;
}

void push()
{
    int v;
    if(top>=9)
        cout<<"overflow";
    else if(top==-1)
    {
        top++;
        head=new node_t;
        cout<<"enter the "<<top+1<<" element:";
        cin>>v;
        current=head;
        current->val=v;
        current->next=NULL;
    }
    else
    {
    	current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
        top++;
        cout<<"enter the "<<top+1<<" element:";
        cin>>v;
        current->next=new node_t;
        current=current->next;
        current->val=v;
        current->next=NULL;
    }
}
void pop()
{
       if(top==-1)
        cout<<"underflow";
       else if(top==0)
        {
            top--;
            head=NULL;
        }
        else
        {
            top--;
            current=head;
            while(current->next->next!=NULL)
            {
                current=current->next;
            }
            current->next=NULL;
        }

}
void dis()
{
    if(top==-1)
        cout<<"no elements";
    else
    {
        current=head;
        while(current!=NULL)
    {
        cout<<current->val<<" ";
        current=current->next;
    }
    }
}
void fun()
{   
	current=head;
	node_t *a=NULL;
	node_t *b=NULL;
	while(current->next!=NULL)
	{
		if((current->val)%2!=0&&(current->next->val)%2==0)
		{
			a=current;
			b=current->next;
			a->next=b->next;
			b->next=a;
			current=a;
		cout<<"loop bhitare\n";
          
		}
		else
		current=current->next;
		cout<<"while bahare";
	}
cout<<"exit";
}
