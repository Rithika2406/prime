include <stdio.h>

int main() {
    int num,i=2;
 
    scanf("%d", &num);
     if (num <= 1) {
        printf("NO");
    } 
    else {
        int is_prime = 1;
        while (i <= num / 2) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
        if (is_prime) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
    
    return 0;
}