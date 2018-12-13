# micropt-extra-cred
The extra credit assignment for CSCI 389: Computer Systems

To compile, use this line: `gcc -O3 -std=c99 -march=native -o driver -Werror -Wall -Wextra -pedantic *.c`

and use this line to run: `./driver quotes.txt 1000`

| Things I've Tried| Time (s)      | 
| -------------    |:-------------:| 
| Original         | 0.071084      | 
| Loop Unrolling   | 0.066946      | 
| Memset w/ Loop   | core dump     |  
| Inlining atoi    | 0.006534      |  
| ^ and ++i in Loop| 0.006506      | 

After lecture, my first thought for optimization immediately went towards the for loop. I thought that would be the slowest chunk of the code, and therefore the easiest way to improve performance would be to optimize the for loop. (80/20 principle) However, when I tried loop unrolling, I did not see many gains in performance. 

Next, I decided to try and use memset instead of the for loop. However, I'm not familar with C so I wasn't sure how to do this without looping through each char array anyway. Trying that out caused a core dump :( 

From the very first assignment I remembered how much function calls slowed down our code, so for this assignment, I replaced the atoi() with an inline atoi function. Doing so dramatically decreased the run time, probably due to the fact that function calls have to push and pop values from the stack. After that I changed the i++'s to ++i in the for loops, since apparently the prefix doesn't create a copy, so there's no constructor/destructor calls. This saved a little bit of time. 
