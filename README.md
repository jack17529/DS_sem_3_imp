# DS_sem_3_imp
All sem3 important codes

*******************************************************************************************************************
Maze Program in C++ using stack and array!

I am trying to write a maze program using stack in c++

I idea is that a user can call from a file a list of 1's and 0's that will be used as the maze. The maze is to work (in 4 directions) its way from the top to the bottom where the 0's are the open path and the 1's are the walls. When it encounters a 1, the program should automatically backtrack and go through a path of 0's. A sample input file is below. Also below is some pseudo code that I have written. Remember, the use does not decide the directions (this is not an interactive maze). The program automatically pulls the numbers into an array and puts it on a stack. Then automatically works through and outputs on the screen the path(s) that it took before it go down the maze. Please help asap!

struct coord //no member function
     {int row,
     int col;}
int myarray[10][10]
stack s //I will also have to predefine this
coord curr;
cur.row = cur.col = 0;
found = false; //logical variable
underflow = true; //no path condition
while ((!found) && (underflow))
     { if (cur.row == 9)
          found = true);
     else if (maze [cur.row + 1, cur.col==0)] //right direction
          {push(cur); maze (cur.row, cur.col)
          cur.col++;
     //same sort of algorithm for left, up, and down
     else {maze[cur.row, cur.col] = 1;
          (cur=pop(underflow);}


SAMPLE INPUT:
0 0 0 1 1 1 0 0 0 0
1 1 0 0 0 0 0 1 1 0
0 0 0 1 1 1 0 1 0 0
0 1 1 1 0 0 0 1 0 1
0 0 1 1 0 1 1 1 0 0
1 0 0 1 0 0 1 1 1 0
1 1 0 1 1 0 1 0 0 0
0 0 0 0 1 1 1 0 1 1
0 1 1 0 1 0 0 0 1 1
1 1 1 1 1 0 1 1 1 1

https://www.experts-exchange.com/questions/20563335/Maze-Program-in-C-using-stack-and-array.html#answer8213149

**********************************************************************************************************************
C Program to Solve Josephus Problem using Linked List

This C Program Solves the Josephus Problem using Linked List. Josephus Problem talks about a problem where there are people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom.
Here is source code of the C Program to Solve Josephus Problem using Linked List. The C program is successfully compiled and run on a Linux system. The program output is also shown below.

**********************************************************************************************************************
