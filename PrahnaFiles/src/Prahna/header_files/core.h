#pragma once

#ifdef PR_PLATFORM_MAC
    #ifdef PR_VISIBILITY
        #define PR_API __attribute__ ((visibility ("default")))
    #else
        #define PR_API __attribute__ ((visibility ("hidden")))
    #endif 
#endif
