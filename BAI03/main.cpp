#include <vector>
#include "Bai03.cpp"

void Menu()
{
    std::cout << "\n----------------------------------------------------\n"
              << "1. Nhập danh sách nhân viên sản xuất, danh sách nhân viên văn phòng\n"
              << "2. Tính lương cho từng nhân viên\n"
              << "3. Xuất thông tin danh sách các nhân viên\n"
              << "4. Tính tổng lương mà công ty phải trả cho các nhân viên\n"
              << "5. Nhan phim 5 de thoat chon\n"
              << "----------------------------------------------------\n"
              << "Moi ban chon: ";
}

double TinhTongLuongNVSX(std::vector<cNVSX> sx)
{
    double tongSX = 0.0;

    for(int i = 0; i < sx.size(); i++)
        tongSX += sx[i].getLuong();

    return tongSX;
}

double TinhTongLuongNVVP(std::vector<cNVVP> vp)
{
    double tongVP = 0.0;

    for(int i = 0; i < vp.size(); i++)
        tongVP += vp[i].getLuong();

    return tongVP;
}

void QuanLy()
{
    std::vector<cNVSX> sx;
    std::vector<cNVVP> vp;
    cNVSX temp1;
    cNVVP temp2;
    int choice;

    Menu();
    std::cin >> choice;

    while(choice != 5)
    {
        switch(choice)
        {
        case 1:
            std::cout<< "Nhap thong tin nvsx\n";
            temp1.NhapThongTinNVSX();
            sx.push_back(temp1);

            std::cout << "\nNhap thong tin nvvp\n";
            temp2.NhapThongTinNVVP();
            vp.push_back(temp2);
            break;

        case 2:
            std::cout << "Tinh luong nvsx\n";
            for(int i = 0; i < sx.size(); i++)
            {
                std::cout << sx[i].getHoTen() << ": ";
                sx[i].TinhLuong();
                std::cout << '\n';
            }

            std::cout << "Tinh luong nvvp\n";
            for(int i = 0; i < vp.size(); i++)
            {
                std::cout << vp[i].getHoTen() << ": ";
                vp[i].TinhLuong();
                std::cout << '\n';
            }
            break;

        case 3:
            std::cout << "Danh sach nvsx\n";
            std::cout << std::setw(20) << "Ho ten" << std::setw(20) << "Ngay sinh" << std::setw(20) << "Luong" << std::setw(20) << "So san pham" << std::setw(20) << "Luong can ban" << '\n';
            for(int i = 0; i < sx.size(); i++)
                sx[i].XuatThongTinNVSX();

            std::cout << "Danh sach nvvp\n";
            std::cout << std::setw(20) << "Ho ten" << std::setw(20) << "Ngay sinh" << std::setw(20) << "Luong" << std::setw(20) << "So ngay lam viec" << '\n';
            for(int i = 0; i < vp.size(); i++)
                vp[i].XuatThongTinNVVP();
            break;

        case 4:
            std::cout << "Tong luong: " << TinhTongLuongNVSX(sx) + TinhTongLuongNVVP(vp) << '\n';
            break;

        default:
            std::cout << "Invalid enter!!!\n";
        }

        Menu();
        std::cin >> choice;
    }
}

int main()
{
    QuanLy();

    return 0;
}