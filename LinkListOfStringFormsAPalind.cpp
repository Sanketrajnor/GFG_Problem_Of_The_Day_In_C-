bool compute(Node* head) {
        // Your code goes here
        string combinedString = "";
        Node* current = head;
        while (current != NULL) {
            combinedString += current->data;
            current = current->next;
        }
        int left = 0;
        int right = combinedString.length() - 1;
        while (left < right) {
            if (combinedString[left] != combinedString[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
