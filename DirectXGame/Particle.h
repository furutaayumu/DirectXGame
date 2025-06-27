#pragma once

#include <KamataEngine.h>
#include "Model2.h"

using namespace KamataEngine;
class Particle {
public:
	void Initialize(Model2* model);
	void Update();
	void Draw(Camera& camera);

private:
	WorldTransform worldTransform_;
	Model2* model_ = nullptr;
	ObjectColor objectColor_;
	Vector4 color_;
};
