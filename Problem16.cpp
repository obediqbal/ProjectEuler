#include <bits/stdc++.h>
using namespace std;
int length;
int lengthtemp;
void add(char a,string &s,int index){
    s[index]=s[index]+a-'0';
    if(s[index]>'9'){
        s[index]=s[index]-10;
        if(index==0){
            s.insert(0,"1");
            length++;
        }else{
            add('1',s,index-1);
        }
    }
}
int main() {
    string s="1";
    string temp;
    int pow;
    cin>>pow;
    for(int i=0;i<pow;i++){
        temp=s;
        lengthtemp=temp.length();
        length=s.length();
        for(int j=0;j<lengthtemp;j++) {
            add(temp[lengthtemp - j-1], s, length - j-1);
        }
    }
    int count=0;
    unsigned long sum=0;
    for(int i=0;i<length;i++){
        count++;
        sum=sum+s[i]-'0';
    }
    cout<<s<<endl<<count<<endl<<sum<<endl;
    return 0;
}
