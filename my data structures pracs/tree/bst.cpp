#include<iostream>
#include<malloc.h>
using namespace std;


struct node{
    int data;
    struct node *lptr, *rptr;
}*list = NULL, *p, *q, *r, *s;

class bst{
    public:
    bst(){
        int action;
        do{
            cout << "\n1. Insert Element into Binary Search Tree.\n2. Display Binary Search Tree elements.\n3. Traversal of Binary Search Tree.\n4. Delete elements from Binary Search Tree\n5. Search an element.\n6. Exit\nEnter action you want to perform: ";
            cin >> action;
            switch (action)
            {
                case 1:
                    insert();
                    break;
                case 2:
                    cout << "Elements in the tree are: ";
                    display(list);
                    cout << endl;
                    break;
                case 3:
                    traversal();
                    break;
                case 4:
                    delete_e();
                    break;
                case 5:
                    search();
                    break;
                case 6:
                    break;
                default:
                    cout << "Invalid Input. Please try again." << endl;
                    break;
            }
        }while(action!=6);
    }
    void insert(){
        int value;
        cout << "Enter value you want to insert: ";
        cin >> value;
        p = (struct node*)malloc(sizeof(node));
        p->data = value;
        p->lptr = NULL;
        p->rptr = NULL;
        if(list == NULL){
            list = p;
        }
        else{
            q = list;
            while(q->lptr || q->rptr){
                if(value < q->data){
                    if(q->lptr)
                        q = q->lptr;
                    else
                        break;
                }
                else if(value > q->data){
                    if(q->rptr)
                        q = q->rptr;
                    else
                        break;
                }
            }
            if(value < q->data)
                q->lptr = p;
            else if(value > q->data)
                q->rptr = p;
        }
    }
    void display(struct node *l){
        if(l){
            display(l->lptr);
            cout << l->data << " ";
            display(l->rptr);
        }
    }
    void traversal(){

    }
    void delete_e(){

    }
    void search(){

    }
};

int main(){
    bst tree;
}
