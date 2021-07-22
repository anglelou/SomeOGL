#include"VAO.h"

// Constructor that generates a VAO ID
VAO::VAO()
{
	glGenVertexArrays(1, &ID);
}

// links a VBO attribute such as color or position to th VAO
void VAO::LinkAttrib(VBO& VBO, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset)
{
	VBO.Bind();
	glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
	glEnableVertexAttribArray(layout);
	VBO.Unbind();
}

// binds the VAO
void VAO::Bind()
{
	glBindVertexArray(ID);
}

// unbinds the VAO
void VAO::Unbind()
{
	glBindVertexArray(0);
}

// deletes the VAO
void VAO::Delete()
{
	glDeleteVertexArrays(1, &ID);
}