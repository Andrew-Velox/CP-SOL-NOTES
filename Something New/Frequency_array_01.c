// Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-04/challenges/count-me-4/
/* 
input: thefoxisbrave
output:
a - 1
b - 1
e - 2
f - 1
h - 1
i - 1
o - 1
r - 1
s - 1
t - 1
v - 1
x - 1 */

#include <stdio.h>
#include <string.h>
int main(){
    char in;
    int c[26]={0};
 
    while(scanf("%c",&in)!=EOF) c[in - 97]++;
 
    for(int x=0;x<26;x++){
       if(c[x]!=0){
        printf("%c - %d\n",x+97,c[x]);
       }
    }
    return 0;
}
