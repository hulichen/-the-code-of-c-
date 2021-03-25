#ifndef __CONTACT_H__
#define __CONTACT_H__

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <windows.h>
#pragma warning(disable:4996)

#define SIZE 128
#define INIT  5      //初始通讯录大小
#define INC_SIZE 2   //每次扩容的大小

typedef struct persons {
	char name[SIZE / 16];
	char telphone[SIZE / 8];
	int age;
	char sex;
	char adress[SIZE / 4];
}person_t;

typedef struct contact {
	int cap;
	int size;
	person_t persons[0];
}contact_t;

void InitContact(contact_t** ct);
void AddPersonToContact(contact_t** ct);
void ShowContact(contact_t* ct,int pos);
void SearchContact(contact_t* ct);
void DelPersonContact(contact_t*  ct);
void ClearContact(contact_t*  ct);
void ModContact(contact_t*  ct);
void SortContact(contact_t*  ct);

#endif

