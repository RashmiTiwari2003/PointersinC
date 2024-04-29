#include<iostream>
using namespace std;

class linkedList {
    public:
    int val;
    linkedList *next;
    linkedList() {
        next = NULL;
    }
};

int main() {
    linkedList *node = new linkedList();
    linkedList *node2 = new linkedList();
    node2->val = 20;
    // linkedList bad;
    // bad.a = 10;
    // cout<<bad.a<<endl;

    // (*node).a = 10;
    // cout<<(*node).a<<endl;

    node->val = 10;
    cout<<node->val<<endl<<endl;
    node->next = node2 ; // &(*node2)

    linkedList* head = node;
    while (head){
        cout<<head->val<<" ";
        head = head->next;
    }
    return 0;
}

// spoiler : Array != pointer but equal to pointer