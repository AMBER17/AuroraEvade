#include "../plugin_sdk/plugin_sdk.hpp"
#include "auroraevade.h"

PLUGIN_NAME( "AuroraBlitzcrank" );

PLUGIN_TYPE(plugin_type::core)
PLUGIN_API bool on_sdk_load( plugin_sdk_core* plugin_sdk_good )
{
    DECLARE_GLOBALS( plugin_sdk_good );
    auroraevade::load();

    return true;
}

PLUGIN_API void on_sdk_unload( )
{
    auroraevade::unload();
}