#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;  
    cin >>n;   /* Take the input of the length of string */
    string str;
    cin >>str;   /* Take input of the string */
    string str1=str.substr(0,n/2);   /* Make a substring starting from the index 0 and exttends upto the n/2 character of the input string */
    string str2=str.substr(n/2,n/2);   /* Make another substring starting from the index n/2 and extends upto the n/2 character of the input string */
    int count=0;   /* Set count to be 0 */
    if(n>1)  /* if n>1,then there is possibility of symmetry */
    {
        while(str1.compare(str2)==0)  
        {
            count ++;   /* Compare both substrings and if symmetry found then incremented the count */ 
            if(n==2)   /* if n==2 found,then comes out of the loop because if not then in else part substring's length becomes 0 and loop never terminate */
            {
                break;
            }
            else
            {
                n/=2;   /* half the length of the n */
                /* again modify the substring according the length of input string which becomes half with every repeatation of loop */
                str2=str1.substr(n/2,n/2);  
                str1=str1.substr(0,n/2);
            }
        }
    }
    cout <<count;   /* print the count and it indicates the total possible times the input string divide symmetrically */
     return 0;
}

