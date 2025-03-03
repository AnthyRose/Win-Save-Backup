#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    FILE* gameList = fopen("gameList.csv", "r");
    if (gameList == NULL) {
        perror("Error Opening the File.");
        return 1;
    }

    char line[512];
    while (fgets(line, sizeof(line), gameList)) {
        printf("%s", line);
    }

    scanf("%s"); // Just to look at output easy.
    fclose(gameList);
    return 0;
}