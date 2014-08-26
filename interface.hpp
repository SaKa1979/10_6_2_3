/*
 * interface.hpp
 *
 *  Created on: 24 Aug 2014
 *      Author: sander
 */


#define NAAM_LEN 20
#define CIJFERLIJST_LEN 3

class C_persoon{

public:
	char naam[NAAM_LEN];
	int cijfer;

public:
	void lees_persoon();
	void show_persoon();
};


