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
    int counter = 0; 
    while(head != nullptr) { 
        cout << head->val << " "; 
        head = head->next;  // head = (*head).next
        if (counter++ == 100) { break; }
    }
    cout << endl; 
}

void checkIfThereIsAcycle(Node* head) { 
    bool cycle = false; 
    if (head->next == head) { cycle = true; }
    Node* p = head->next; 
    while(p->next != nullptr) { 
        Node* q = head; 
        while(p->next != q and p != q) { 
            q = q->next; 
        }
        if (p->next == q) { 
            cycle = true; 
            break; 
        }
        p = p->next; 
    }
    if (cycle) { 
        cout << "Found cycle at " << p->next->val << "\n";
    } else { 
        cout << "No cycle found!\n";
    }
}

void addRandomCycle(Node* head) { 
    Node* last = head; 
    int counter = 0; 
    while(last->next != nullptr) { 
        last = last->next; 
        counter++; 
    }
    srand(time(0));
    int x = rand() % counter; 
    Node* p = head; 
    while(p->next != nullptr && x > 0) { 
        p = p->next; 
        x--; 
    }
    last->next = p;
}

int main() { 
    Node* head = nullptr; 
    head = readListFromFile(); // creating a singly linked list (non-circular)
    printList(head);
    checkIfThereIsAcycle(head);
    cout << "Adding a cycle!\n";
    addRandomCycle(head);
    cout << "Checking again, after adding a cycle!\n";
    checkIfThereIsAcycle(head);
    printList(head);
}