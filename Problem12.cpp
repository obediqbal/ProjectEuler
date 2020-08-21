#include <iostream>
#include <math.h>

int nFaktor(unsigned long f){
    int count=0;
    for(int i=1;i*i<=f;i++){
        if(f%i==0){
            if(i*i==f){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    return count;
}
int main() {
    unsigned long j=0;
    for(unsigned long i=1;i>=0;i++){
        j+=i;
        if(nFaktor(j)>500){
            printf("%lu\n",j);
            break;
        }
    }
    return 0;
}
