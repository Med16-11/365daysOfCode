ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL||k == 0) return head;
        ListNode* temp = head;
        int length = 1;
        while(temp->next != NULL) {
            ++length;
            temp = temp->next;
        }
    
        temp->next = head;
        k = k%length; 
        int end = length-k; 
        while(end--) temp = temp->next;
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
