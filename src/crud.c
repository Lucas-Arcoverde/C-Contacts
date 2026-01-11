#include <stdio.h>
#include <string.h>
#include "contact.h"
#include "crud.h"

#define MAX_CONTACTS 100

int contact_counter = 0;
struct Contact contact_list[MAX_CONTACTS];

void create_contact(char name[], char phone[], char email[])
{
    if (contact_counter < MAX_CONTACTS)
    {
        strcpy(contact_list[contact_counter].name, name);
        strcpy(contact_list[contact_counter].phone, phone);
        strcpy(contact_list[contact_counter].email, email);

        contact_counter++;
    }
    else
    {
        printf("Your contact list is full.");
    }
}

