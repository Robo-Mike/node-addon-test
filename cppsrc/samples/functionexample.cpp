#include "functionexample.h"


//native code
std::string functionexample::hello(){
  return "Hello World";
}


Napi::String functionexample::HelloWrapped(const Napi::CallbackInfo& info)
{
  Napi::Env env = info.Env();
  Napi::String returnValue = Napi::String::New(env, functionexample::hello());

  return returnValue;
}


//ADD it to the exports
Napi::Object functionexample::Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(
"hello", Napi::Function::New(env, functionexample::HelloWrapped)
  );

  return exports;
}
