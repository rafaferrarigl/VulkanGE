#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>
namespace ive
{
    class LveWindow
    {

    public:
        LveWindow(int w, int h, std::string wn);
        ~LveWindow();

        LveWindow(const LveWindow &) = delete;
        LveWindow &operator=(const LveWindow &)= delete;


        bool shouldClose()
        {
            return glfwWindowShouldClose(window);
        }

    private:
        void initWindow();
        const int width;
        const int heigh;

        std::string windowName;
        GLFWwindow *window;
    };

} // namespace ive
