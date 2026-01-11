#include <stdio.h>
#include <string.h>

#include "contact.h"
#include "crud.h"
// #include "utils.h"

int main(int argc, char *argv[])
{
    char * flag = argv[1];

    if (argc == 1 || strcmp(flag, "--help") == 0 || strcmp(flag, "-h") == 0)
    {
        // display_help_message();
        return 0;
    }

    if (strcmp(flag, "--add") == 0 || strcmp(flag, "-a") == 0)
    {
        if (argc <= 2)
        {
            return 1;
        }

        char * name = argv[2];
        char * phone = argv[3];
        char * email = argv[4];
        create_contact(name, phone, email);
    }

    return 0;
}

