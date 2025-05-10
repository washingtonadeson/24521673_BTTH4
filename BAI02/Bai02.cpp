#include <limits>
#include <iomanip>
#include "Bai02.h"

cSach::cSach()
{
    maSach = " ";
    ngayNhap = 0;
    donGia = 0.0;
    soLuong = 0;
    nhaXuatBan = " ";
    thanhTien = 0.0;
}

void cSach::NhapThongTinSach()
{
    std::cout << "Nhap vao ma sach: "; std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::getline(std::cin, maSach);
    std::cout << "Nhap vao ngay nhap: "; std::cin >> ngayNhap;
    std::cout << "Nhap vao don gia: "; std::cin >> donGia;
    std::cout << "Nhap vao so luong: "; std::cin >> soLuong;
    std::cout << "Nhap vao nha xuat ban: "; std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::getline(std::cin, nhaXuatBan);
}

void cSach::XuatThongTinSach()
{
    std::cout << std::setw(20) << maSach << std::setw(20) << ngayNhap << std::setw(20) << donGia << std::setw(20) << soLuong << std::setw(20) << nhaXuatBan << std::setw(20) << "$" << thanhTien;
}

double cSach::getThanhTien() const
{
    return thanhTien;
}

void cSach::setThanhTien(double thanhTien)
{
    this->thanhTien = thanhTien;
}

double cSach::getDonGia() const
{
    return donGia;
}

int cSach::getSoLuong() const
{
    return soLuong;
}

std::string cSach::getNhaXuatBan() const
{
    return nhaXuatBan;
}

cSGK::cSGK()
{
    tinhTrang = 1; // Mac dinh la moi
}

void cSGK::NhapThongTinSGK()
{
    cSach::NhapThongTinSach();
    std::cout << "Nhap vao tinh trang (1. Moi  2. Cu): "; std::cin >> tinhTrang;

    while(tinhTrang != 1 && tinhTrang != 2)
    {
        std::cout << "Invalid entering!!!\n";
        std::cout << "Nhap vao tinh trang (1. Moi  2. Cu): "; std::cin >> tinhTrang;
    }
    
    cSach::setThanhTien(TinhThanhTienSGK());
}

void cSGK::XuatThongTinSGK()
{
    cSach::XuatThongTinSach();
    if(tinhTrang == 1)
        std::cout << std::setw(20) << "Moi" << '\n';
    else
        std::cout << std::setw(20) << "Cu" << '\n';
}

double cSGK::TinhThanhTienSGK()
{
    if(tinhTrang == 1)
        return cSach::getSoLuong() * cSach::getDonGia();
    return cSach::getSoLuong() * cSach::getDonGia() * 50 / 100.0;
}

cSTK::cSTK()
{
    thue = 0.0;
}

void cSTK::NhapThongTinSTK()
{
    cSach::NhapThongTinSach();
    std::cout << "Nhap vao thue: "; std::cin >> thue;

    cSach::setThanhTien(TinhThanhTienSTK());
}

void cSTK::XuatThongTinSTK()
{
    cSach::XuatThongTinSach();
    std::cout << std::setw(20) << "$" << thue << '\n';
}

double cSTK::TinhThanhTienSTK()
{
    return cSach::getSoLuong() * cSach::getDonGia() + thue;
}