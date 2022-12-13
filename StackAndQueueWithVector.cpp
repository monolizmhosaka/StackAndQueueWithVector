// StackAndQueueWithVector.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include "cmn.h"

using namespace std;

vector<int> v(0);

//中身を表示
void coutForVectorAll()
{
	cout << "***************************" << endl;
	for (auto i = v.begin(); i != v.end(); i++) {
		cout << *i << endl;
	}
	cout << "***************************" << endl;
	cout << endl;
}

//↓↓コメント有効化・無効化によってキュー・スタックのプログラムを切り替えます。
#define _QUEUE 

int main()
{

#ifdef _QUEUE
	//追加
	Queue::push(1);
	Queue::push(2);
	Queue::push(3);

	//中身を表示
	coutForVectorAll();

	//削除
	cout << "削除された値: " << Queue::pop() << endl;
	cout << "削除された値: " << Queue::pop() << endl;
	cout << endl;

	//中身を表示
	coutForVectorAll();
#else
	//追加
	Stack::push(1);
	Stack::push(2);
	Stack::push(3);

	//中身を表示
	coutForVectorAll();

	//削除
	cout << "削除された値: " << Stack::pop() << endl;
	cout << "削除された値: " << Stack::pop() << endl;
	cout << endl;

	//中身を表示
	coutForVectorAll();
#endif

}



// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
