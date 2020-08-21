#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int count(string s){
    int sum=0;
    for(int i=0;i<50;i++){
        sum+=s.at(i)-'0';
    }
    return sum;
}
 unsigned long long calculate(int n,string s1,string s2){
    unsigned long long l1=stoull(s1.substr(n,10),0,10);
    unsigned long long l2=stoull(s2.substr(n,10),0,10);
    return l1+l2;
}
int main() {
    string s1;
    string s2;
    int n;
    unsigned long long temp=0;
    unsigned long long sum=0;
    for(int i=0;i<50;i++){
        cin>>s1;
        cin>>s2;
        n=40;
        while(n>=0){
            temp=calculate(n,s1,s2)+temp;
            if(n>0){
                temp=temp/pow(10,10);
            }
            n-=10;
        }
        sum+=temp;
    }
    printf("%llu\n",sum);
    return 0;
}
