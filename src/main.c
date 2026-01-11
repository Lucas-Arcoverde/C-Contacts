#include <stdio.h>
#include <string.h>

#include "contact.h"
#include "crud.h"

int main(int argc, char *argv[])
{
    char * flag = argv[1];
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

