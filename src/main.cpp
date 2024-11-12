#include <GCrisp/gcrisp.h>

class GCrispApplication : public gcrisp::Application{
public:
  GCrispApplication()
  {

  }

  ~GCrispApplication()
  {

  }
};

gcrisp::Application* gcrisp::CreateApplication()
{
  return new GCrispApplication();
}
