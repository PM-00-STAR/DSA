// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int data){      //parametised constructor node
//         this->data=data;
//         next=NULL;
//     }
// };

// int main(){
//     // statically creating node(2 nodes)
//     Node n1(1);
//     Node n2(2);

//     n1.next=&n2; //connection code
//     //next stores address of next node
//     cout<<n1.data<<" "<<n2.data<<endl;

//     Node *head = &n1;  //head stores address of n1,head is a pointer
//     cout<<head->data<<endl;


//     //creating nodes dynamically
//     Node *n3 = new Node(3);
//     Node *n4 = new Node(4);

//     //in dynamic allocation memory is allocated in both stack and heap

//     n3->next=n4; //not &n4


//     return 0;
// }

//linked list with 5 nodes
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){      //parametised constructor node
        this->data=data;
        next=NULL;
    }
};
void print(Node *head){ //first node as input
Node *temp = head;
    while(temp!=NULL){ //iterate
        cout<<temp->data<<" ";//print
        temp=temp->next;//move forward
    }
     while(head!=NULL){ //iterate
        cout<<head->data<<" ";//print
        head=head->next;//move forward
    }
}

int main(){
    // statically creating node(5 nodes)
    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

//connections
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
   //no need to type for tail its  null because of parametised constructor 
print(head) ;     //if you know address of head/first node u will know all adrreses
//u only need to pass address of the first node i.e head

    return 0;
}