There is a knight on an n x n chessboard. In a valid configuration, the knight starts at the top-left cell of the board and visits every cell on the board exactly once.

You are given an n x n integer matrix grid consisting of distinct integers from the range [0, n * n - 1] where grid[row][col] indicates that the cell (row, col) is the grid[row][col]th cell that the knight visited. The moves are 0-indexed.

Return true if grid represents a valid configuration of the knight's movements or false otherwise.

Note that a valid knight move consists of moving two squares vertically and one square horizontally, or two squares horizontally and one square vertically. The figure below illustrates all the possible eight moves of a knight from some cell.

<img width="406" height="406" alt="image" src="https://github.com/user-attachments/assets/1e3666d8-2481-45a4-a1f9-a7cffb72af5f" />

Example 1:

<img width="251" height="251" alt="image" src="https://github.com/user-attachments/assets/731db7b5-89e5-4c23-8b92-5ed5dea82845" />

Input: grid = [[0,11,16,5,20],[17,4,19,10,15],[12,1,8,21,6],[3,18,23,14,9],[24,13,2,7,22]]

Output: true

Explanation: The above diagram represents the grid. It can be shown that it is a valid configuration.

Example 2:

<img width="151" height="151" alt="image" src="https://github.com/user-attachments/assets/30b6b957-ff72-4799-ae59-1fed5a8c45dc" />

Input: grid = [[0,3,6],[5,8,1],[2,7,4]]

Output: false

Explanation: The above diagram represents the grid. The 8th move of the knight is not valid considering its position after the 7th move.
 

Constraints:

n == grid.length == grid[i].length

3 <= n <= 7

0 <= grid[row][col] < n * n

All integers in grid are unique.
