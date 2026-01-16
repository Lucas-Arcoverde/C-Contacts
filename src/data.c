#include <stdio.h>
#include <stdlib.h>

#include "contact.h"
#include "data.h"

int save_file(struct Contact contact_list[], int quant)
{
    FILE * file = fopen(DATA_FILE,"w");
    if (file == NULL)
    {
        return 0;
    }

    fprintf(file, "Name,Phone,Email\n");

    for (int i = 0; i < quant; i++)
    {
        fprintf(file, "%s,%s,%s\n",
                contact_list[i].name,
                contact_list[i].phone,
                contact_list[i].email
        );
    }

    fclose(file);
    return 1;
}