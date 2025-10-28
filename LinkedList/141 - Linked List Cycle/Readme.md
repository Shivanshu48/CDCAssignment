Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:

<img width="531" height="171" alt="image" src="https://github.com/user-attachments/assets/d87016ea-519e-4f76-add8-0a39e5cdf082" />

Input: head = [3,2,0,-4], pos = 1

Output: true

Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:

<img width="201" height="105" alt="image" src="https://github.com/user-attachments/assets/61fada63-4a34-46dc-8467-13c8acf8662f" />

Input: head = [1,2], pos = 0

Output: true

Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Constraints:

The number of the nodes in the list is in the range [0, 104].

-105 <= Node.val <= 105

pos is -1 or a valid index in the linked-list.
