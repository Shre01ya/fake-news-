#include <stdio.h>
#include <string.h>

int main() {
    char news[500];
    printf("Enter the news text: ");
    fgets(news, sizeof(news), stdin);

    if (strstr(news, "miracle") || strstr(news, "shocking") || strstr(news, "secret")) {
        printf("Warning: Potential fake news detected.\n");
    } else {
        printf("This news appears legitimate.\n");
    }

    return 0;
}
