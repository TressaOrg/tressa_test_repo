#include <assert.h>


/*Tests for assertions containing pre-processor directives and within macro
 * definitions
 */

#define SIMPLE(X) assert((X)==1)

#define COMPLEX_ASSERT_MACRO(_a, _b, _c, _e, _e, _f)                        \
    assert((fun(_a)->field & SOME_mask)                                     \
           == SOME_shadow                                                   \
           || (fun(_b)->field & ANOTHER_mask)                               \
           == ANOTHER_shadow);                                      

#define TICTACTOE(prefix, name) assert(prefix ## _ ## name == 0)


void ifdefs(int arg) {
    int a = 1;
    int b = a + 1;

    assert(a == 1 &&
#ifdef FLAG
            arg == 2
#else
            arg = 3
#endif
            && b == 2);
}


// Added in Xen repo: ad5f4fe4236fa6fc436619a2c53d8ebc51bec4ae::tools/libxl/libxl_save_helper.c:213
#define NEXTARG (++argv, assert(*argv), *argv)

