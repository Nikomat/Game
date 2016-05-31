#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <iostream>


void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 0.0, 0.0, 1.0);

	glutSwapBuffers();
}

int main(int argc,char **argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Game");

	glewInit();
	if (glewIsSupported("GL_VERSION_4_4"))
	{
		std::cout << " GLEW Version is 4.4\n ";
	}
	else
	{
		std::cout << "GLEW 4.4 not supported\n ";
	}

	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(renderScene);

	glutMainLoop();

	return 0;
}
