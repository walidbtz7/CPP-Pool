#include "Identify.hpp"

int main(void) {
    srand(time(NULL));
    Base *p = Base::generate();
    Base &r = *p;
    Base::identify(p);
    Base::identify(r);
    delete p;
    return 0;
}