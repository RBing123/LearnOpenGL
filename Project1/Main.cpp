#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
const int SCR_HEIGHT = 600;
const int SCR_WIDTH = 800;
int main() {
	glfwInit();
	glfwWindowHint(GLFW_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_ANY_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
	if (window == NULL) {
		std::cout << "Fail to Open the Window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);
	if (!gladLoadGLLoader ((GLADloadproc)glfwGetProcAddress)) {
		std::cout << "Fail to Initialize the window" << std::endl;
		return -1;
	}
	return 0;
}