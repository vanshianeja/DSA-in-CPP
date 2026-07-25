What is time complexity(TC)?
-> Rate at which the time taken increases with respect to the input size.
# Time complexity != time taken

# TC => Brg-Oh Notation => O(time taken)

1) Time complexity to be computed in the worst case scenario
{ Why worst ? Because we think that yes this is the worst thing that could happen! }

2) Avoid Constants
{ Because whenever the input size is very large , those constants have very less significance! }

3) Avoid lower values
{ Because they does not change the answer by much! }

# Example :
for (i=1; i<=N; i++){
    std::cout << "Raj" ;
}

# Here Time Complexity will be O(N * 3) or O(N) [ignoring constant]

-> Best case = when the code takes least amount of steps to execute
-> Worst case = when the code takes most amount of steps to execute
-> Average case = (Best + Worst)/2 = Average number of operations over all possible valid inputs.

Brg-Oh (O) -> Worst Case [Upper-Bond]
Theta -> [Average-Complexity] or [Tight-Bound]
Omega -> [Lower-Bond]

*** QUESTION 1 ***

for (i=0; i < N; i++){
    for(j=0; j < N; j++){
        [CODE];
    }
}

*** ANSWER 1 ***
O(N*N) => O(N^2) [Avoiding constants]


*** QUESTION 2 ***

for (i=0; i < N; i++){
    for(j=0; j < i; j++){
        [CODE];
    }
}

*** ANSWER 2 ***
i = 0 --> j = 0
i = 1 --> j = 0, 1
i = 2 --> j = 0, 1, 2
-
-
-
-
i = N-1 [because i is < n , not <= n] --> j = 0, 1, 2, 3, ....... n-1

( 1+2+3+4+....+n) => (N*(N+1))/2
                  => [(N^2)/2] + [N/2]
                  => O((N^2)/2) [AVOIDING CONSTANT] 
                  => O(N^2)




__________________________________________________________________________________________________________________________________________

What is space complexity?
-> It is the memory space that your program takes.
-> Brg-O Notation

# Space Complexity => Auxiliary Space + Input Space
-> Auxiliary space = space that you take to solve the problem
-> Input space = the space that you take to store the input 

# Example
We give input to some a and b
like a = 3 and b = 5
and then we are having some c variable 
like c = a + b

=> Here c is can be referred as auxillary space
=> And a and b are input space

So combined we can say this is the space complexity i.e. O(3) [because we are using 3 different variables] or O(1) [because constant becomed 1]

# Example
If we are using an array of size N then we say that brg of N is the space complexity i.e. O(N)

***** IMP Rule of Interview *****
--- Never do anything to the input ---
--- Don't modify the input unless the problem explicitly allows it or it's intentional ---

ex = a = 5, b = 7, b = a + b
We don't want to tamper with our data , so we will be using extra variable

In competitive programing ( platforms like leetcode, gfg),
Most of the servers take 1 second for 10^8 operations
and 2 sec = 2*(10^8) operations

Time limit = 1sec means O(10^8) operations