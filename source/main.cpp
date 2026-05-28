#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
	if (!glfwInit())
	{
		return -1;
	}

	GLFWwindow* window =  glfwCreateWindow(1280, 720, "Game Development Project", NULL, NULL);

	if (window == nullptr)
	{
		std::cout << "Error creating window" << std::endl;
		glfwTerminate();
		return -1;
	}

	// Runs the main window until the user clicks to close
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwTerminate();

	return 0; 
}