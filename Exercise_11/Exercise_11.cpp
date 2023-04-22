#include <iostream>
using namespace std;
//Tạo thực đơn cho nhà hàng.
//(Gợi ý : Cho phép người dùng chọn món.Sau đó cho biết món đó là món gì và giá bao nhiêu.Ví dụ : Chọn 1 : Mon 1 : Cơm sườn – Giá 30.000 đồng)

struct do_an //cấu trúc (dạng mới của mảng hay vì sử dụng mảng nó phức tạp)
{
    string name;
    double price;
};

int main()
{
    //struct sẽ là tạo cấu trúc đẩy vào từng biến
    //tạo món ăn...
    do_an mon1 = { "Com Suon",30000 };
    do_an mon2 = { "Com Ga",33000 };
    do_an mon3 = { "Com Suon Bi Cha",35000 };
    do_an mon4 = { "Com Suon Lon",35000 };
    do_an mon5 = { "Com Thit Kho",30000 };
    
    //in ra màn hình cái menu
    cout << "Menu:" << endl;
    cout << "1. " << mon1.name << " - " << mon1.price << " Dong" << endl;
    cout << "2. " << mon2.name << " - " << mon2.price << " Dong" << endl;
    cout << "3. " << mon3.name << " - " << mon3.price << " Dong" << endl;
    cout << "4. " << mon4.name << " - " << mon4.price << " Dong" << endl;
    cout << "5. " << mon5.name << " - " << mon5.price << " Dong" << endl;

    int choice;//khai báo biến "chọn"
    cout << "Nhap mon ban muon mua: ";
    cin >> choice;
    switch (choice) //vào cấu trúc switch
    {
        case 1:
            cout << "Ban mua: " << mon1.name << " - " << "Gia: " << mon1.price << " Dong" << endl;
            break;
        case 2:
            cout << "Ban mua: " << mon2.name << " - " << "Gia: " << mon2.price << " Dong" << endl;
            break;
        case 3:
            cout << "Ban mua: " << mon3.name << " - " << "Gia: " << mon3.price << " Dong" << endl;
            break;
        case 4:
            cout << "Ban mua: " << mon4.name << " - " << "Gia: " << mon4.price << " Dong" << endl;
            break;
        case 5:
            cout << "Ban mua: " << mon5.name << " - " << "Gia: " << mon5.price << " Dong" << endl;
            break;
        default:
            break;
    }
    return 0;
}
