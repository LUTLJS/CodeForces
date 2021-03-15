#include<bits/stdc++.h>
using namespace std;
/*
I felt so weired that the way it works.
I was having a hard time to concatanate a string using code, and the editorial told me I should handle it in terms of each character of the string.
If you feel hard to express it in code, then you need to another way to deal with it.
You always break it into pieces.
And don't worry about all the dirty and tedious and boring stuff,because computer will do it for you, and it's so damn fast that you couldn't imagine.
So just trust it, put your faith in it that it will always do it for you in a perfect manner with fast speed.
We break the range into pieces, which means we will handle every single character ourself.
We deal with each chars here so that makes it easier to implement.
For those ai that never appear, we just use the prefix sum, and boom, that's it.
The prefix sum here is so useful.Becuase it perfectly fits the range.
Since we need to swap chars in the range, prefix sum bring the border to every element within the range.
This is so awesome. I need to change the way I think in terms of computer's code.
How the hell am I going to reverse the chars in a range?
Oh, you don't need to do that. You just need to swap pairs of chars within the range.
God, that's so genius.
*/
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    string s;int m;cin>>s>>m;
    int a[s.length()/2+1]={};
    for(int i=0;i<m;i++){int x;cin>>x;a[x]++;}
    for(int i=1;i<s.length()/2+1;i++)a[i]+=a[i-1];
    for(int i=0;i<=s.length()/2;i++){
        if(a[i]&1)swap(s[i-1],s[s.length()-i]);
    }
    cout<<s;
    return 0;
}
