#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* Next;
    

Node(int value){
    data=value;
    Next=nullptr;
    
}
};
Node* inserAtBeginning(Node* last, int value){
    Node* newNode= new Node(value);
    if(last==nullptr){
        newNode->Next=newNode;
        return newNode;
    }
    newNode->Next=last->Next;
    last->Next=newNode;
  return last;
  
    
}
void printList(Node* last){
    if(last==NULL)
        return;
        
        Node* head=last->Next;
        while(true){
            cout<<head->data<<" ";
            head=head->Next;
            if(head==last->Next)
            break;
            
                
            
            
        }
        cout<<endl;
        
}
int main(){
    Node* first=new Node(2);
    first->Next=new Node(3);
    first->Next->Next=new Node(4);
    Node* last=first->Next->Next;
    last->Next=first;
    printList(last);
    last=inserAtBeginning(last,5);
    cout<<"List after inserting 5 at beginning :";
    printList(last);
    return 0;
    
}