#include <stdio.h>

int main() {
    int quotients[] = {1, 1, 1, 2, 2, 1};
    int num_quotients = 6;
    int c = 70;

    int p_prev = 1;
    int p_curr = 0;

    for (int i = num_quotients - 1; i >= 0; i--) {
        int p_next = (p_prev * quotients[i]) + p_curr;
        p_curr = p_prev;
        p_prev = p_next;
    }
    
    int final_b = p_curr * c;
    int final_a = p_prev * c;

    printf("The two numbers are: %d and %d\n", final_b, final_a);

    return 0;
}