#pragma once
#include "KamataEngine.h"
#include "Particle.h"
 class GameScene {
public:
	void Initialize();

	void Update();

	void Draw();

	~GameScene();

	Camera camera_;

private:
	KamataEngine::Model* ModelParticle_ = nullptr;
	Particle* particle_ = nullptr;
 };
