#include "app_window.h"
#include "slint.h"

class ApplicationEngine
{

  public:
    ApplicationEngine(const slint::ComponentHandle<AppWindow> &appWindow);
    ~ApplicationEngine();

    ApplicationEngine(const ApplicationEngine&) = delete;
    ApplicationEngine &operator=(const ApplicationEngine&) = delete;
    static ApplicationEngine &init(const slint::ComponentHandle<AppWindow> &appWindow);

  private:
    static void LoginLogic(const slint::ComponentHandle<AppWindow> &appWindow);
};