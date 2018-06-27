
#include "Store.h"

void Store::setStoreID(int x) {
	m_iID = x;
};

int Store::getStoreID() {
	return m_iID;
};

void Store::setName(char* name) {
	strcpy_s(m_sName, name);
};

char Store::getName() {
	return m_sName[32];
};