/*
In binary Tree, every node has atmost 2 nodes connected to it or 
has degree = 0, 1, 2; 

-Tree is made up of nodes & edges
-'n' no. of node has 'n-1' no. of edges
-Degree is no. of direct child node connected
-Highest Degree is also the degree of the entire Tree

Types of Binary Trees:
1. Full or Strict Binary Tree
    - Its all nodes has degree either 0 or 2.

2. Perfect Binary Tree
    - Its all nodes has degree of 2 and allthe leaf nodes have same
       depth.

3. Complete Binary Tree
    -Complete tree has all the levels filled except possibly the last level.
      The nodes on the last level are filled from left to right. 

4. Degenerate or Balanced Binary Tree
    -Every node has only 1 child
            Types of Degenerate Tree : 
            a) Right Skewed Tree - Right side of teh tree has all the child to the right edge
            b) Left Skewed Tree - Left side of teh tree has all the child to the left edge

————————————————————————————————————————————————————————

                                                    Representation of Binary Tree :

                                                                [10]
                                                               /    \
                                                              /      \
                                                            [20]     [30]
                                                            /  \     /  \
                                                           /    \   /    \
                                                          /   [50] [60]   \
                                                        [40]    |   |     [70]
                                                        /  \ [NULL][NULL] |  \
                                                       /    \             |   \
                                                      /      \            |    \
                                                    [80]    [NULL]      [90]  [NULL]

                                                1. ------Arrays Representation------

                                            arr[0] = 10                     arr[8] = NULL
                                            arr[1] = 20                     arr[9] = NULL
                                            arr[2] = 30                    arr[10] = NULL
                                            arr[3] = 40                    arr[11] = NULL
                                            arr[4] = 50                     arr[12] = NULL
                                            arr[5] = 60                     arr[13] = 90
                                            arr[6] = 70                     arr[14] = NULL
                                            arr[7] = 80             Total size of array needed = 15


                                                2.-------Linked Representation-------

                                                            __________
                                        ●————————————————————●| 10 |●————————————————————●
                                        |                   ——————————                   |
                                    ____↓_____                                       ____↓_____
                            ●————————●| 20 |●———————●                         ●———————●| 30 |●————————●
                            |       ——————————      |                         |      ——————————       |
                            |                       |                         |                       |
                            |                  _____↓______              _____↓______                 |
                            |              NULL←—●| 50 |●—→NULL      NULL←—●| 60 |●—→NULL             |
                            |                  ————————————              ————————————                 |
                        ____↓______                                                               ____↓______ 
                ●————————●| 40 |●—→NULL                                                   ●————————●| 70 |●—→NULL
                |       ———————————                                                       |       ———————————  
                |                                                                         |                                                                                     |               
                |                                                                         |                
           _____↓______                                                              _____↓______
       NULL←—●| 80 |●—→NULL                                                      NULL←—●| 90 |●—→NULL
           ————————————                                                              ————————————

*/