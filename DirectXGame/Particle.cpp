#include "Particle.h"

void Particle::Initialize(Model2* model) { 
	model_ = model;
	worldTransform_.Initialize();
	//色の設定
	objectColor_.Initialize();
	color_ = {1, 1, 0, 1};
}

void Particle::Update() {
	objectColor_.SetColor(color_);
	worldTransform_.TransferMatrix(); }

void Particle::Draw(Camera& camera) { model_->Draw(worldTransform_, camera,&objectColor_); }

