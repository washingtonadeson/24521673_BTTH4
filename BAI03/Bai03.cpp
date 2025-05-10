#include <limits>
#include <iomanip>
#include "Bai03.h"

cNhanVien::cNhanVien()
{
    luong = 0.0;
}

void cNhanVien::NhapThongTin()
{
    std::cout << "Nhap vao ho ten: "; std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::getline(std::cin, hoTen);
    std::cout << "Nhap vao ngay sinh: "; std::cin >> ngaySinh;
}

void cNhanVien::XuatThongTin()
{
    std::cout << std::setw(20) << hoTen << std::setw(20) << ngaySinh << std::setw(20) << luong;
}

std::string cNhanVien::getHoTen() const
{
    return hoTen;
}

void cNhanVien::setLuong(double luong)
{
    this->luong = luong;
}

double cNhanVien::getLuong() const
{
    return luong;
}

void cNVSX::NhapThongTinNVSX()
{
    cNhanVien::NhapThongTin();
    std::cout << "Nhap so san pham: "; std::cin >> soSanPham;
    std::cout << "Nhap luong can ban: "; std::cin >> luongCanBan;
}

void cNVSX::XuatThongTinNVSX()
{
    cNhanVien::XuatThongTin();
    std::cout << std::setw(20) << soSanPham << std::setw(20) << luongCanBan << '\n';
}

void cNVSX::TinhLuong()
{
    cNhanVien::setLuong(luongCanBan + soSanPham * 5000.0);
    std::cout << cNhanVien::getLuong();
}

void cNVVP::NhapThongTinNVVP()
{
    cNhanVien::NhapThongTin();
    std::cout << "Nhap so ngay lam viec: "; std::cin >> soNgayLamViec;
}

void cNVVP::XuatThongTinNVVP()
{
    cNhanVien::XuatThongTin();
    std::cout << std::setw(20) << soNgayLamViec << '\n';
}

void cNVVP::TinhLuong()
{
    cNhanVien::setLuong(soNgayLamViec * 100000.0);
    std::cout << cNhanVien::getLuong();
}