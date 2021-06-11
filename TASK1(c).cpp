#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,r,x,y,i;
        cin >>n >>r >>x >>y;   /*Take input of the total number of days,initial amount of Rs. ,increase or decrease amount after each successful or unsuccessful workshop */ 
    int c[n],s[n];
    int intlAmt=r;
    for(i=0;i<n;i++)
        cin >>c[i];   /* Take input whether the contest held or not at respective day, as 0 and 1 */
    for(i=0;i<n;i++)
        cin >>s[i];   /* Take input whether the team eats pizza or not at respective day,as 0 and 1 */
    for(i=0;i<n;i++)
    {
        if(c[i]!=0)   /* First of all,if the contest held */
        {
            if(s[i]!=0)   /* if the team eats pizza then the workshop obtain succeess */
                r+=x;    /* increase the initial amount by 'x' for workshop success */
            else         /* if the team doesn't eat pizza then workshop become unsuccessful */
                r-=y;    /* decrease the initial amount by 'y' for unsuccess */
        }
    }
    if(r>intlAmt)   /* if the final amount after all the days is greater than initial amount then give output as 'promoted' */
        cout <<"promoted" <<endl;
    else 
    {
        if(r<intlAmt)   /* if the final amount after all the days is lesser than initial amount then give output as 'demoted' */
            cout<<"demoted"<<endl;
        else       /* if the final amount after all the days is equal to the initial amount then give output as 'no change' */
            cout <<"no change"<<endl;
    }
    return 0;
}

