#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];  
    char surname[20];  
    int height; 
};

int main() {
    int N, H;

    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("n/a");
        return 1;
    }

    struct Person people[N];

    for (int i = 0; i < N; i++) {
        if (scanf("%20s %20s %d", people[i].name, people[i].surname, &people[i].height) != 3 || people[i].height <= 0) {
            printf("n/a");
            return 1;
        }
    }

    if (scanf("%d", &H) != 1 || H <= 0) {
        printf("n/a");
        return 1;
    }

    int found = 0;
    for (int i = 0; i < N; i++) {
        if (people[i].height >= H) {
            if (found > 0) {
                printf(", ");
            }
            printf("%s %s", people[i].name, people[i].surname);
            found++;
        }
    }

    if (found == 0) {
        printf("Nothing");
    }

    return 0;
}
