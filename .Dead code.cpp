#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];
    int i, j, flag1 = 0, flag2 = 0;

    printf("S1=");
    scanf("%s", s1);
    printf("S2=");
    scanf("%s", s2);
    printf("S3=");
    scanf("%s", s3);

    for (i = 0, j = 0; i < strlen(s1) && j < strlen(s2); i++, j++) {
        if (s1[i] == s2[j]) {
            flag1 = 1;
            break;
        }
    }

    for (i = 0, j = 0; i < strlen(s1) && j < strlen(s3); i++, j++) {
        if (s1[i] == s3[j]) {
            flag2 = 1;
            break;
        }
    }

    printf("after eliminating dead code:\n");
    if (flag1 == 1 || flag2 == 1) {
        printf("S1=%s\n", s1);
        printf("S2=%s\n", s2);
        printf("S3=%s\n", s3);
    } else {
        printf("S2=%s\n", s2);
        printf("S3=%s\n", s3);
    }

    return 0;
}
