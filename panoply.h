/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PANOPLY_H_RPCGEN
#define _PANOPLY_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


enum MEMBER_TYPE {
	ADMIN = 0,
	VISITOR = 1,
};
typedef enum MEMBER_TYPE MEMBER_TYPE;


enum RENTAL_STATE {
	RENTED = 0,
	BACK = 1,
};
typedef enum RENTAL_STATE RENTAL_STATE;


struct date_t {
	int day;
	int month;
	int year;
};
typedef struct date_t date_t;

struct subscription_t {
	int type;
	int credits;
	int price;
};
typedef struct subscription_t subscription_t;

struct member_activity_t {
	int total_credits;
	int current_usage;
	date_t start_date;
	date_t end_date;
};
typedef struct member_activity_t member_activity_t;

struct member_subscription_t {
	int is_valid;
	subscription_t *subscription;
	member_activity_t first_month;
	member_activity_t second_month;
	member_activity_t third_month;
};
typedef struct member_subscription_t member_subscription_t;

struct member_t {
	int id;
	char first_name[10];
	char last_name[50];
	char user_name[10];
	char password[32];
	char address[250];
	MEMBER_TYPE type;
	member_subscription_t subscription;
};
typedef struct member_t member_t;

struct collection_t {
	int id;
	char name[50];
};
typedef struct collection_t collection_t;

struct occasion_t {
	int id;
	char name[50];
};
typedef struct occasion_t occasion_t;

struct brand_t {
	int id;
	char name[50];
};
typedef struct brand_t brand_t;

struct cloth_t {
	int id;
	char name[50];
	int price;
	int credits;
	int stock;
	collection_t *collection;
	occasion_t *occasion;
	brand_t *brand;
};
typedef struct cloth_t cloth_t;

struct rental_t {
	cloth_t *cloth;
	RENTAL_STATE rental_state;
};
typedef struct rental_t rental_t;

struct collections_list_t {
	collection_t data[100];
	int last_inserted;
};
typedef struct collections_list_t collections_list_t;

struct occasions_list_t {
	occasion_t data[100];
	int last_inserted;
};
typedef struct occasions_list_t occasions_list_t;

struct brands_list_t {
	brand_t data[100];
	int last_inserted;
};
typedef struct brands_list_t brands_list_t;

struct clothes_list_t {
	cloth_t data[100];
	int last_inserted;
};
typedef struct clothes_list_t clothes_list_t;

struct rentals_list_t {
	rental_t data[100];
	int last_inserted;
};
typedef struct rentals_list_t rentals_list_t;

struct members_list_t {
	member_t data[100];
	int last_inserted;
};
typedef struct members_list_t members_list_t;

struct subscriptions_list_t {
	subscription_t data[10];
	int last_inserted;
};
typedef struct subscriptions_list_t subscriptions_list_t;

struct new_member_params {
	char first_name[10];
	char last_name[50];
	char user_name[10];
	char password[32];
	char address[250];
};
typedef struct new_member_params new_member_params;

struct login_member_params {
	char user_name[10];
	char password[32];
};
typedef struct login_member_params login_member_params;

struct new_collection_params {
	char name[50];
};
typedef struct new_collection_params new_collection_params;

struct new_clothing_params {
	char name[50];
};
typedef struct new_clothing_params new_clothing_params;

struct set_member_subscription_params {
	int member_id;
	int subscription_id;
};
typedef struct set_member_subscription_params set_member_subscription_params;

struct set_clothing_collection_params {
	int clothing_id;
	int collection_id;
};
typedef struct set_clothing_collection_params set_clothing_collection_params;

#define PANOPLYPROG 0x12345678
#define PANOPLYVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define REGISTER 1
extern  int * register_1(new_member_params *, CLIENT *);
extern  int * register_1_svc(new_member_params *, struct svc_req *);
#define LOGIN 2
extern  int * login_1(login_member_params *, CLIENT *);
extern  int * login_1_svc(login_member_params *, struct svc_req *);
#define TOTAL_MEMBERS 3
extern  int * total_members_1(void *, CLIENT *);
extern  int * total_members_1_svc(void *, struct svc_req *);
#define SHOW_MEMBER 4
extern  member_t * show_member_1(int *, CLIENT *);
extern  member_t * show_member_1_svc(int *, struct svc_req *);
#define NEW_SUBSCRIPTION 5
extern  int * new_subscription_1(subscription_t *, CLIENT *);
extern  int * new_subscription_1_svc(subscription_t *, struct svc_req *);
#define TOTAL_SUBSCRIPTIONS 6
extern  int * total_subscriptions_1(void *, CLIENT *);
extern  int * total_subscriptions_1_svc(void *, struct svc_req *);
#define SHOW_SUBSCRIPTION 7
extern  subscription_t * show_subscription_1(int *, CLIENT *);
extern  subscription_t * show_subscription_1_svc(int *, struct svc_req *);
#define UPDATE_SUBSCRIPTION 8
extern  int * update_subscription_1(subscription_t *, CLIENT *);
extern  int * update_subscription_1_svc(subscription_t *, struct svc_req *);
#define SET_MEMBER_SUBSCRIPTION 9
extern  int * set_member_subscription_1(set_member_subscription_params *, CLIENT *);
extern  int * set_member_subscription_1_svc(set_member_subscription_params *, struct svc_req *);
#define NEW_COLLECTION 10
extern  int * new_collection_1(new_collection_params *, CLIENT *);
extern  int * new_collection_1_svc(new_collection_params *, struct svc_req *);
#define TOTAL_COLLECTIONS 11
extern  int * total_collections_1(void *, CLIENT *);
extern  int * total_collections_1_svc(void *, struct svc_req *);
#define SHOW_COLLECTION 12
extern  collection_t * show_collection_1(int *, CLIENT *);
extern  collection_t * show_collection_1_svc(int *, struct svc_req *);
#define SET_CLOTHING_COLLECTON 13
extern  int * set_clothing_collecton_1(set_clothing_collection_params *, CLIENT *);
extern  int * set_clothing_collecton_1_svc(set_clothing_collection_params *, struct svc_req *);
#define NEW_CLOTHING 14
extern  int * new_clothing_1(new_clothing_params *, CLIENT *);
extern  int * new_clothing_1_svc(new_clothing_params *, struct svc_req *);
#define TOTAL_CLOTHINGS 15
extern  int * total_clothings_1(void *, CLIENT *);
extern  int * total_clothings_1_svc(void *, struct svc_req *);
#define SHOW_CLOTHING 16
extern  cloth_t * show_clothing_1(int *, CLIENT *);
extern  cloth_t * show_clothing_1_svc(int *, struct svc_req *);
#define RENT_CLOTHING 17
extern  int * rent_clothing_1(int *, CLIENT *);
extern  int * rent_clothing_1_svc(int *, struct svc_req *);
#define TOTAL_RENTS 18
extern  int * total_rents_1(void *, CLIENT *);
extern  int * total_rents_1_svc(void *, struct svc_req *);
#define SHOW_RENTAL 19
extern  rental_t * show_rental_1(int *, CLIENT *);
extern  rental_t * show_rental_1_svc(int *, struct svc_req *);
#define LIST_CLOTHES 20
extern  clothes_list_t * list_clothes_1(void *, CLIENT *);
extern  clothes_list_t * list_clothes_1_svc(void *, struct svc_req *);
extern int panoplyprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define REGISTER 1
extern  int * register_1();
extern  int * register_1_svc();
#define LOGIN 2
extern  int * login_1();
extern  int * login_1_svc();
#define TOTAL_MEMBERS 3
extern  int * total_members_1();
extern  int * total_members_1_svc();
#define SHOW_MEMBER 4
extern  member_t * show_member_1();
extern  member_t * show_member_1_svc();
#define NEW_SUBSCRIPTION 5
extern  int * new_subscription_1();
extern  int * new_subscription_1_svc();
#define TOTAL_SUBSCRIPTIONS 6
extern  int * total_subscriptions_1();
extern  int * total_subscriptions_1_svc();
#define SHOW_SUBSCRIPTION 7
extern  subscription_t * show_subscription_1();
extern  subscription_t * show_subscription_1_svc();
#define UPDATE_SUBSCRIPTION 8
extern  int * update_subscription_1();
extern  int * update_subscription_1_svc();
#define SET_MEMBER_SUBSCRIPTION 9
extern  int * set_member_subscription_1();
extern  int * set_member_subscription_1_svc();
#define NEW_COLLECTION 10
extern  int * new_collection_1();
extern  int * new_collection_1_svc();
#define TOTAL_COLLECTIONS 11
extern  int * total_collections_1();
extern  int * total_collections_1_svc();
#define SHOW_COLLECTION 12
extern  collection_t * show_collection_1();
extern  collection_t * show_collection_1_svc();
#define SET_CLOTHING_COLLECTON 13
extern  int * set_clothing_collecton_1();
extern  int * set_clothing_collecton_1_svc();
#define NEW_CLOTHING 14
extern  int * new_clothing_1();
extern  int * new_clothing_1_svc();
#define TOTAL_CLOTHINGS 15
extern  int * total_clothings_1();
extern  int * total_clothings_1_svc();
#define SHOW_CLOTHING 16
extern  cloth_t * show_clothing_1();
extern  cloth_t * show_clothing_1_svc();
#define RENT_CLOTHING 17
extern  int * rent_clothing_1();
extern  int * rent_clothing_1_svc();
#define TOTAL_RENTS 18
extern  int * total_rents_1();
extern  int * total_rents_1_svc();
#define SHOW_RENTAL 19
extern  rental_t * show_rental_1();
extern  rental_t * show_rental_1_svc();
#define LIST_CLOTHES 20
extern  clothes_list_t * list_clothes_1();
extern  clothes_list_t * list_clothes_1_svc();
extern int panoplyprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_MEMBER_TYPE (XDR *, MEMBER_TYPE*);
extern  bool_t xdr_MEMBER_TYPE (XDR *, MEMBER_TYPE*);
extern  bool_t xdr_RENTAL_STATE (XDR *, RENTAL_STATE*);
extern  bool_t xdr_RENTAL_STATE (XDR *, RENTAL_STATE*);
extern  bool_t xdr_date_t (XDR *, date_t*);
extern  bool_t xdr_subscription_t (XDR *, subscription_t*);
extern  bool_t xdr_member_activity_t (XDR *, member_activity_t*);
extern  bool_t xdr_member_subscription_t (XDR *, member_subscription_t*);
extern  bool_t xdr_member_t (XDR *, member_t*);
extern  bool_t xdr_collection_t (XDR *, collection_t*);
extern  bool_t xdr_occasion_t (XDR *, occasion_t*);
extern  bool_t xdr_brand_t (XDR *, brand_t*);
extern  bool_t xdr_cloth_t (XDR *, cloth_t*);
extern  bool_t xdr_rental_t (XDR *, rental_t*);
extern  bool_t xdr_collections_list_t (XDR *, collections_list_t*);
extern  bool_t xdr_occasions_list_t (XDR *, occasions_list_t*);
extern  bool_t xdr_brands_list_t (XDR *, brands_list_t*);
extern  bool_t xdr_clothes_list_t (XDR *, clothes_list_t*);
extern  bool_t xdr_rentals_list_t (XDR *, rentals_list_t*);
extern  bool_t xdr_members_list_t (XDR *, members_list_t*);
extern  bool_t xdr_subscriptions_list_t (XDR *, subscriptions_list_t*);
extern  bool_t xdr_new_member_params (XDR *, new_member_params*);
extern  bool_t xdr_login_member_params (XDR *, login_member_params*);
extern  bool_t xdr_new_collection_params (XDR *, new_collection_params*);
extern  bool_t xdr_new_clothing_params (XDR *, new_clothing_params*);
extern  bool_t xdr_set_member_subscription_params (XDR *, set_member_subscription_params*);
extern  bool_t xdr_set_clothing_collection_params (XDR *, set_clothing_collection_params*);

#else /* K&R C */
extern bool_t xdr_MEMBER_TYPE ();
extern bool_t xdr_MEMBER_TYPE ();
extern bool_t xdr_RENTAL_STATE ();
extern bool_t xdr_RENTAL_STATE ();
extern bool_t xdr_date_t ();
extern bool_t xdr_subscription_t ();
extern bool_t xdr_member_activity_t ();
extern bool_t xdr_member_subscription_t ();
extern bool_t xdr_member_t ();
extern bool_t xdr_collection_t ();
extern bool_t xdr_occasion_t ();
extern bool_t xdr_brand_t ();
extern bool_t xdr_cloth_t ();
extern bool_t xdr_rental_t ();
extern bool_t xdr_collections_list_t ();
extern bool_t xdr_occasions_list_t ();
extern bool_t xdr_brands_list_t ();
extern bool_t xdr_clothes_list_t ();
extern bool_t xdr_rentals_list_t ();
extern bool_t xdr_members_list_t ();
extern bool_t xdr_subscriptions_list_t ();
extern bool_t xdr_new_member_params ();
extern bool_t xdr_login_member_params ();
extern bool_t xdr_new_collection_params ();
extern bool_t xdr_new_clothing_params ();
extern bool_t xdr_set_member_subscription_params ();
extern bool_t xdr_set_clothing_collection_params ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PANOPLY_H_RPCGEN */
