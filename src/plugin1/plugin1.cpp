#include "plugin_api.h"

#include <iostream>

using std::cout;

class MyPluggableClass1 : public IPluggableClass {
public:
  ~MyPluggableClass1() { };
  void DoSomething() { cout << "Do as MyPluggableClass1 says:" << std::endl; };

};

PLUGIN_FUNC IPluggableClass *Create() {
  return new MyPluggableClass1;
}

PLUGIN_FUNC void Erase(IPluggableClass *ptr) {
  delete ptr;
}

PLUGIN_INIT() {
  RegisterPluggableClass("mypluggableclass1", Create, Erase);
  return 0;
}

/// PLUGIN_FREE () {
/// }
  
