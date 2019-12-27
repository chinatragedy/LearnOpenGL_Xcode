cmake_minimum_required(VERSION 3.15)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 14)

include_directories(Common/Camera)
include_directories(Common/GLErrorCheck)
include_directories(Common/Lighting)
include_directories(Common/Materials)
include_directories(Common/Mesh)
include_directories(Common/Model)
include_directories(Common/Shader)
include_directories(Common/StbImage)
include_directories(Common/Texture)
include_directories(Common/Transform)

add_executable(LearnOpenGL
        Common/Camera/Camera.cpp
        Common/Camera/Camera.hpp
        Common/Glad/glad.c
        Common/GLErrorCheck/GLErrorCheck.cpp
        Common/GLErrorCheck/GLErrorCheck.hpp
        Common/Lighting/DirectionLight.cpp
        Common/Lighting/DirectionLight.hpp
        Common/Lighting/PointLight.cpp
        Common/Lighting/PointLight.hpp
        Common/Lighting/Spotlight.cpp
        Common/Lighting/Spotlight.hpp
        Common/Materials/Materials.cpp
        Common/Materials/Materials.hpp
        Common/Mesh/Mesh.cpp
        Common/Mesh/Mesh.hpp
        Common/Model/Model.cpp
        Common/Model/Model.hpp
        Common/Shader/Shader.cpp
        Common/Shader/Shader.hpp
        Common/StbImage/stb_image.h
        Common/Texture/Texture.cpp
        Common/Texture/Texture.hpp
        Common/Transform/Transform.cpp
        Common/Transform/Transform.hpp
        HelloTriangle/hello_triangle.cpp
        LearnOpenGL/main.cpp
        Test/main.cpp)
