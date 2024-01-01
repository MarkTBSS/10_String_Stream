#include <iostream>
#include <sstream>

int main() {
    // สร้าง stringstream 
    std::stringstream markStringStream;

    // ลองสร้างข้อมูลหลายๆชนิดขึ้นมา
    int num = 42;
    double pi = 3.14159;
    std::string text = "Hello, World!";

    markStringStream << "Integer: " << num << std::endl;
    markStringStream << "Double : " << pi << std::endl;
    markStringStream << "String : " << text << std::endl;

    // กำหนดตัวแปรชนิด String เข้ามารับ String Stream ด้วยคำสั่ง .str()
    std::string result = markStringStream.str();

    // แสดงผล
    std::cout << result << std::endl;

    return 0;
}