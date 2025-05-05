#version 410 core
uniform vec4 ourColour;
uniform vec3 lightColor;
out vec4 Colour; 
in vec3 Normal; //
in vec3 FragPos;
uniform vec3 viewPos;

struct lightStruct{
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    vec3 position;
};

uniform lightStruct light_1;

struct MatStruct{
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    vec3 shinies;
};

uniform MatStruct Mat_1;

void main() {
 
 //ambient
    vec3 ambient = light_1.ambient * Mat_1.ambient;

//diffuse
    vec3 norm = normalize (Normal);
    vec3 lightDir = normalize (light_1.position - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = light_1.diffuse * (diff * Mat_1.diffuse);

//specular
    vec3 viewDir = normalize (viewPos - FragPos);
    vec3 ref = reflect (-lightDir, norm);
    float spec = pow(max(dot(viewDir, ref), 0.0), Mat_1.shinies);
    vec3 specular = light_1.specular * (spec * Mat_1.specular);  

    vec3 result = (ambient + diffuse + specular); 
    Colour = vec4(result,1.0);
}
