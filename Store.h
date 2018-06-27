#pragma once

#include <string.h>

using namespace std;

class Store
{
private:
	int m_iID;
	char m_sName[32];
	char m_sCity[32];
	char m_sState[32];
	int m_sZipCode;
	int *m_pNext;

public:

	//Constructor
	Store();

	//Destructor
	~Store();

	//Store ID
	void setStoreID(int x);
	int getStoreID();

	//Store Name
	void setName(char* name);
	char getName();

	//Store City
	void setCity(char* city);
	char getCity();

	//Store State
	void setState(char* state);
	char getState();

	//Store Zip Code
	char setZip_Code(char* zip_code);
	char getZip_Code();

	int setNext(int next);
};
