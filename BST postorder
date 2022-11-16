#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int d;
    struct node *left;
    struct node *right;
}*r,*t,*n;
void display(struct node *w)
{
    if(w==NULL)
    {
        return;
        
    }
        display(w->left);
        display(w->right);
        printf("%d ",w->d);
    
}
int main()
{
    n=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&n->d);
    n->left=NULL;
    n->right=NULL;
    r=n;
    while(1)
    {
        int a;
        scanf("%d",&a);
        if(a<1)
        {
            break;
        }
        else
        {
            n=(struct node *)malloc(sizeof(struct node));
            n->d=a;
            n->left=NULL;
            n->right=NULL;
            t=r;
            while(t!=NULL)
            {
                if(n->d<t->d)
                {
                    if(t->left!=NULL)
                    {
                        t=t->left;
                    }
                    else
                    {
                        t->left=n;
                        t=NULL;
                    }
                }
                else if(n->d>t->d)
                {
                    if(t->right!=NULL)
                    {
                        t=t->right;
                    }
                    else
                    {
                        t->right=n;
                        t=NULL;
                    }
                }
                else if(t->d==n->d)
                {
                    t=NULL;
                }
            }
        }
    }
    display(r);
}
