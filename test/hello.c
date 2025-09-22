#include<stdio.h>
int fb(int num){
    if(num==1){
        return 1;
    }
    if(num==2){
        return 1;
    }
    return fb(num-1)+fb(num-2);
}

int main(){
    int try_a,_tryb,f1nal_c;
    try_a=10;
    while(_tryb<5){
        printf("%d\n",_tryb);
        _tryb++;
    }
    f1nal_c=fb(try_a);
    printf("hello world and the %dth value is %d\n",try_a,f1nal_c);
    return 0;
}