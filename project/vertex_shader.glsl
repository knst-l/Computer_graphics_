#version 410 core
layout (location = 0) in vec3 vp;

uniform mat4 projection;
uniform mat4 view;

void main() {
    gl_Position = projection * view * vec4(vp, 1.0);
}