#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include<glad/glad.h>

class VBO
{
public:
	// reference ID of the Vertex buffer object
	GLuint ID;
	// constructor that generates a Vertex Buffer Object and links it to vertices
	VBO(GLfloat* vertices, GLsizeiptr size);

	// binds the VBO
	void Bind();
	// unbind the VBO
	void Unbind();
	// deletes the VBO
	void Delete();
};

#endif
