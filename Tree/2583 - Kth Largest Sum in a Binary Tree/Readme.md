You are given the root of a binary tree and a positive integer k.

The level sum in the tree is the sum of the values of the nodes that are on the same level.

Return the kth largest level sum in the tree (not necessarily distinct). If there are fewer than k levels in the tree, return -1.

Note that two nodes are on the same level if they have the same distance from the root.

 

Example 1:

<img width="301" height="284" alt="image" src="https://github.com/user-attachments/assets/bfbdb4c7-6912-4d11-93a5-c538045fd135" />

Input: root = [5,8,9,2,1,3,7,4,6], k = 2

Output: 13

Explanation: The level sums are the following:

- Level 1: 5.

- Level 2: 8 + 9 = 17.

- Level 3: 2 + 1 + 3 + 7 = 13.

- Level 4: 4 + 6 = 10.

The 2nd largest level sum is 13.

Example 2:

<img width="181" height="181" alt="image" src="https://github.com/user-attachments/assets/3d102fa8-6219-49f9-8ecf-df8832bd019d" />

Input: root = [1,2,null,3], k = 1

Output: 3

Explanation: The largest level sum is 3.
 

Constraints:

The number of nodes in the tree is n.

2 <= n <= 105

1 <= Node.val <= 106

1 <= k <= n
