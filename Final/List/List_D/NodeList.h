#ifndef NODE
#define NODE
typedef int Elem;
class NodeList{
    
private:
struct Node
{
    Elem  elem;
    Node* prev;
    Node* next;
};
public:
class Iterator{
    public:
        Elem& operator*();
        bool operator == (const Iterator& p) const;
        bool operator != (const Iterator& p) const;
        Iterator& operator++();
        Iterator& operator--();
        friend class NodeList;
    private:
        Node* v;
        Iterator(Node* u);
};
public:
    NodeList();
    int size() const;
    bool empty() const;
    Iterator begin() const;
    Iterator end() const;
    void insertFront(const Elem& e);
    void insertBack(const Elem& e);
    void insert(const Iterator& p, const Elem& e);
    void eraseFront();
    void eraseBack();
    void erase(const Iterator& p);
private:
    int n;
    Node* header;
    Node* trailer;


};
#endif
