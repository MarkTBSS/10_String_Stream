#include <iostream>
#include <vector>

int main() {
    std::vector<int> markIntVector;
    // ประกาศ vector ชนิด int ชื่อ markIntVector 

    // เพิ่มข้อมูลเข้าไปใน vector
    markIntVector.push_back(10);
    markIntVector.push_back(20);
    markIntVector.push_back(30);

    // แสดงข้อมูลใน vector ด้วย foreach
    for (int eachValue : markIntVector) {
        std::cout << eachValue << std::endl;
    }

    return 0;
}