#pragma once

#include <string>

#include <d3dcompiler.h> // dxcapi.hが依存している
#include <dxcapi.h>      // IDXcBlobを利用するため
#pragma comment(lib, "dxcompiler.lib")
//#include <d3d12.h>

class Shader {
public:
	// コンストラクタ
	Shader();

	// デストラクタ
	~Shader();

	// シェーダーファイルを読み込み、コンパイル済みデータを生成する
	void Load(const std::wstring& filePath, const std::wstring& shaderModel);
	void LoadDxc(const std::wstring& filePath, const std::wstring& shaderModel);

	// 生成したコンパイル済みデータを取得する
	ID3DBlob* GetBlob() { return blob_; }
	IDxcBlob* GetDxcBlob() { return dxcBlob_; }

private:
	ID3DBlob* blob_ = nullptr;

	IDxcBlob* dxcBlob_ = nullptr;
};
