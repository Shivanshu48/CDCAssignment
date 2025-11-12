Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

 

Example 1:


<img width="532" height="400" alt="image" src="https://github.com/user-attachments/assets/7e5426a8-f9e1-447f-9a8b-3314e08319b4" />

Input: root = [3,4,5,1,2], subRoot = [4,1,2]

Output: true

Example 2:


<img width="502" height="458" alt="image" src="https://github.com/user-attachments/assets/531d1f53-90f4-4971-b2f2-0ac78e97abf1" />


Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]

Output: false
 

Constraints:

The number of nodes in the root tree is in the range [1, 2000].

The number of nodes in the subRoot tree is in the range [1, 1000].

-104 <= root.val <= 104

-104 <= subRoot.val <= 104
