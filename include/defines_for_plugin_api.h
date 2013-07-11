#ifndef INCLUDE_DEFINES_FOR_PLUGIN_API_H_
#define INCLUDE_DEFINES_FOR_PLUGIN_API_H_

#ifdef _WIN32
#ifdef BUILDING_CORE
#define CORE_API   __declspec(dllexport)
#define PLUGIN_API __declspec(dllimport)
#else
#define CORE_API   __declspec(dllimport)
#define PLUGIN_API __declspec(dllexport)
#endif
#else
#define CORE_API
#define PLUGIN_API
#endif

#ifdef _WIN32
#pragma warning ( disable : 4251 )
#endif

#endif // INCLUDE_DEFINES_FOR_PLUGIN_API_H_

