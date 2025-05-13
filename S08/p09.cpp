#include<iostream> 
using namespace std; 

class Publication {
    protected:
        string title;
        string publisher;
    public:
        Publication(const string& title, const string& publisher) : title(title), publisher(publisher) {}
        virtual void display() const { 
            cout << "Title: " << title << endl; 
            cout << "Publisher: " << publisher << endl; 
        }
};

class Book : public Publication { 
    private: 
        string author;
    public:
        Book(const string& title, const string& publisher, const string& author) : 
            Publication(title, publisher), author(author) { }
        
        void display() const override  { 
            cout << "This is a book!=================\n";
            cout << "Title: " << title << endl; 
            cout << "Publisher: " << publisher << endl; 
            cout << "Author: " << author << endl; 
        }
};

class Magazine : public Publication { 
    private: 
        int issueNumber;
    public:
        Magazine(const string& title, const string& publisher, int issueNumber) : 
            Publication(title, publisher), issueNumber(issueNumber) { }
        
        void display() const override  { 
            cout << "This is a Magazine!=================\n";
            cout << "Title: " << title << endl; 
            cout << "Publisher: " << publisher << endl; 
            cout << "Issue #: " << issueNumber << endl; 
        }
};
    
int main() {
    Publication** ps = new Publication*[3];
    ps[0] = new Book("C++ Programming", "Saddleback College Publishing", "Alex");
    ps[1] = new Magazine("Saddleback Daily", "Saddleback Magazine Publisher inc", 1112);
    ps[2] = new Publication("A Night at the college", "Saddleback Night Publisher!");
    for(int i = 0; i < 3; i++) {
        ps[i]->display(); 
        delete ps[i];
    }
    delete[] ps; 
}