#include <stdio.h>
#include <string.h>
#include "contact.h"
#include "crud.h"
#include "data.h"

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
        printf("Your contact list is full.\n");
    }

    save_file(contact_list, contact_counter);
}

void read_contacts()
{
    printf("You do not have any contact.\n");

    for (int i = 0; i < contact_counter; i++)
    {
        struct Contact contact = contact_list[i];
        printf("[%d] Name: %s\n", i, contact.name);
        printf("    Phone: %s\n", contact.phone);
        printf("    Email: %s\n", contact.email);
        printf("-------------------\n");
    }
}

void update_contact(int contact_index, char name[], char phone[], char email[])
{
    if (contact_index >= contact_counter || contact_index < 0)
    {
        printf("Invalid index.\n");
    }
    else
    {
        strcpy(contact_list[contact_index].name, name);
        strcpy(contact_list[contact_index].phone, phone);
        strcpy(contact_list[contact_index].email, email);
    }

    save_file(contact_list, contact_counter);
}

void delete_contact(int contact_index)
{
    if (contact_index >= contact_counter || contact_index < 0)
    {
        printf("Invalid index.\n");
    }
    else
    {
        for (int i = contact_index; i < contact_counter; i++)
        {
            strcpy(contact_list[i].name, contact_list[i+1].name);
            strcpy(contact_list[i].phone, contact_list[i+1].phone);
            strcpy(contact_list[i].email, contact_list[i+1].email);
        }
        contact_counter--;
    }

    save_file(contact_list, contact_counter);
}

