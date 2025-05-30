#include<iostream>
#include<bitset>

using namespace std;

int main() {
	//그냥 변수만 사용했을때
	//bool item1_flag = false;
	//bool item2_flag = false;
	//bool item3_flag = false;
	//bool item4_flag = false; 

	////event!
	//item1_flag = true;

	////die! item2 lost
	//item2_flag = false;

	//if (item3_flag == true) {

	//}

	//if (item3_flag == false && item4_flag == true) {

	//}

	//비트 마스킹 사용시

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char item_flag = 0;
	cout << "No item " << bitset<8>(item_flag) << endl;

	//item0 on
	item_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(item_flag) << endl;
	
	//item3 on
	item_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(item_flag) << endl;

	//item3 lost
	item_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(item_flag) << endl;

	// has item1 ?
	if (item_flag & opt1) {
		cout << "Item1 obtained " << bitset<8>(item_flag) << endl;
	}
	else {
		cout << "Item1 not obtained " << bitset<8>(item_flag) << endl;
	}

	item_flag |= (opt2 | opt3); //둘다 가짐
	cout << "Item2,3 obained "<< bitset<8>(item_flag) << endl;

	if ((item_flag & opt0) && !(item_flag & opt1)) {
		item_flag ^= (opt1 ^ opt0);
	}//없을때 생기게 하는건 ^로 가능

	cout << bitset<8>(item_flag) << endl;

	const unsigned int red_mask = 0xFF0000;
	cout << bitset<32>(red_mask) << endl;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl;
	unsigned char red, green, blue;

	red = (red_mask & pixel_color) >> 16;
	cout << "red "<<bitset<8>(red) << endl;
	green = (green_mask & pixel_color) >> 8;
	cout <<"green "<< bitset<8>(green) << endl;
	blue = (blue_mask & pixel_color);
	cout <<"blue "<< bitset<8>(blue) << endl;


	unsigned char option_viewed = 0x01;
	unsigned char option_edited = 0x02;
	unsigned char option_liked = 0x04;
	unsigned char option_shared = 0x08;
	unsigned char option_deleted = 0x80;

	unsigned char my_article_flags = 0;

	//기사를 봄
	my_article_flags |= option_viewed;
	cout << "article viewed " << bitset<8>(my_article_flags) << endl;

	my_article_flags |= option_liked;
	cout << "article liked " << bitset<8>(my_article_flags) << endl;

	my_article_flags &= ~option_liked;
	cout << "article unliked " << bitset<8>(my_article_flags) << endl;
	
	//본기사만 삭제
	if (my_article_flags & option_viewed) {
		my_article_flags |= option_deleted;
		cout << "article deleted " << bitset<8>(my_article_flags) << endl;
	}


	return 0;
}