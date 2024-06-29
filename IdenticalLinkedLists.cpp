bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here
    if(head1 == NULL && head2 == NULL ) return true;
    if(head1 == NULL || head2 == NULL ) return false;
    Node* temp1 = head1;
    Node* temp2 = head2 ;
    while(temp1 != NULL && temp2 != NULL ){
        if(temp1->data !=  temp2->data){
             return false ;
        }
        temp1 = temp1 ->next;
        temp2 = temp2 ->next;
        if ((temp1 != NULL && temp2 == NULL) || (temp1 == NULL && temp2 != NULL)) {
        return false;
    }

    }
    return true;
}
