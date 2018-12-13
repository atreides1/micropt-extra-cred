# micropt-extra-cred
The extra credit assignment for CSCI 389: Computer Systems

To compile, run this line: `g++ -O3 -std=c99 -march=native -o driver -Werror -Wall -Wextra -pedantic *.c`

and use this line to run: `./driver quotes.txt 1000`

| Things I've Tried| Time (s)      | 
| -------------    |:-------------:| 
| Original         | 0.071084      | 
| loop unrolling   | 0.066946      | 
| memset w/ loop   | core dump     |  
| inlining atoi    | 0.006534      |  
