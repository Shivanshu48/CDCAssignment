You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

 

Example 1

<img width="422" height="302" alt="image" src="https://github.com/user-attachments/assets/9f3100c3-4fbf-48dd-b801-ff2a0f82f497" />

Input: root = [4,2,7,1,3], val = 2

Output: [2,1,3]

Example 2:

<img width="422" height="302" alt="image" src="https://github.com/user-attachments/assets/5eb905c9-bca2-4d6b-b2ed-d0c118c840ea" />

Input: root = [4,2,7,1,3], val = 5

Output: []
 

Constraints:

The number of nodes in the tree is in the range [1, 5000].

1 <= Node.val <= 107

root is a binary search tree.

1 <= val <= 107
