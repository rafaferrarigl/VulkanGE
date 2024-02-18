#include "new_app.hpp"

namespace ive
{
    void FirstApp::run()
    {

        while (!lveWindow.shouldClose())
        {
            glfwPollEvents();
        }
    }
}