#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int load_file(struct Contact contact_list[])
{
    FILE * file = fopen(DATA_FILE, "r");
    if (file == NULL)
    {
        return 0;
    }

    char line[200];
    int count = 0;

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL && count < 100)
    {
        line[strcspn(line, "\n")] = '\0';

        char name[NAME_LEN];
        char phone[PHONE_LEN];
        char email[EMAIL_LEN];

        sscanf(line, "%[^,],%[^,],%s", name, phone, email);

        strcpy(contact_list[count].name, name);
        strcpy(contact_list[count].phone, phone);
        strcpy(contact_list[count].email, email);

        count++;
    }

    fclose(file);
    return count;
}
