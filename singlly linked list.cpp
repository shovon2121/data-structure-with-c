#include <iostream>
using namespace std;
struct node {
   int data;
   struct node *next;
}*head,*tail;

void insert(int data) {
    struct node *n = new node();
    if(head == NULL)
    {
        head = n;
        n->data = data;
        tail = n;
    }
    tail->next = n;
    n->data = data;
    tail = n;

}
void display() {
   struct node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}
