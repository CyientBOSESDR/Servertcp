#ifndef SERVERTCP_I_IMPL_H
#define SERVERTCP_I_IMPL_H

#include "Servertcp_base.h"

class Servertcp_i : public Servertcp_base
{
    ENABLE_LOGGING
    public:
        Servertcp_i(const char *uuid, const char *label);
        ~Servertcp_i();
        void start() throw (CF::Resource::StartError, CORBA::SystemException);
        int Servertcp();
        void constructor();

        int serviceFunction();

    protected:
};

#endif // SERVERTCP_I_IMPL_H
