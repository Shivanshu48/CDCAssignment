Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

 

Example 1:

<img width="302" height="222" alt="image" src="https://github.com/user-attachments/assets/cb8c3a62-a922-4cc3-ab46-eca54d9b4254" />


Input: nums = [-10,-3,0,5,9]

Output: [0,-3,9,-10,null,5]

Explanation: [0,-10,5,null,-3,null,9] is also accepted:

<img width="302" height="222" alt="image" src="https://github.com/user-attachments/assets/ea4f8257-2524-4947-819f-b02b2f05a5d7" />

Example 2:

<img width="342" height="142" alt="image" src="https://github.com/user-attachments/assets/e740ec2d-874a-48a8-a96f-86ed623228b6" />

Input: nums = [1,3]

Output: [3,1]

Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
 

Constraints:

1 <= nums.length <= 104

-104 <= nums[i] <= 104

nums is sorted in a strictly increasing order.
