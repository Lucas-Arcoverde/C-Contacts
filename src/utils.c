#include <stdio.h>
#include "utils.h"

void display_help_message(char program_name[])
{
    printf("\nC-Contacts\n");
    printf("\nUsage:\n");
    printf("%s <flag> <arguments>\n\n", program_name);
    printf("%s -h  --help                        Show this help message.\n\n", program_name);
    printf("%s -a  --add                         Add a new contact to your list.\n", program_name);
    printf("... <name> <phone> <email>\n\n");
    printf("%s -d  --delete                      Delete a contact from your list.\n", program_name);
    printf("... <contact index>\n\n");
}

