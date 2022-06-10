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
    while(temp!=NULL){ //iterate //use this
        cout<<temp->data<<" ";//print
        temp=temp->next;//move forward
    }
    cout<<"NULL"<<endl;
}
    Node* takeinput(){
    int data ;
    cin>>data;
    Node *head =NULL;//LL is empty
    Node *tail = NULL; //head and tail initially are empty
    while(data!=-1){
        // Node n(data); //created node//don't use this(statically)
        Node *n = new Node(data);//dynamically
        if(head==NULL){//first node condition
            head=n;
            tail=n;
        }
        else{//rest node condition
            tail->next=n;//move forward
            tail=n;//update
        }
        cin>>data;
    }

    return head;
    }

int main(){
    // statically creating node(5 nodes)
  
//   Node n1(1);
//     Node *head = &n1;

//     Node n2(2);
//     Node n3(3);
//     Node n4(4);
//     Node n5(5);
//connections
// n1.next=&n2;
// n2.next=&n3;
// n3.next=&n4;
// n4.next=&n5;
   
 Node *head = takeinput();
print(head) ;    
    return 0;
}