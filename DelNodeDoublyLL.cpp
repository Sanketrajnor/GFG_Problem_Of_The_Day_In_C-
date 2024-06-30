class Solution {
public:
    Node* deleteNode(Node* head, int x) {
        // x is the position of the node
        if (head == NULL) return head;
        
        // If the match is the first node
        if (x == 1) {
            // It means we are on the head node
            Node* temp = head;
            head = head->next;
            if (head != NULL) head->prev = NULL;
            delete temp;
            return head;
        }
        
        Node* current = head;
        Node* previous = NULL;
        int dest = 1;
        while (dest != x && current != NULL) {
            previous = current;
            current = current->next;
            dest++;
        }

        if (dest == x && current != NULL) {
            if (current->next == NULL) {
                // If the node to be deleted is the last node
                previous->next = NULL;
            } else {
                // If the node to be deleted is in the middle
                Node* temp = current;
                previous->next = current->next;
                current->next->prev = previous;
                delete temp;
            }
        }
        
        return head;
    }
};
