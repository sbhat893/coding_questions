'''
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
'''

def mergeTwoLists(list1, list2):
    if not list1:
        return list2
    if not list2:
        return list1
    head = list1
    if(list1.val < list2.val):
        list1 = list1.next
    else:
        head = list2
        list2 = list2.next
    tail = head
    while list1 and list2:
        if list1.val < list2.val:
            tail.next = list1
            list1 = list1.next
        else:
            tail.next = list2
            list2 = list2.next
        tail = tail.next
    if list1:
        tail.next = list1
    else:
        tail.next = list2
    return head