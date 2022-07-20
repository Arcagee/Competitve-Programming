#include <stdio.h>
int main() {
    for(int i=2;i<=6;i++){
        for(int j=2;j<=i;j++) {
            printf("%d ",j);
            printf("hello");
        }
        
        printf("\n");
    }
}
