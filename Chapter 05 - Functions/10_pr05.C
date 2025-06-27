#include <stdio.h>

int main()
{   int a = 4;
    printf("%d %d %d\n", a, ++a, a++);
    return 0;
}
// Should be 4 5 5 right? but no its 6 6 4!
// Why 6 6 4, bcoz the compiler may calculate from left to right or vice versa
// in this case, the compiler prefers to calculate from right to left
// so the output is 6 6 4