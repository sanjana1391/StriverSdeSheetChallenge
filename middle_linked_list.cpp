#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    Node*s,*f;
    s=head;
    f=head;
    while(f!=nullptr && f->next!=nullptr){
        s=s->next;
        f=f->next->next;
    }
    return s;
}
