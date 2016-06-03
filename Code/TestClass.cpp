#include "TestClass.h"
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"


void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 0.0, 0.0, 1.0);

	glutSwapBuffers();
}

TestClass::TestClass(int argc, char **argv, int width, int height)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(width, height);
	glutCreateWindow("Game");

	glewInit();

	glEnable(GL_DEPTH_TEST);
	glutDisplayFunc(renderScene);

	glutMainLoop();
}


TestClass::~TestClass()
{
}
