#ifndef cow_h

    #define cow_h

    #include "animal.h"

    struct cow {
        struct animal base;
    };

    struct cow * new_cow();

#endif
