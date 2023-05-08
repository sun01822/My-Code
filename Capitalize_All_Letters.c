#include <stdio.h>
#include <string.h>

int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    int i, length;

    printf("%s\n", country);

    length = 10;

    for(int i=0; i<length; i++)
    {
        if(country[i] >= 97 && country[i] <= 122)
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }

    printf("\n%s\n", country);

    return 0;
}
