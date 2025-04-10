#ifndef SLD_TYPES_HPP
#define SLD_TYPES_HPP

#include "sld-common.hpp"

/**********************************************************************************/
/* FORWARD DECLARATIONS                                                           */
/**********************************************************************************/

namespace sld {

    struct memory_t;
    struct iterator_t;

    ptr iterate()
};

/**********************************************************************************/
/* DEFINITIONS                                                                    */
/**********************************************************************************/

namespace sld {

    struct memory_t {
        addr start;
        u64  size;
    };

    struct iterator_t {
        ptr start;
        u32 index;
        u32 stride;
    };
};

#endif //SLD_TYPES_HPP
