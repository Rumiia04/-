#include <iostream>
#include <fstream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    string line = "Informationbooks.txt";

    ofstream fout;

    fout.open(line);

    if (!fout.is_open())
    {
        cout << "Error opening file!\n";
    }
    else
    {
        fout << "Война и мир  Лев Толстой  1869  Роман \n1984  Джордж Оруэлл  1949  Фантастика\nГарри Поттер и философский камень  Джоан Роулинг  1997  Фэнтези\n";
        fout << "Алиса в стране чудес  Льюис Кэрролл  1865  Фэнтези\nКапитанская дочка  Александр Пушкин  1836  Роман";
    }
    fout.close();
}