#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *c = (char *)malloc(100 * sizeof(char));
    if (c == NULL)
    {
        perror("malloc");
        return 1;
    }
    scanf("%s", c);
    printf("%s", c);
    free(c);
    c = NULL;
    return 0;
}