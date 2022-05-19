
#ifndef HashMap_h
#define HashMap_h


typedef struct HashMap HashMap;

typedef struct Buckets {
     char * key;
     void * value;
} Buckets;

HashMap * createMap(long capacity);

void insertMap(HashMap * table, char * key, void * value);

void eraseMap(HashMap * table, char * key);

Buckets * searchMap(HashMap * table, char * key);

Buckets * firstMap(HashMap * table);

Buckets * nextMap(HashMap * table);

void enlarge(HashMap * map);

#endif /* HashMap_h */
