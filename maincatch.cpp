/**
 * This file is to enable caching in CLion along with the
 * following statements in CMakeLists.txt
 *
 * set(USE_CATCH 1)
 * if (DEFINED USE_CATCH)
 *   add_definitions(-DUSE_CATCH)
 * endif (DEFINED USE_CATCH)
 */


#ifdef USE_CATCH

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#endif  // USE_CATCH

