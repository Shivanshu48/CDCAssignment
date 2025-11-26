There are n cities. Some of them are connected, while some are not. If city a is connected directly with city b, and city b is connected directly with city c, then city a is connected indirectly with city c.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

You are given an n x n matrix isConnected where isConnected[i][j] = 1 if the ith city and the jth city are directly connected, and isConnected[i][j] = 0 otherwise.

Return the total number of provinces.

 

Example 1:

<img width="222" height="142" alt="image" src="https://github.com/user-attachments/assets/0ea00aeb-a327-413a-b583-a6a8df9bd99a" />


Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]

Output: 2

Example 2:

<img width="222" height="142" alt="image" src="https://github.com/user-attachments/assets/5457315d-2b90-450f-a79c-a86b371c42cc" />

Input: isConnected = [[1,0,0],[0,1,0],[0,0,1]]

Output: 3

 

Constraints:

1 <= n <= 200

n == isConnected.length

n == isConnected[i].length


isConnected[i][j] is 1 or 0.

isConnected[i][i] == 1

isConnected[i][j] == isConnected[j][i]
