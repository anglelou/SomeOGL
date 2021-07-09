#version 330 core

// Positions / Corrdinates
layout (location = 0) in vec3 aPos;
// Colours
layout (location = 1) in vec3 aColor;


// Output the color for the Fragment Shader
out vec3 color;
// Controls the scale of the vertices
uniform float scale;


void main()
{
	// Outputs the positions/ coordinates of all vertices
	gl_Postion = vec4(aPos.x + aPos.x * scale, aPos.y + aPos.y * scale, aPos.z + aPos.z * scale, 1.0);
	// Assigns the colors from the Vertex Data to "color"
	color = aColor;
}