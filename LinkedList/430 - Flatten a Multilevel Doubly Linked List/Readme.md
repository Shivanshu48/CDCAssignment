You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional child pointer. This child pointer may or may not point to a separate doubly linked list, also containing these special nodes. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure as shown in the example below.

Given the head of the first level of the list, flatten the list so that all the nodes appear in a single-level, doubly linked list. Let curr be a node with a child list. The nodes in the child list should appear after curr and before curr.next in the flattened list.

Return the head of the flattened list. The nodes in the list must have all of their child pointers set to null.

 

Example 1:

<img width="1163" height="563" alt="image" src="https://github.com/user-attachments/assets/2c93b618-4852-4029-baf5-66563592811c" />

Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]

Output: [1,2,3,7,8,11,12,9,10,4,5,6]

Explanation: The multilevel linked list in the input is shown.

After flattening the multilevel linked list it becomes:

<img width="2363" height="163" alt="image" src="https://github.com/user-attachments/assets/e11dbe7f-e4b8-4442-b0aa-90d56b4c7a01" />


Example 2:

<img width="363" height="363" alt="image" src="https://github.com/user-attachments/assets/ce1fe4aa-07be-4f05-bc39-53da3d9c34ae" />

Input: head = [1,2,null,3]

Output: [1,3,2]

Explanation: The multilevel linked list in the input is shown.

After flattening the multilevel linked list it becomes:

<img width="563" height="163" alt="image" src="https://github.com/user-attachments/assets/1c0593a8-8e4f-4145-a40b-c3bfa1feaacd" />

Example 3:

Input: head = []

Output: []

Explanation: There could be empty list in the input.
 

Constraints:

The number of Nodes will not exceed 1000.

1 <= Node.val <= 105
 

