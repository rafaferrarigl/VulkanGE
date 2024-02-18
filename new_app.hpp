#pragma once

#include "ive-window.hpp"

namespace ive{
    class FirstApp{

        public:

        static constexpr int WIDTH = 800;
        static constexpr int HEIGH = 300;

        void run();
        private:
        LveWindow lveWindow{WIDTH, HEIGH , "Hello Vulkan"};

    };
}