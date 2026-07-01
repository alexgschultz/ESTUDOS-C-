#include <iostream>
#include <vector>
#include <algorithm>// Biblioteca para std::for_each()

using namespace std;

int main()
{   
    vector<int> n{ 1, 2, 3, 4, 5 };

    /*
    for (auto it = n.begin(); it != n.end(); ++it) {
        cout << *it << endl;
    }

    for (const auto& i : n) {
		cout << i << endl;
    }*/

    // std::for_each(): Executa uma função (ou lambda) para cada elemento do intervalo
	for_each(n.begin(), n.end(), [](const auto& i) {
        cout << i << endl;
    });

    cout << endl;

    for_each(n.begin(), n.end(), [](auto& i) {
        i += 10;
        cout << i << endl;
    });

    return 0;
}