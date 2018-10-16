#pragma once

#define TILESIZE	32

#define TILEX		20
#define TILEY		20

#define TILESIZEX	TILESIZE * TILEX
#define TILESIZEY	TILESIZE * TILEY

#define SAMPLETILEX	20
#define SAMPLETILEY	9

struct Tile
{
	TERRAIN terrain;
	RECT	rc;
	int		frameX;
	int		frameY;
};

class MapTool : public GameNode
{
private:
	POINT		currentTile;

	Tile		sampleTile[SAMPLETILEX * SAMPLETILEY];
	Tile		tile[TILEX * TILEY];

	int			pos[2];
public:
	MapTool();
	~MapTool();

	bool Init();
	void Release();
	void Update();
	void Render(HDC hdc);

	void MapToolSetup();

	void ClickSample();
	void ClickMap();

	void SaveTile();
	void LoadTile();
};

// ����Ѵٸ�, �����ؼ� ��ߵ�.
// �� ���·δ� ������Ʈ�� Ÿ������ �÷����Ⱑ ����.
// �浹ó�� ����,
// ���ͺ亸�� ������Ÿ���� ��õ.
// 