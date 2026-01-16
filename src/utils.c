#include <stdio.h>
#include "utils.h"

void display_help_message(char program_name[])
{
    printf("\nC-Contacts Manager\n");
    printf("A simple contact management system\n\n");
    
    printf("Usage: %s [COMMAND] [ARGUMENTS]\n\n", program_name);
    
    printf("Commands:\n");
    printf("  -h, --help                    Display this help message\n");
    printf("  -v, --view                    View all contacts\n");
    printf("  -a, --add <name> <phone> <email>\n");
    printf("                                Add a new contact\n");
    printf("  -u, --update <id> <name> <phone> <email>\n");
    printf("                                Update an existing contact\n");
    printf("  -r, --remove <id>            Remove a contact\n");
    
    printf("\nExamples:\n");
    printf("  %s --view\n", program_name);
    printf("  %s --add \"John\" \"123456\" \"john@mail.com\"\n", program_name);
    printf("  %s --update 0 \"John Doe\" \"5551234\" \"new@mail.com\"\n", program_name);
    printf("  %s --remove 2\n\n", program_name);
    
    printf("Note: Use quotes for values containing spaces\n");
}