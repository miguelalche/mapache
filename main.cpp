//
// Created by jscherman on 21/05/17.
//
#include "map.h"

int main() {
    aed2::map<int, int> *miMap = new aed2::map<int, int>();
    const std::pair<const int, int> par1 = std::make_pair(5, 5);
    const std::pair<const int, int> par2 = std::make_pair(6, 5);
    miMap->insert(par1);
    miMap->insert(par2);
    return 0;
}
