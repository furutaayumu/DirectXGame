#include "GameScene.h"

using namespace KamataEngine;

void GameScene::Initialize() { 
	particle_ = new Particle();
	camera_.Initialize();
	ModelParticle_ = Model2::CreateSquare();
	particle_->Initialize(ModelParticle_);
	Model2::StaticInitialize();
}

void GameScene::Update() { particle_->Update(); }

void GameScene::Draw() { 
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();

	Model2::PreDraw(dxCommon->GetCommandList());
	particle_->Draw(camera_); 
	Model2::PostDraw();
}

GameScene::~GameScene() { 
	delete particle_;
	delete ModelParticle_; 
	Model2::StaticFinalize();
}