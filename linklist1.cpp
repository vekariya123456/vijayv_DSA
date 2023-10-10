#include<iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;  
};

class Linkedlist
{
    public:
    Node* head = NULL;

    void addATlast(int val)
    {
      Node* newnode = new Node();
      newnode->val = val;
      newnode->next = NULL;

      if(head == NULL)
      {
        head = newnode;
      }
      else
      {
        Node*temp = head;
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }
        temp->next= newnode;
      }
    }
   
    void AddATfront(int val)
    {
        Node* newnode= new Node();
        newnode->val= val;
        newnode->next= NULL;

        newnode->next= head;
        head= newnode;
    }

    void Printlinklist()
    {
        Node* temp= head;

        while(temp!= NULL)
        {
            cout<<temp->val<<" ";
            temp= temp->next;
        }
    }
};

int main()
{
    Linkedlist list;

    list.addATlast(1);
    list.addATlast(2);
    list.addATlast(3);
    list.AddATfront(0);
    list.addATlast(4);

    list.Printlinklist();

}


       


