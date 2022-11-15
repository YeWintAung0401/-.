#include <iostream>

int main() {
    int i = 0;
    int w = 100;
    while(i<w){
        i=i+2;
        printf("%d Hello World\n",i);
        if (i==30){
            printf("I=30 we found this number");
            i=100;
        } else if(i==15){
            printf("I=15\n");
            i=i-14;
        }
    }

    return 0;
}
