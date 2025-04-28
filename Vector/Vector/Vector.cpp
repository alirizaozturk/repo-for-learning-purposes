#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool sirala(int a, int b) {
	if (a % 2 != b % 2) return a % 2 > b % 2; // tek sayılar önce gelir
	else return a < b; // çift sayılar sıralanır
}
int main()
{
	vector<int> sayilar = { 1,2,3,4,5 };
	for (int x : sayilar)
	{
		cout << x << " ";
	}
	cout << endl;

	sayilar.erase(sayilar.begin() + 1); // 2. elemanı siler
	vector<int> sayilar2(5, 10); // 5 tane 10 elemanlı bir vector oluşturur
	for (int x : sayilar2)
	{
		cout << x << " ";
	}
	cout << endl;

	vector<int> sayilar3 = { 5,2,8,7,15,20,4,3,11 };
	sort(sayilar3.begin(), sayilar3.end(), sirala); // ozel sirala fonksiyonu ile sıralama yapar
	for (int sayi : sayilar3)
		cout << sayi << " ";
	cout << endl;
}