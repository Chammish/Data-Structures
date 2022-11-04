#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;
}*h,*n,*t;
int count = 0,punda;
void Llist()
{
    n = (struct node*)malloc(sizeof(struct node));
            printf("Enter the element => ");
            scanf("%d",&n->data);
            n->nxt = NULL;
            if(count == 0)
            {
                h = n;
                t = n;
                count = 1;
            }
            else
            {
                t->nxt = n;
                t = t->nxt;
            }
}
void display()
{
             t=h;
            while(t->nxt != NULL)
                {
                    printf("%d ",t->data);
                    t = t->nxt;
                }
            printf("%d ",t->data);
}
void insertf()
{
    n = (struct node*)malloc(sizeof(struct node));
    printf("new front node => ");
    scanf("%d",&n->data);
    n->nxt = NULL;
    t = n;
    t->nxt = h;
    h = n;
}
void insertm()
{
    n = (struct node*)malloc(sizeof(struct node));
    printf("new middle node => ");
    scanf("%d",&n->data);
    n->nxt = NULL;
    printf("enter before or after punda = > ");
    scanf("%d",&punda);
    t = h;
    while(t!=punda)
    t = t->nxt;
    n->nxt = t->nxt;
    t->nxt = n;
}
void main(void)
{
    int i=0,s;
    while(i == 0)
    {
        printf("1 to create list\n4 to display\n2 to insertf\n3 to insertm\nyour choice => ");
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            Llist();
            break;
            case 2:
            insertf();
            break;
            case 3:
            insertm();
            case 4:
            display();
        }
            
        printf("\n0 to continue => ");
        scanf("%d",&i);
    }
}