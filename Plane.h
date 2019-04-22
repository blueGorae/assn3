#pragma once
#define GLM_ENABLE_EXPERIMENTAL

#include <iostream>
#include <vector>
#include <math.h>
#include "Object.h"
#include "glm/glm.hpp"

using namespace std;

extern GLint ctmLocation;

extern GLint vertexLocation;

extern glm::mat4 ctm;

class Plane : public Object
{
public:
	Plane() {};
	Plane(unsigned int width, unsigned int depth) : width(width), depth(depth) {
		buildVertices();
	};
	~Plane();

	glm::vec3 getCenter() { return glm::vec3(width / 2.0f, depth / 2.0f, 0.f); }

private:
	unsigned int width;
	unsigned int depth;
	void buildVertices();
};

