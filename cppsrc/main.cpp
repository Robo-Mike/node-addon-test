/* cppsrc/main.cpp */
#include "Samples/functionexample.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return functionexample::Init(env, exports);;
}
//ENTRY point f
NODE_API_MODULE(testaddon, InitAll)
