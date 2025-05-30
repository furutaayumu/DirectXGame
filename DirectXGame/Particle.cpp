#include "Particle.h"

void Particle::Initialize(Model* model) { 
	model_ = model;
	worldTransform_.Initialize();
}

void Particle::Update() { worldTransform_.TransferMatrix(); }

void Particle::Draw(Camera& camera) { model_->Draw(worldTransform_, camera); }

