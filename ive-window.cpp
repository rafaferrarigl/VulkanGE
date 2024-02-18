#include "ive-window.hpp"

namespace ive
{
    LveWindow::LveWindow(int w, int h, std::string wn) : width{w}, heigh{h}, windowName{wn}
    {
        initWindow();
    }
    LveWindow::~LveWindow(){
        glfwDestroyWindow(window);  
        glfwTerminate();

    }
    void LveWindow::initWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // El tema es q por defecto glfw hace contexto de opengl pero eto es vulkan
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);   // Esto es para q no este cambiando el tama;o de ventana
        window = glfwCreateWindow(width, heigh, windowName.c_str(), nullptr, nullptr);//Los tres primeros parametros son evidentes el 4 es para fullzice y el ultimo opengl(no se toca)

    }

}