#include"Reservoir.h"

int main() {
    setlocale(LC_ALL, "Rus");
    
    vector<Reservoir> reservoirs;

    // Создание объектов
    reservoirs.push_back(Reservoir("Река", 100, 200, 10));
    reservoirs.push_back(Reservoir("Море", 2000, 1000, 1000));

    // Вывод информации
    for (const Reservoir& r : reservoirs) { cout << r << '\n' << "Приблизительный объем: " << r.volume() << '\n' << "Площадь: " << r.surface() << '\n'; }

    
    // Запись в файл
    ofstream outFile("reservoirs.txt");
    if (outFile.is_open()) {
        for (const Reservoir& r : reservoirs) {
            outFile << r << std::endl;
        }
        outFile.close();
    }
    else {
        cerr << "Не удается открыть файл!";
    }

    return 0;
}