#include <stdio.h>
int main(void){
    for (int a=1; a<=30; a++){
        for (int b=a; b<=30; b++){
            for (int c=1; c<=30; c++){
                if (c*c == a*a + b*b)
                    printf("THE PYTHAGOREAN TRIPLETS ARE: a=%d, b=%d, c=%d\n", a, b, c);
            
        }
     }
    }
    return 0;
}