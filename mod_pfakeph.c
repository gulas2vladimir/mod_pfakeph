#include <stdio.h>
#include "httpd.h"
#include "http_config.h"

module AP_MODULE_DECLARE_DATA pfakeph_module;

static const char *dummy(cmd_parms *params, void *config, const char *name, const char *value)
{
    return (NULL);
}

static const command_rec pfakeph_cmds[] =
{
    AP_INIT_TAKE2("php_flag", dummy, NULL, OR_OPTIONS, "PHP Flag Modifier"),
    AP_INIT_TAKE2("php_value", dummy, NULL, OR_OPTIONS, "PHP Value Modifier"),
    AP_INIT_TAKE2("php_admin_flag", dummy, NULL, OR_OPTIONS, "PHP Admin Flag Modifier"),
    AP_INIT_TAKE2("php_admin_value", dummy, NULL, OR_OPTIONS, "PHP Admin Value Modifier"),
    { NULL }
};

module AP_MODULE_DECLARE_DATA pfakeph_module =
{
    STANDARD20_MODULE_STUFF,
    NULL,               /* dir config creator */
    NULL,               /* dir config merger */
    NULL,               /* server config creator */
    NULL,               /* server config merger */
    pfakeph_cmds,       /* command table */
    NULL                /* request processing hooks */
};