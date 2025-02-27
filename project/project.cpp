// Чернякова Валерия.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define GLEW_DLL
#define GLEW_DLL

#include "GL\glew.h"
#include "GLFW\glfw3.h"
#include "cstdio"

#include <iostream>

int main()
{
    printf  ("Hello World!\n");

    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    // glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    // glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    GLFWwindow* window;
     
    window = glfwCreateWindow(512, 512, "Mainwindow", NULL, NULL);

    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;

    glewInit();

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(1.0, 1.0, 0.3, 1.0);

        glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(0.5, 0.5, 1.0);

        glBegin(GL_QUADS);

        glVertex2f(-0.5, 0.0);

        glVertex2f(0.5, 0.0);

        glVertex2f(0.3, 0.5);

        glVertex2f(-0.3, 0.5);

        glEnd();

        glfwSwapBuffers(window);

        glfwPollEvents();

    }

glfwTerminate();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
