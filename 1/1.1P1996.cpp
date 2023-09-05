//
// Created by chenyuedong on 2023/9/5.
//
#include <cstdio>
#include <list>

using namespace std;

int main() {
    int m, n;
    scanf("%d %d", &n, &m);
    list<int> ls;
    for (int i = 1; i <= n; ++i)
        ls.push_back(i);
    auto iterator = ls.begin();
    while (!ls.empty()) {
        for (int i = 1; i < m; ++i) {
            iterator++;
            if (iterator == ls.end())
                iterator = ls.begin();
        }
        printf("%d ", *iterator);
        iterator++;
        const _List_iterator<int>::_Self next = iterator;
        iterator--;
        ls.erase(iterator);
        iterator = next;
        if (iterator == ls.end())
            iterator = ls.begin();
    }
    return 0;
}
