#include <iostream>
#include <vector>
using namespace std;

/*
Given a sequence of three binary sequences A, B and C of N bits. 
Count the minimum bits required to flip in A and B such that XOR of A and B is equal to C. 
For Example :
Input: N = 3
        A = 110
        B = 101
        C = 001
Output: 1
We only need to flip the bit of 2nd position
of either A or B, such that A ^ B = C i.e., 
100 ^ 101 = 001
*/

/*
At any position of A and B, we just only need to flip ith (0 to N-1) position of either 
A or B otherwise we will not able to achieve minimum no of Bits.

So at any position of i (0 to N-1) you will encounter two type of situation i.e., 
either A[i] == B[i] or A[i] != B[i]. Let’s discuss it one by one.

If A[i] == B[i] then XOR of these bits will be 0, two cases arise in 
C[]: C[i]==0 or C[i]==1.
If C[i] == 0, then no need to flip the bit but 
if C[i] == 1 then we have to flip the bit either in 
A[i] or B[i] so that 1^0 == 1 or 0^1 == 1.

If A[i] != B[i] then XOR of these Bits gives a 1, 
In C two cases again arise i.e., either C[i] == 0 or C[i] == 1.

Therefore if C[i] == 1, then we need not to flip the bit but if C[i] == 0, 
then we need to flip the bit either in A[i] or B[i] so that 0^0==0 or 1^1==0
*/

int totalFlips(char *A, char *B, char *C, int N)
{
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        // If both A[i] and B[i] are equal
        if (A[i] == B[i] && C[i] == '1')
            ++count;

        // If Both A and B are unequal
        else if (A[i] != B[i] && C[i] == '0')
            ++count;
    }
    return count;
}

int main()
{
    
    int N = 5;
    char a[] = "10100";
    char b[] = "00010";
    char c[] = "10011";

    cout << totalFlips(a, b, c, N)<<endl;

    return 0;
}