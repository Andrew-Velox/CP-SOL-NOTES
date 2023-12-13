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



// CPP

/* #include <bits/stdc++.h>
using namespace std;

int main(){
    char in;
    int c[26]={0};
 
    while(cin >> in) c[in - 97]++;
 
    for(int x=0;x<26;x++){
       if(c[x]!=0){
        printf("%c - %d\n",x+97,c[x]);
       }
    }
    return 0;
} */


// string serial wise
/* 
h - 0
e - 0
l - 0
l - 1
o - 1
w - 0
o - 0
r - 1
l - 0
d - 0*/

/* #include <stdio.h>

int main(){
    char s[100];
    scanf("%s", s);
    // gets(s);
    
    int cnt=0;
    for(int x=0; s[x]!='\0'; x++) cnt++;

    int freq[26]={0};
    for(int x=0; x<cnt; x++){
        freq[s[x]-'a']++;
    }

    for(int x=0; x<cnt; x++){
        // if(freq[x]!=0){
        //     printf("%c - %d\n",x+'a',freq[x]);
        // }

        printf("%c - %d\n",s[x]+'a'-97,freq[x]);
    }
    
    return 0;
} */


