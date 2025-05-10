#include <vector>
#include "Bai01.cpp"

void Menu()
{
    std::cout << "\n----------------------------------------------\n";
    std::cout << "1. Nhap thong tin chuyen xe noi thanh\n";
    std::cout << "2. Nhap thong tin chuyen xe ngoai thanh\n";
    std::cout << "3. Xuat thong tin chuyen xe noi thanh\n";
    std::cout << "4. Xuat thong tin chuyen xe ngoai thanh\n";
    std::cout << "5. Tinh tong doanh thu chuyen xe ngoai thanh\n";
    std::cout << "6. Tinh tong doanh thu chuyen xe noi thanh\n";
    std::cout << "7. Tinh tong doanh thu ca hai chuyen\n";
    std::cout << "8. Nhan phim 8 de thoat chon\n";
    std::cout << "----------------------------------------------\n";
    std::cout << "Moi ban chon: ";
}

double TinhTongDoanhThuNgoaiThanh(const std::vector<cChuyenXeNgoaiThanh> &ng)
{
    double tong = 0.0;

    for(int i = 0; i < ng.size(); i++)
    {
        tong += ng[i].getDoanhThu();
    }

    return tong;
}

double TinhTongDoanhThuNoiThanh(const std::vector<cChuyenXeNoiThanh> &nt)
{
    double tong = 0.0;

    for(int i = 0; i < nt.size(); i++)
    {
        tong += nt[i].getDoanhThu();
    }

    return tong;
}

void QuanLyChuyenXe()
{
    int choice;
    std::vector<cChuyenXeNgoaiThanh> ng;
    std::vector<cChuyenXeNoiThanh> nt;
    cChuyenXeNgoaiThanh ngoai_thanh;
    cChuyenXeNoiThanh noi_thanh;

    Menu();
    std::cin >> choice;

    while(choice != 8)
    {
        switch(choice)
        {
        case 1:
            ngoai_thanh.NhapThongTinChuyenXeNgoaiThanh();
            ng.push_back(ngoai_thanh);
            break;
        
        case 2:
            noi_thanh.NhapThongTinChuyenXeNoiThanh();
            nt.push_back(noi_thanh);
            break;

        case 3:
            std::cout << "Thong tin chuyen xe ngoai thanh\n";
            std::cout << std::setw(20) << "Ma so chuyen" << std::setw(20) << "Ho ten tai xe" << std::setw(20) << "So xe" << std::setw(20) << "Doanh thu" << std::setw(20) << "So tuyen" << std::setw(20) << "Km" << '\n';
            for(int i = 0; i < ng.size(); i++)
            {
                ng[i].XuatThongTinChuyenXeNgoaiThanh();
                std::cout << '\n';
            }
            break;

        case 4:
            std::cout << "Thong tin chuyen xe noi thanh\n";
            std::cout << std::setw(20) << "Ma so chuyen" << std::setw(20) << "Ho ten tai xe" << std::setw(20) << "So xe" << std::setw(20) << "Doanh thu" << std::setw(20) << "Noi den" << std::setw(20) << "So ngay di duoc" << '\n';
            for(int i = 0; i < nt.size(); i++)
            {
                nt[i].XuatThongTinChuyenXeNoiThanh();
                std::cout << '\n';
            }
            break;

        case 5:
            std::cout << "Tong doanh thu chuyen ngoai thanh: " << TinhTongDoanhThuNgoaiThanh(ng);
            break;

        case 6:
            std::cout << "Tong doanh thu chuyen noi thanh: " << TinhTongDoanhThuNoiThanh(nt);
            break;

        case 7:
            std::cout << "Tong doanh thu ca hai chuyen: " << TinhTongDoanhThuNgoaiThanh(ng) + TinhTongDoanhThuNoiThanh(nt);
            break;

        default:
            std::cout << "Lua chon khong hop le. Nhap lai\n";
        }

        Menu();
        std::cin >> choice;
    }
}
int main()
{
    QuanLyChuyenXe();

    return 0;
}