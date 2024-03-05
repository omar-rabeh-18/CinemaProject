#ifndef USERS_H
#define USERS_H

#include <QString>

extern QString usernames[100];
extern QString passwords[100];

extern int ages[100];
extern int usersCount;

#endif
#include "Users.h"
QString usernames[100]={"admin","test", "user1","user2"};
QString passwords[100]={"admin","1234","1101","1102"};
int ages[100]={20,21,22,23};
int usersCount=4;

