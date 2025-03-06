#include<iostream> 
#include<fstream> 
using namespace std; 

struct Node { 
    int val; 
    Node* next; 
};

void addToTheEnd(Node*& p, int val) {
    Node* newNode = new Node {val, nullptr}; 
    if (p == nullptr) { 
        p = newNode; 
        return; 
    }
    Node* temp = p; 
    while(temp->next != nullptr) { 
        temp = temp->next;   // temp = (*temp).next; 
    }
    temp->next = newNode; 
}

Node* readListFromFile(string fn = "p0.txt") { 
    ifstream f(fn); 
    Node* h = nullptr; 
    while(!f.eof()) { 
        int x; 
        f >> x; 
        addToTheEnd(h, x); 
    }
    f.close();
    return h; 
}

void printList(Node* head) { 
    while(head != nullptr) { 
        cout << head->val << " "; 
        head = head->next;  // head = (*head).next
    }
    cout << endl; 
}

void printMiddleNodeValue(Node* h) { 
    Node* p = h; 
    int count = 0; 
    while(p!=nullptr) { 
        p = p->next; 
        count++; 
    }
    count /= 2; 
    while(count > 0) { 
        h = h->next; 
        count--; 
    }
    cout << "Middle member: " << h->val << endl; 
}

int main() { 
    Node* head = nullptr; 
    head = readListFromFile();
    printList(head);
    printMiddleNodeValue(head);
}