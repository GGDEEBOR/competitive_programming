/*
 HORROR DASH
 Input
The first line of input contains a single integer T (T ≤ 50), the number of test cases. This line is
followed by T input cases. Each input case is on a single line of space-separated integers. The first
of these integers is N, the number of students acting as scary creatures. The rest of the line has
N more integers, c0, c1, . . . , cN−1, each representing the speed of a creature in meters per second
(1 ≤ ci ≤ 10000 for each i). You can assume that they are always running in the same direction on the
track.

Output
There should be a single line of output for each test case, formatted as ‘Case c: s’. Here, c represents
the serial number of the input case, starting with 1, while s represents the required speed of the clown,
in meters per second.


*/

#include<stdio.h>
#include <iostream>
using namespace std;
 
void solve(int t, int n, int velocidad, int value){
    int i, j;
    while(scanf("%d",&t)==1) {
        for(i = 1; i <= t ; i++) {
            value=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++) {
                scanf("%d",&velocidad);
                if(velocidad > value) value = velocidad;
            }
            printf("Case %d: %d\n", i, value);
        }
    }    
} 


int main() {
    int t, n, speed, value;
    solve(t, n, speed, value);
    return 0;
}
