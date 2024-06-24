#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100], S3[100];
    printf("S1=");
    scanf("%s", S1);
    printf("S2=");
    scanf("%s", S2);
    printf("S3=");
    scanf("%s", S3);
    printf("after minimizing:\n");
    printf("S1=%s\n", S1);
    if (strcmp(S1,S2) == 0) {
       printf("S2=S1\n");
    }
    else
    {
        printf("S2=%s\n",S2);
    }
    if (strcmp(S1, S3) == 0) {
       printf("S3=S1\n");
    }
    else
    {
        printf("S3=%s\n",S3);
    }
    return 0;
}
