#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin >>T;   /* Take input of the total number of testcases */
    while(T!=0)   /* Starting a while loop which executes 'T' times */
    {
        int N,i,j;
        cin >>N;   /* Take input of the size of pattern */
        int k=N+2; 
        for(i=1;i<=N;i++)   /* Execute a loop which run 'N' times, this loop represents total lines of pattern */ 
        {
            for(j=1;j<=N;j++)   /*Execute another loop which also run 'N' times, this loop run in a line */
            {
                if ( (j<=k/2) | (j>N-k/2) )   /* print '*' upto k/2 positions from starting and end, otherwise print ' '(space) */
                    cout << "*";
                else
                    cout << " ";
            }
            if(i<=N/2)   /* if i<=N/2, decrement 'k' by 2 every time */ 
                k-=2;
            else        /* if i>N/2,we need to print the pattern in reverse order,so increment k by 2 every time */
                k+=2;
            cout <<endl;    /* Now end the line */
        }
        T--;     /* decrement the 'T' */ 
    }
    return 0;
}

