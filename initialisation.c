// Initialisation des tables.
collections_list_t collections_list;
collections_list.last_inserted = 0;

occasions_list_t occasions_list;
occasions_list.last_inserted = 0;

brands_list_t brands_list;
brands_list.last_inserted = 0;

clothes_list_t clothes_list;
clothes_list.last_inserted = 0;

rentals_list_t rentals_list;
rentals_list.last_inserted = 0;

members_list_t members_list;
members_list.last_inserted = 0;

subscriptions_list_t subscriptions_list;
subscriptions_list.last_inserted = 0;


nt found = 0, index = 0, valid_username = -1, valid_password = -1;
while(found == 0 && index < members_list.last_inserted) {
   valid_username = strcpy(members_list.data[index].user_name, argp->user_name);
   valid_password = strcpy(members_list.data[index].password, argp->password);

   if(valid_username == 0 && valid_password == 0)
     found = 1;
   else
     index++;
}

// Si l'utilisateur est trouvé, on retourne son identifiant.
if(found == 1) result = members_list.data[index].id;



int found = 0, index = 0;
while(found == 0 && index < members_list.last_inserted) {
  if(members_list.data[index].id == *argp)
    found = 1;
  else
    index++;
}

if(found == 1) result = members_list.data[index];
