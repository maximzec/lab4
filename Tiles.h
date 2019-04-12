#ifndef TILES_H
#define TILES_H
class Tiles {
public:
	std::string brand;
	int size_h;
	int size_w;
	int price;

	Tiles();
	Tiles(std::string brand, int size_h, int size_w, int price);
	Tiles(const Tiles& object);
	~Tiles();
	void getData();
};

#endif // !TILES_H
