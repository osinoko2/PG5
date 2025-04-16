#include <Windows.h>
#include "KamataEngine.h"

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {
	
	// エンジンの初期化
	KamataEngine::Initialize(L"LE3C_11_サクライ_ショウセイ");

	// メインループ
	while (true) {
		// エンジンの更新
		if (KamataEngine::Update()) {
			break;
		}
	}

	// エンジンの終了処理
	KamataEngine::Finalize();

	return 0;
}
