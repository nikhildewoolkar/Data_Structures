#include<iostream>
#include<bits/stdc++.h>
#include<malloc.h>
using namespace std;

struct node{
    int data;
    struct node *next;
}*List=NULL, *p, *q, *r, *s;

class nick{
	public:
    int action, value, element,size;
    public:
    mytech(){
    	cout<<"enter the size of linked list";
    	cin>>size;
    	for(int i=0;i<size;i++)
    	{
        cout << "Enter value you want to insert: ";
        cin >> value;
        p = (struct node*)malloc(sizeof(node));
        q = (struct node*)malloc(sizeof(node));
        p->data = value;
        if(List==NULL){
            p->next = NULL;
            List = p;
        }
        else{
            q = List;
            while(q->next!=NULL)
                q = q->next;
            q->next = p;
            p->next = NULL;
        }
    }
        display();
    //results();
    }
bool isPalin(node* head){  
        node* slow= head; 
        stack <int> s; 
           while(slow != NULL){ 
                s.push(slow->data); 
                slow = slow->next; 
        } 
       while(head != NULL ){ 
            int i=s.top(); 
             s.pop(); 
            if(head -> data != i){ 
                return false; 
            } 
           head=head->next; 
        } 
return true; 
}
void results()
{

 int result = isPalin(List); 
    
    if(result == 1) 
            cout<<"linklist is palindrome\n"; 
    else
        cout<<"linklist is not palindrome\n"; 
}
 void display(){
        if(List==NULL)
            cout << "No Element in the linked list.";
        else{
            p = List;
            cout << "Elements in the linked list are: ";
            while(p!=NULL){
                cout << p->data << " ";
                p = p->next;
            }
        }
        cout<<endl;
        results();

    }
};

int main(){
    nick o;
    o.mytech();
}
