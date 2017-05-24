//
// Created by jscherman on 21/05/17.
//
#include "map.h"

int main() {
    aed2::map<int, int> *miMap = new aed2::map<int, int>();
    const std::pair<const int, int> par1 = std::make_pair(3, 5);
    const std::pair<const int, int> par2 = std::make_pair(7, 5);
    const std::pair<const int, int> par3 = std::make_pair(5, 5);
    const std::pair<const int, int> par4 = std::make_pair(13, 5);
    const std::pair<const int, int> par5 = std::make_pair(10, 5);
    const std::pair<const int, int> par6 = std::make_pair(8, 5);
    const std::pair<const int, int> par7 = std::make_pair(1, 5);

    const std::pair<const int, int> par8 = std::make_pair(10, 234);
    miMap->insert(par1);
    miMap->insert(par2);
    miMap->insert(par3);
    miMap->insert(par4);
    miMap->insert(par5);
    miMap->insert(par6);
    miMap->insert(par7);
    miMap->insert_or_assign(par8);
    return 0;
}
