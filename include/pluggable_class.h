#ifndef INCLUDE_PLUGGABLE_CLASS_H_
#define INCLUDE_PLUGGABLE_CLASS_H_

class IPluggableClass {
public:
  virtual ~IPluggableClass() {};
  virtual void DoSomething() = 0;
};

#endif // INCLUDE_PLUGGABLE_CLASS_H_
