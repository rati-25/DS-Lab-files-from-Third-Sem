#include <iostream>

using namespace std;

typedef struct node {
    int data;
    struct node * link{nullptr};
} Node ;

void printNode( Node * &head){
    int nodeCount{};
    if (head == nullptr){
        cout << "the node is empty" << endl;
        return ;
    }
    Node * temp{head};
    while (temp != nullptr){
        cout << temp->data << " " ;
        nodeCount++ ;
        temp = temp -> link ;
    }
    cout << "\nNode Count : " << nodeCount << endl;
    return ;
}

Node * traverse ( Node * &head , int key){
    if ( head == nullptr ){
        cout << "list is empty!!!" << endl;
        return nullptr;
    }
    Node * temp{head};
    while (temp!=nullptr && temp->data!=key){
        temp = temp->link;
    }
    return temp;
}

Node * traverseToPrev(Node * &head , int key){
    if ( head == nullptr ){
        cout << "list is empty!!!" << endl;
        return nullptr;
    }
    Node * temp{head};
    while ( temp->link != nullptr && temp->link->data != key){
        temp = temp ->link;
    }
    if ( temp->link == nullptr ){
        cout << "key not found!!!" << endl;
        return nullptr;
    }
    return temp;
}

void deleteAtBegining(Node * &head){
    if (head == nullptr){
        cout << "the list is empty!!! NOthing to delete" << endl;
        return ;
    }
    Node * temp{head};
    head = head -> link;
    delete temp;
    cout << "first node deleted" << endl;
    return ;
}

void deleteByValue(Node * &head){
    if (head == nullptr){
        cout << "list is empty!!! nothing to delete" << endl;
        return ;
    }
    int key;
    cout << "key : " ;
    cin >> key ;
    Node * temp{traverseToPrev(head , key)};
    Node * temp2{traverse(head , key)};
    if (temp==nullptr && temp2==nullptr){
        return ;
    }
    temp->link = temp2->link;
    delete temp2;
    cout << "selected node with key deleted" << endl;
    return ;
}

void deleteAtEnd ( Node * &head){
    if (head == nullptr ){
        cout << "no elements in the list !!!" << endl;
        return ;
    }
    if ( head-> link == nullptr ){
        deleteAtBegining(head);
        return;
    }
    Node * temp{head};
    while (temp->link->link != nullptr){
        temp = temp->link;
    }
    delete temp->link;
    temp->link = nullptr;
    cout << "last node deleted" <<endl;
    return ;
}

void reversal(Node * &head){
    if (head == nullptr || head->link == nullptr){
        cout << "insufficient elements to reverse the list" << endl;
        return ;
    }
    Node * prev{nullptr}, *curr{head}, *next{nullptr};
    while(curr){
        next=curr->link;
        curr->link=prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return ;
}

int main () {
    Node * head {new Node{10 , new Node{20 , new Node{30 , new Node{40 , new Node{50 , nullptr}}}}}};
    printNode(head);
    cout<<"Delete at the Begining -" << endl;
    deleteAtBegining(head);
    printNode(head);
    cout << "Delete at the End -" << endl;
    deleteAtEnd(head);
    printNode(head);
    cout << "Deleting cartain key -" << endl;
    deleteByValue(head);
    printNode(head);
    cout << "Deleting cartain key -" << endl;
    deleteByValue(head);
    printNode(head);
    cout << "Reversing the list -" << endl;
    reversal(head);
    printNode(head);
    return 0;
}