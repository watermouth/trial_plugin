#include "plugin_api.h"
#include "pluggable_class_factory.h"

void RegisterPluggableClass(const char *type,
  PluggableClassInitFunc init_call_back,
  PluggableClassFreeFunc free_call_back)
{
  // you have to extend factory to have FreeCallBack
  PluggableClassFactory::RegisterPluggableClass(type, init_call_back);
}
 
