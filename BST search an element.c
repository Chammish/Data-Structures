// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int d;
    struct node *left;
    struct node *right;
}*r,*t,*n;
int max=0,i=0;
void display(struct node *w)
{
    int a;
    if(w==NULL)
    {
        return ;
        
    }
    a=w->d;
        //printf("%d ",w->d);
        display(w->left);
        display(w->right);
        //a=w->d;
        if(i==0)
        {
            max=a;
            i++;
        }
        else
        {
            if(max<a)
            {
                max=a;
            }
        }
        
    
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
    printf("%d",max);
}
