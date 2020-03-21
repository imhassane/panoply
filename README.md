# Réalisation du projet

### structures nécessaires pour l'implémentation
```c
    typedef struct {
        int day;
        int month;
        int year;
    } date_t;
    
    typedef struct {
        int type;
        int credits;
        int price;
    } subscription_t;
    
    typedef struct {
        int active;
        int type;
        int member_id;
        int id;
    } member_subscription_t;
    
    typedef struct  {
        char * name;
        int subscribtion_id;
    } member_t;
    
    typedef struct {
        int id;
        char * name;
    } collection_t;
    
    typedef struct {
        int id;
        char * name;
    } occasion_t;
    
    typedef struct {
        int id;
        char * name;
    } brand_t;
    
    
```

### fonctions

```c
// Ajout d'un membre
void new_member(char * name);

// Choix de l'abonnement du membre.
void set_member_subscription(int member_id, int subscription_type);

/* GESTIONS DES ABONNEMENTS */
// Liste des abonnements
subscription_t[] list_subscriptions();

// Le nombre d'abonnements en cours.
int count_active_subscriptions();

// Mettre à jour un abonnement
void update_subscription(int id, int credits, int price);

/* GESTION DES COLLECTIONS */
// Liste des collections
collection_t[] list_collections();

// vêtemements appartennant à une collection.
clothing_t[] clothings_of_collection(int collection_id);

// Associer un vêtement à une collection.
void set_clothing_to_collection(int collection_id, int clothing_id);

// Retirer un vêtement d'une collection
void remove_clothing_from_collection(int collection_id, int clothing_id);

```
