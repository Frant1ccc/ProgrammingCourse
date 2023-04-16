#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libs/structures/vector/vector.h"

int main() {
    Vector v = createVector(5);
    reserve(&v, 7);

    return 0;
}