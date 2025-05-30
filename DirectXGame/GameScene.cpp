#include "GameScene.h"

using namespace KamataEngine;

void GameScene::Initialize() { 
	particle_ = new Particle();
	camera_.Initialize();
	ModelParticle_ = Model::CreateSphere(4, 4);
	particle_->Initialize(ModelParticle_);
}

void GameScene::Update() { particle_->Update(); }

void GameScene::Draw() { 
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	Model::PreDraw(dxCommon->GetCommandList());
	particle_->Draw(camera_); 
	Model::PostDraw();
}

GameScene::~GameScene() { 
	delete particle_;
	delete ModelParticle_; }