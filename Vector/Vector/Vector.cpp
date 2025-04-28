//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool sirala(int a, int b) {
//	if (a % 2 != b % 2) return a % 2 > b % 2; // tek sayılar önce gelir
//	else return a < b; // çift sayılar sıralanır
//}
//int main()
//{
//	vector<int> sayilar = { 1,2,3,4,5 };
//	for (int x : sayilar)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//
//	sayilar.erase(sayilar.begin() + 1); // 2. elemanı siler
//	vector<int> sayilar2(5, 10); // 5 tane 10 elemanlı bir vector oluşturur
//	for (int x : sayilar2)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//
//	vector<int> sayilar3 = { 5,2,8,7,15,20,4,3,11 };
//	sort(sayilar3.begin(), sayilar3.end(), sirala); // ozel sirala fonksiyonu ile sıralama yapar
//	for (int sayi : sayilar3)
//		cout << sayi << " ";
//	cout << endl;
//}


#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

bool custom_sort(int a, int b) {
    if (a % 2 != b % 2) return a % 2 > b % 2;  // Odd numbers first
    return a < b;  // Even numbers later, in ascending order
}

vector<int> generate_random_numbers(int max, int min, int n) {
    vector<int> numbers;
    srand(time(0)); // Initialize random number generator
    for (int i = 0; i < n; i++) {
        numbers.push_back(rand() % (max - min + 1) + min); // Generate random numbers between min and max
    }
    return numbers;
}

void start_game(int max, int min, int n) {
    vector<int> numbers = generate_random_numbers(max, min, n);
    cout << "Random numbers: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end(), custom_sort); // Sort the numbers
    cout << "Sorted numbers: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Is the sorting correct? (Yes/No): ";
    string answer;
    cin >> answer;

    if (answer == "Yes" || answer == "yes") {
        cout << "Congratulations! The sorting is correct!" << endl;
    }
    else {
        cout << "Hmm, try again next time more carefully!" << endl;
    }
}

int main() {
    int max, min, n;
    cout << "Enter the max number: ";
    cin >> max;
    cout << "Enter the min number: ";
    cin >> min;
    cout << "How many numbers would you like? ";
    cin >> n;
    start_game(max, min, n);
}
// This program generates random numbers, sorts them with a custom sorting function, and checks if the sorting is correct.