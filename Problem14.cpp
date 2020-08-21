#include <iostream>
using namespace std;

void even(unsigned long &i){
    i/=2;
}
void odd(unsigned long &i){
    i=3*i+1;
}

int main() {
    unsigned long max=0;
    unsigned long temp;
    unsigned long count;
    unsigned long i;
    unsigned long j;
    for(i=2;i<1000dig0000;i++){
        count=1;
        temp=i;
        while(temp!=1){
            if(temp%2==0)even(temp);
            else odd(temp);
            count++;
        }
        if(max<count) {j=i; max = count; }
    }
    printf("%lu %lu",j,max);
    return 0;
}
