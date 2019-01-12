#include <iostream>

using namespace std;
class Node{
    public:
    //Data
    int data;
    Node *ptr;
    //Constructor to make ptr to null
    Node()
    {
        ptr=NULL;
    }
};
class LinkedList{
    public:
    
    
    //Head-> circle type ptr
    Node *head;
    Node *tail;
    //Constructor
    LinkedList()
    {
        head=NULL;
        tail=NULL;
    }
    //Circle inside linked with each other
    //Rules how circle will be linked
    //Insertion
    void insertion(int value)
    {
        //1st Node is added
        Node *temp=new Node();
        //Insert data in node
        temp->data=value;
        if(head==NULL)
        {
            //1st node only
            this->head=temp;
        }
        else
        {
        //Any other node
        tail->ptr=temp;
        }
        
        this->tail=temp;
        
    }
    //Insert at 
    void InsertionAt(int pos,int data)
    {
        //Reach the place before pos
        Node *current=head;
        int a=1;
        while(a<pos-1)
        {
           a++;
           current=current->ptr;
        }
        //Create the node
        Node *c=new Node();
        c->data=data;
        c->ptr=current->ptr;
        current->ptr=c;
    }
    
    //Deletion of last element
    void deletion()
    {
        //store tail in temp
        Node *t=tail;
        //before tail has to point to NULL
         Node *current=head;
        while(current->ptr!=tail)
        {
            current=current->ptr;
        }
        current->ptr=NULL;
        //update tail
        tail=current;
        //delete temp
        delete t;
        
    }
    //count items
    int countItems()
    {
        Node *current=head;
        int length=0;
        while(current!=NULL)
        {
            length++;
            current=current->ptr;
        }
        return length;
    }
    //Delete at position
    void deletionAt(int pos)
    {
        //Reach the place before pos
        Node *current=head;
        int a=1;
        while(i<pos-1)
        {
           a++;
           current=current->ptr;
        }
        //copy the node to be deleted
        Node *t=current->ptr;
        //Reach next place after pos 
        Node *next=head;
        int b=0;
        while(b<pos)
        {
           b++;
           next=next->ptr;
        }
        //Pointer of the node before pos will point to the node after pos 
        current->ptr=next;
        delete t;
        
    }
    //Display
    
    void display()
    {
        Node *current=head;
        while(current!=NULL)
        {
            cout<<current->data<<"->";
            current=current->ptr;
            
        }
        cout<<"NULL"<<endl;
    }

};

int main()
{
    //Object of the class
    LinkedList l1;
    //Enter values
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    //show output
    l1.display();
    cout<<"The number of items before deletion="<<l1.countItems()<<endl;
    l1.del();//use of delete
    l1.display();
    cout<<"The number of items after deletion="<<l1.countItems()<<endl;
   l1.InsertionAt(2,5);//use of insert at
    l1.display();
    cout<<"The number of items after insertion at position="<<l1.countItems()<<endl;
    l1.deletionAt(3);//use of deleteAt
    l1.display();
    cout<<"The number of items after delete at position="<<l1.countItems()<<endl;
    
    return 0;
}


