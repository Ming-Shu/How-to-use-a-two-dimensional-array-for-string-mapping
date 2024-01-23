#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* SS[][2] = { {"aa", "AA"}, {"bb", "BB"}, {"cc", "CC"} };

char* getBigString(char* s) {
    int n = 0;
    char* p;
    for (n = 0; n < sizeof(SS) / sizeof(SS[0]); n++) {
        p = SS[n][0];
        if (strncmp(p, s, strlen(p)) == 0)
            return SS[n][1];
    }
    return NULL; 
}

int main() {
    char* result = getBigString("bb");
    if (result != NULL) {
        printf("Result: %s\n", result);
    } else {
        printf("No match found.\n");
    }

    return 0;
}
