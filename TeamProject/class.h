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
	tm rday;
	string pub;
	string writer;
	tm aday;
	string lendname;
	int count;
	int rest;
};
Libraly lib[100];

class Genre {
public:
	string title;
	string genre;
	tm rday;
	string pub;
	string writer;
	tm aday;
	string lendname;
	int count;
	int rest;
};
Genre gen[100];

string selectgenre = "‘I‘ğ‚³‚ê‚½ƒWƒƒƒ“ƒ‹";
int page = 1;
int lnum = 0;
int nummax = 0;