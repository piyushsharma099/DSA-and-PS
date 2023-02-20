#include<bits/stdc++.h>
using namespace std;
struct Node{
	int value;
	int rp;
	int cp;
	struct Node *next;
};
void create_new_node(struct Node** start, int nze,int ri, int ci ){
	struct Node *temp, *r;
	temp = *start;
	if (temp == NULL){
		temp = (struct Node *) malloc (sizeof(struct Node));
		temp->value = nze;
		temp->rp = ri;
		temp->cp = ci;
		temp->next = NULL;
		*start = temp;
	}
	else{
		while (temp->next != NULL){
			temp = temp->next;
        } 
		r = (struct Node *) malloc (sizeof(struct Node));
		r->value = nze;
		r->rp = ri;
		r->cp = ci;
		r->next = NULL;
		temp->next = r;
	}
}
void Print_Sparse(struct Node* start){
	struct Node *temp, *r, *s;
	temp = r = s = start;
	cout<<"rp: ";
	while(temp != NULL){
		cout<<temp->rp<<" ";
		temp = temp->next;
	}
    cout<<endl;
	cout<<"cp: ";
	while(r != NULL){
		cout<<r->cp<<" ";
		r = r->next;
	}
	cout<<endl;
    cout<<"Value: ";
	while(s != NULL){
		cout<<s->value<<" ";
		s = s->next;
	}
	cout<<endl;
}
int main(){
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter numbers of columns : ";
    cin>>c;
	int s_matrix[r][c];
    cout<<"Enter Matrix elements ";
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin>>s_matrix[i][j];
        }
    }
	struct Node* start = NULL;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (s_matrix[i][j] != 0)
				create_new_node(&start, s_matrix[i][j], i, j);
        }
    }
	Print_Sparse(start);
	return 0;
}
// cp  = column position
// rp  = row position
// ci  = column index
// ri  = row index
// nze = non zero element
