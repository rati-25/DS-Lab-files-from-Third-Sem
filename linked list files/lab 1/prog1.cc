#include <iostream>

typedef struct node
{
    int data;
    struct node *link{nullptr};
} Node;

void printNode(Node * &head)
{
    Node * temp{head};
    int nodeCount{0};
    std::cout << "The element(s) in the list :" << std::endl;
    while (temp != nullptr)
    {
        std::cout << temp->data << "    ";
        temp = temp->link;
        nodeCount++;
    }
    std::cout << std::endl;
    std::cout << "The no. nodes in the list are " << nodeCount << std::endl;
    std::cout << std::endl
              << std::endl;
}

Node *traverseToNode(Node * &head, int key)
{
    Node * temp{head};
    while (temp->data != key)
    {
        temp = temp->link;
    }
    if ( temp->link != nullptr )
    {
        return temp;
    }
    else
    {
        std::cout << "the link does not contain the key - " << key << std::endl;
        return nullptr ;
    }
}

void insertAtBegining(Node *&head)
{
    int trailingelement;
    std::cout << "Insert at the Begining : ";
    std::cin >> trailingelement;
    Node *newNode = new Node{trailingelement, head};
    head = newNode;
}

void insertAfterKey(Node *&head)
{
    int key{}, element{};
    std::cout << "Insert ";
    std::cin >> element;
    std::cout << "after ";
    std::cin >> key;
    Node *temp{traverseToNode(head, key)};
    if ( temp == nullptr )
    {
        std::cout << "there is no such element as key - " << key <<std::endl;
    }
    else
    {
        Node *newNode = new Node{element, temp->link};
        temp->link = newNode;
    }
}

void insertEnd(Node *&head)
{
    int tailingElement;
    std::cout << "Insert End : ";
    std::cin >> tailingElement;
    Node * newNode = new Node{ tailingElement , nullptr };
    if ( head == nullptr )
    {
        head = new Node{tailingElement, nullptr};
    }
    else
    {
        Node * temp {head};
        while (temp->link != nullptr)
        {
            temp = temp->link;
        }
        temp->link = newNode;
    }
}

void insertAtBegining(Node *&head, int trailingelement)
{
    Node *newNode = new Node{trailingelement, head};
    head = newNode;
}

void insertAfterKey(Node *&head, int key, int element)
{
    Node *temp{traverseToNode(head, key)};
    if ( temp == nullptr )
    {
        std::cout << "no such key - " << key << std::endl;
        return;
    }
    Node *newNode = new Node{element, temp->link};
    temp->link = newNode;
    
}

void insertEnd(Node *&head, int tailingElement)
{
    Node * newNode = new Node{tailingElement,nullptr};
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp{head};
    while (temp->link != nullptr)
    {
        temp = temp->link;
    }
    temp->link = newNode;
    return ;    
}

int main()
{
    Node *Head{nullptr};
    insertEnd(Head);
    printNode(Head);
    insertEnd(Head);
    insertEnd(Head);
    insertEnd(Head);
    printNode(Head);
    insertAtBegining(Head);
    printNode(Head);
    insertAfterKey(Head);
    printNode(Head);
    
    return 0;
}