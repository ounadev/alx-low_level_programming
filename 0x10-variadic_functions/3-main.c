#include "variadic_functions.h"

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("cis", 'H', NULL, "School");
    print_all(NULL);
    print_all("sifc", "hello", 3.14, 99, 'A');
    return (0);
}

