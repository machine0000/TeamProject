#pragma once
#include <iostream>

using namespace std;

class User {
public:
	string mail;
	string pass;
	string genre;
	string lendname[3];
	tm rday[3];
	int books;
};
User user[100];

class Libraly {
public:
	string title;
	string genre;
	string pub;
	string writer;
	tm aday;
	string lendname;
	int count;
	int rest;
};
Libraly lib[100];
Libraly gen[100];

string selectgenre = "ƒWƒƒƒ“ƒ‹‚ğ‘I‘ğ";
int page = 1;
int lnum = 0;
int nummax = 0;
int usernum = 0;
int usermax = 0;