class LinkedList
{
public:
 int length;
 Node* head;
 LinkedList();
 ~LinkedList();
 void add(int data);
 void print();
};

class Node
{
public:
 Node* next;
 int data;
};


LinkedList mergeLists(LinkedList a, LinkedList b){

    // Creamos una nueva esctructura para devolver los datos
    LinkedList ans = new LinkedList();

    Node* curr_a = a.head;
    Node* curr_b = b.head;
    while(curr_a != nullptr && curr_b != nullptr) {
        Node* to_add;
        if curr_a->data < curr_b->data {
            to_add = new Node(curr_a->data);
            curr_a = curr_a->next;
        } else {
            to_add = new Node(curr_b->data);
            curr_b = curr_b->next;
        }
        ans.add(to_add);
    }

    Node* last_part;
    if(curr_a != nullptr){
        last_part = curr_a;
    } else {
        last_part = curr_b;
    }

    while(last_part != nullptr) {
        Node* to_add = new Node(last_part->data);
        last_part = last_part->next;
        ans.add(to_add);
    }

    return ans

}