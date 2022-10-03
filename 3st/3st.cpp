#include <GLFW/glfw3.h>
#include <glm/glm.hpp>


#pragma comment(lib, "OpenGL32")

static void error_callback(int error, const char* description)
{
    fputs(description, stderr);
}
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GL_TRUE);

}


int main(void)
{
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(600,600, "Simple example", NULL, NULL); //window 크기
    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    while (!glfwWindowShouldClose(window))
    {
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float)height;

        ////90도와 같이 각도로 연산하고 싶으면
        ////glm의 삼각함수는 radian 형식으로 입력을 받기 때문에 변환해서 넣어주어야한다.
        //glm::sin(glm::radians(90.0));  

        //glClearColor(.0f, 0.0f, 0.0f, 0.1f);  //배경 검은색
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  //배경 흰색
        glClear(GL_COLOR_BUFFER_BIT); 
        glColor3f(0.0f, 0.0f, 1.0f);  //도형의 색(3은 RGB, f는 float)
        GLfloat size[5];

        /*반지름이 r 인 원의 중심이 원점에 위치할 때
        원 위에 있는 임의의 한점은(rcosΘ, rsinΘ)으로 나타낼 수 있다.*/

        double rad = 1;  //반지름 rad
        glBegin(GL_LINE_STRIP);
        for (int i = 0; i < 360; i++)
        { 
        double angle, x, y;
        angle = i * 3.141592 / 180;
        x = rad * cos(angle);
        y = rad * sin(angle);
        glVertex2f(x, y); 
        }
        glEnd();
        //3주차


        //double rad = 1;  //반지름 rad
        glBegin(GL_LINE_STRIP);
            double angle, x, y;
            int i = 72;
            angle = i * 3.141592 / 180;
            x = rad * cos(angle);
            y = rad * sin(angle);
            glVertex2f(cos(0), sin(0));
            glVertex2f(cos(144 * 3.141592 / 180), sin(144 * 3.141592 / 180));
            glVertex2f(cos(288 * 3.141592 / 180), sin(288 * 3.141592 / 180));
            glVertex2f(cos(72 * 3.141592 / 180), sin(72 * 3.141592 / 180));
            glVertex2f(cos(216 * 3.141592 / 180), sin(216 * 3.141592 / 180));
            glVertex2f(cos(0), sin(0));
            glEnd();
            //5주차

        //중점이 원점이 아닌 원(중점 좌표 cx,cy)
        //double cx = 0.2;
        //double cy = 0.1;
        //glVertex2f(x + cx, y + cy);


       /*//삼각형 그리기 
       glBegin(GL_LINE_STRIP);
        glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);
        glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
        glVertex3f(1.0f, -1.0f, 0.0f);
        glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
        glVertex3f(-1.0f, -1.0f, 0.0f);
        glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);
        glEnd();*/

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}