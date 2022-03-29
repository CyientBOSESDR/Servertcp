#include <iostream>
#include "ossie/ossieSupport.h"

#include "Servertcp.h"
int main(int argc, char* argv[])
{
    Servertcp_i* Servertcp_servant;
    Component::start_component(Servertcp_servant, argc, argv);
    return 0;
}

