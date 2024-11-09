#include <GCrisp/core.h>
#include <SDL3/SDL.h>

int main(int argc, char *argv[])
{
  GCrispCoreInfo* core_info = gcrisp_core_start("asd", 1);
  SDL_Log("Meow");
  return 0;
}
