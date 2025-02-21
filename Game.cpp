#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

class Game
{
    void Run()
    {
        while(!glfwWindowShouldClose(window))
        {
            //Input

            //Rendering

            glfwSwapBuffers(window);
            glfwPollEvents();
        }

        glfwTerminate();
    }
};