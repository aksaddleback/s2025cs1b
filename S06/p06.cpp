#include<iostream> 
#include<fstream> 
using namespace std; 

struct Node { 
    int val; 
    Node* next; 
};

void addToTheEnd(Node*& t, int val) {
    Node* newNode = new Node {val, nullptr}; 
    if (t == nullptr) { 
        t = newNode; 
        t->next = t;         // (*t).next = t; 
        return; 
    }
    newNode->next = t->next; // (*newNode).next = (*t).next;
    t->next = newNode;       // (*t).next = newNode; 
    t = newNode;             // t = newNode; 
}

Node* readListFromFile(string fn = "p0.txt") { 
    ifstream f(fn); 
    Node* t = nullptr; 
    while(!f.eof()) { 
        int x;
        f >> x; 
        addToTheEnd(t, x); 
    }
    f.close();
    return t; 
}

void printList(Node* tail) { 
    if (tail == nullptr) { return ; }
    Node* p = tail->next; 
    while(p != tail) { 
        cout << p->val << " "; 
        p = p->next;  // p = (*p).next
    }
    cout << p->val << " ";
    cout << endl; 
}

void removeAllButSurvivor(Node*& t, int k) {
    Node* p = t; 
    while(p->next != p) { // (*p).next != p
        for(int i = 1; i < k; i++) {  // move p (k-1) times
            p = p->next; 
        }
        Node* toDelete = p->next; 
        p->next = p->next->next; // (*p).next = (*((*p).next)).next
        delete toDelete; 
    }
    t = p; 
}

int main() { 
    Node* tail = nullptr; 
    tail = readListFromFile("p6.txt");
    printList(tail);
    int k = 5; 
    removeAllButSurvivor(tail, k);
    printList(tail);
}