#include <stdlib.h>
#include <assert.h>

/*
 * Tests for assertions containing strings, or within strings.
 */
int function(char* a, int b) {

    assert("string");

    assert(strcmp("singleline", a) == 0);

    assert(strncmp("multiline1
                a long long
                multiline example", a) > 0);


    assert(strcmp("assert(a==b)", a) == 0);
    assert("assert(c==d)" != NULL);

    assert(strncmp("multiline2
                assert(bad==0);
                multiline embedded example", a) < 0);


    char *string = "assert(bad==1)"; assert(good==1); char *x = "assert(bad==2)"; 
    return 7;
}
