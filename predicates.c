/*
 * Tests for different types of predicates
 */

#include <assert.h>


void diverse() {
    int variable = 0;

    assert(0); // number
    assert(variable); 
    assert((((page->flags & PG_type_mask) == PGT_writeable_page) &&
                (page_type_count(page) != 0)) ||
            (((page->flags & PG_type_mask) == PGT_none) &&
             (page_type_count(page) == 0))); // complex (from Xen)
}

void typename_problems() {
    // pycparser can only accept certain builtins involving typenames

    assert(offsetof(structure, field) == 0);
    assert(offsetof(structure, field1.field2));     // unparseable
    assert(sizeof(typename) == 4);
    assert(offsetof(struct S, f) == 4);
}

void typecasting() {
    assert((int) a == ((bob_t) b));                 // unparseable
    assert(*a == *((bob_t *)b));
    assert((*((int *)a)) == 3);
    assert(*a == (bob_t)3);
}
