#pragma once
#include "KamataEngine.h"
#include "Particle.h"
#include "Model2.h"
 class GameScene {
public:
	void Initialize();

	void Update();

	void Draw();

	~GameScene();

	Camera camera_;

private:
	KamataEngine::Model2* ModelParticle_ = nullptr;
	Particle* particle_ = nullptr;
 };
