#include <stdlib.h>
#include <assert.h>

void function() {

    // too long
    assert(a == 1 && too_many_lines ||
           b == 2   ||
           c == 3   ||
           d == 4   ||
           e == 5   ||
           f == 6   ||
           g == 7   ||
           h == 8   ||
           i == 9   ||
           j == 10  ||
           k == 11  ||
           l == 12  ||
           m == 13  ||
           n == 14  ||
           o == 15  ||
           p == 16);

    assert(
            good==1
          );

    // multiple asserts per line

    assert(no_change1); assert(no_change2);
    assert(changed==1); assert(changed==2);
    assert(no_change3); assert(changed==3);
    assert(changed==4); assert(no_change4);

    assert(no_change5);
    assert(no_change6); 
    assert(changed==5); 

    assert(to_add1);assert(changed==6); 
    assert(to_add2);assert(no_change7); 
    assert(changed==7); assert(to_add2);
    assert(no_change8); assert(to_add3);

    assert(a); assert(b); assert(c); assert(d); assert(e); assert(f); assert(g);


}

