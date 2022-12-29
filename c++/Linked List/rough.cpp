//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int coefff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coefff = c;
        pow = p;
        next = NULL;
    }
    
};


void append(struct Node** head_ref, struct Node **tail_ref,
            int new_data, int new_data1)
{
    struct Node* new_node = new Node(new_data, new_data1);
    
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    
    while (temp != NULL)
    {
       printf("%d %d ", temp->coefff, temp->pow);
       temp  = temp->next;
    }
}

Node* addPolynomial(Node *p1, Node *p2);


void create_node(int x, int y, struct Node **temp)
{
    struct Node *r, *z;
    z = *temp;
    if(z == NULL)
    {
        r = new Node(x, y);
        *temp = r;
        r->next = NULL;
    }
    else
    {
        r->next = new Node(x, y);
        r = r->next;
        r->next = NULL;
    }
}
 

/* Driver program to test above function*/

// } Driver Code Ends
/* Structure of Node used
struct Node
{
    int coefff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coefff = c;
        pow = p;
        next = NULL;
    }
    
};
*/

class Solution{
  public:
      struct Node * getnode(struct Node**list){
        Node *p;
        p=(Node*)malloc(sizeof(Node));
        return p;
        }
        struct Node *Insert_Beg(struct Node**list,int c,int e){
            Node *temp;
            temp=getnode(list);
            temp->coeff=c;
            temp->pow=e;
            temp->next=*list;
            *list=temp;
            return 0;
        } 
        struct Node *Insert_End(Node**list , int c , int e){
            Node *Q,*p;
            Q=*list;
            if(Q==NULL){
                Insert_Beg(&(*list),c,e);
            }
            else{
                while(Q->next!=NULL){
                    Q=Q->next;
                }
                p=getnode(list);
                p->coeff=c;
                p->pow=e;
                p->next=NULL;
                Q->next=p;
            }
            return 0;
        }
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node* addPolynomial(Node *p1, Node *p2){
        //Your code here
        Node*p3=NULL;
        Node *p,*q;
        p=p1;
        q=p2;
        while(p!=NULL && q!=NULL){
            if(p->pow==q->pow){
                Insert_End(&p3,p->coeff+q->coeff,p->pow);
                p=p->next;
                q=q->next;
            }
            else{
                if(p->pow>q->pow){
                    Insert_End(&p3,p->coeff,p->pow);
                    p=p->next;
                }
                else{
                    Insert_End(&p3,q->coeff,q->pow);
                    q=q->next;
                }
            }
        }
        while(p!=NULL){
                Insert_End(&p3,p->coeff,p->pow);
                p=p->next;
            }
        while(q!=NULL){
            Insert_End(&p3,q->coeff,q->pow);
            q=q->next;
        }
        return p3;
    }
};


//{ Driver Code Starts.
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
        struct Node *tail1  = NULL,*tail2 = NULL;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly1,&tail1,x,y);
        }
        
         int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            	append(&poly2,&tail2,x,y);
        }
        Solution obj;
        Node *sum = obj.addPolynomial(poly1,poly2);
        for(Node* ptr=sum ; ptr ; ptr=ptr->next  )
        {
            // printing polynomial
            cout<< ptr->coefff << "x^" << ptr->pow;
            if(ptr->next) cout<<" + ";
        }
        cout<<endl;
       
    }

}

// } Driver Code Ends