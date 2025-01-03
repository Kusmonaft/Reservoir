#include"Reservoir.h"

int main() {
    setlocale(LC_ALL, "Rus");
    
    vector<Reservoir> reservoirs;

    // �������� ��������
    reservoirs.push_back(Reservoir("����", 100, 200, 10));
    reservoirs.push_back(Reservoir("����", 2000, 1000, 1000));

    // ����� ����������
    for (const Reservoir& r : reservoirs) { cout << r << '\n' << "��������������� �����: " << r.volume() << '\n' << "�������: " << r.surface() << '\n'; }

    
    // ������ � ����
    ofstream outFile("reservoirs.txt");
    if (outFile.is_open()) {
        for (const Reservoir& r : reservoirs) {
            outFile << r << std::endl;
        }
        outFile.close();
    }
    else {
        cerr << "�� ������� ������� ����!";
    }

    return 0;
}