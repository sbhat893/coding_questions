/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == nullptr) {
        return list2;
    }
    if(list2 == nullptr) {
        return list1;
    }
    ListNode* head;
    if(list1->val <= list2->val) {
        head = list1;
        list1 = list1->next;
    } else {
        head = list2;
        list2 = list2->next;
    }
    ListNode* tail = head;
    while(list1 && list2) {
        if(list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    return head;
}