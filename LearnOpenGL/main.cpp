//
//  main.cpp
//  LearnOpenGL
//
//  Created by 张靖豪 on 2019/12/25.
//  Copyright © 2019 张靖豪. All rights reserved.
//

#include <iostream>
#include "Window.hpp"


int main(int argc, const char * argv[])
{
    Window window(800, 600, (GLchar*)"Hello Window");
    
    window.render();
    
    return 0;
}
