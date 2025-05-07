#pragma once

#include <string>
#include <d3d12.h>

class Shader {
public:
	// コンストラクタ
	Shader();

	// デストラクタ
	~Shader();

	// シェーダーファイルを読み込み、コンパイル済みデータを生成する
	void Load(const std::wstring& filePath, const std::string& shaderModel);

	// 生成したコンパイル済みデータを取得する
	ID3DBlob* GetBlob() { return blob_; }

private:
	ID3DBlob* blob_ = nullptr;
};
