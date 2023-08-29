#include <stdio.h>

struct employees {
    char name[50];
    int id;
};

int main() {
    struct employees emp1 = {"john", 1001};
    struct employees emp2 = {"Alex", 1002};
    struct employees emp3 = {"sara", 1003};
    struct employees* arr[] = {&emp1, &emp2, &emp3};
    struct employees* (*ptr)[3] = &arr;

    printf("%s\n", (*ptr)[1]->name);
    printf("%d\n", (*ptr)[1]->id);

    return 0;
}
