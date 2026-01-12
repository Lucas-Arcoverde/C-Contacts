#ifndef CRUD_H
#define CRUD_H

void create_contact(char name[], char phone[], char email[]);
void read_contacts();
void update_contact(int contact_index, char name[], char phone[], char email[]);
//void delete_contacts();

#endif
