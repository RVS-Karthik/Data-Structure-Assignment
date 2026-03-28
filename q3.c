#include <stdio.h>

int main() {
    int a[100], n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++) {
        int found = 0;

        for(j=i+1; j<n; j++) {
            if(a[j] > a[i]) {
                printf("%d -> %d\n", a[i], a[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
            printf("%d -> -1\n", a[i]);
    }

    return 0;
}