#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;   
    string bin;
    cin>>bin;   
    string bin1,bin2;
    /* Make two strings same as the input string */
    bin1=bin2=bin;   
    int i;
    /* Find the previous string of the input string */
    for(i=n-1;i>=0;i--) 
    {
        /* if string 'bin1' at index 'i' is equal to 1 */
        if(bin1.at(i)=='1')   
        {
            /* then change it to 1 and break the loop */
            bin1.at(i)='0';   
            break;  
        }
        else
        /* if equal to 0,change it to 1 */
        bin1.at(i)='1';   
      }  
      /* if 'i' is equal to 0,it means 1 doesn't come and all 0's untill (n-1) times for eg. as in case of 16-(10000) */ 
      if(i==0)   
      /* in that case the length of the previous string is smalller than the string 'bin1' by 1. For eg. 16-(10000) and previous string 15-(1111) */
      bin1=bin1.substr(1,n-1); 
      /* if 'i' become negative, it means all 0's in the input string so print '-1' and terminate the program */
      if(i<0)   
      {
          cout <<"-1";
          return 0;
      }
      /* Now we find the next string of the input string */
      for(i=n-1;i>=0;i--)
      {
          /*if at string 'bin2' index i is equal to 0 */
          if(bin2.at(i)=='0')   
          {
              /* then change it to 0 and break the loop */
              bin2.at(i)='1';   
              break;   
          }
          else
          /* if 'i' equal to 1,change it to 0 */ 
          bin2.at(i)='0';   
      }
      /* if i<0 means all 1's are present in the string 'bin2' */
      if(i<0)   
       /* Hence,the length of next string is greater than the string bin2 by 1. For eg. 15-(1111) and next string is 16-(10000) */
      bin2="1"+bin2;   
      /* if the length of the previous string and next string is equal to each other */
      if(bin1.size()==bin2.size())  
      {
          /* and their length is also equal to the input string, then print previous string and next string */   
          if(bin1.size()==bin.size())   
             cout <<bin1<<" "<<bin2;    
          else
          /* else print '-1' */
             cout <<"-1";   
      }
      else
      /* else print '-1' */
      cout <<"-1";   
      return 0;
}
