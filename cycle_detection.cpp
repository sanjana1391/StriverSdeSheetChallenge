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

bool detectCycle(Node *head)
{
	//	Write your code here
    Node*f,*s;
    s=f=head;
    while(f!=nullptr && f->next!=nullptr){
        s=s->next;
        f=f->next->next;
        if(s==f){
            return true;
        }
    }
    return false;
}
