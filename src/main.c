#include <stdio.h>
#include <string.h>

#include "contact.h"
#include "crud.h"
#include "utils.h"

int main(int argc, char *argv[])
{
    char * flag = argv[1];

    if (argc == 1 || strcmp(flag, "--help") == 0 || strcmp(flag, "-h") == 0)
    {
        display_help_message(argv[0]);
        return 0;
    }

    else if (strcmp(flag, "--add") == 0 || strcmp(flag, "-a") == 0)
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

    else if (strcmp(flag, "--view") == 0 || strcmp(flag, "-v") == 0)
    {
        read_contacts();
    }

    else if (strcmp(flag, "--update") == 0 || strcmp(flag, "-u") == 0)
    {
        if (argc <= 2)
        {
            return 1;
        }

        char * contact_index_input = argv[2];
        int contact_index = atoi(contact_index_input);

        char * name = argv[3];
        char * phone = argv[4];
        char * email = argv[5];

        update_contact(contact_index, name, phone, email);

    }

    return 0;
}

