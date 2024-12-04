#include <stdio.h>
#include <string.h>
#include <ctype.h>

void validateUsername(const char* username) {
    int len = strlen(username);

    if (len < 4) {
        printf("Too short: %d\n", len);
        return;
    }

    for (int i = 0; i < len; i++) {

        if (!isalpha(username[i])) {
            printf("Invalid\n");
            return;
        }
    }

    printf("Valid\n");
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char username[101];
        scanf("%s", username);
        validateUsername(username);
    }
    return 0;
}

