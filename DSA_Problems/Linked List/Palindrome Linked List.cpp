bool isPalindrome(ListNode* head) {
        
        vector<int> arr;
    while(head != NULL) {
        arr.push_back(head->val);
        head = head->next;
    }
    for(int i=0;i<arr.size()/2;i++) 
        if(arr[i] != arr[arr.size()-i-1]) return false;
    return true;
}
