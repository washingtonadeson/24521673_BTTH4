#include <iostream>
#include <string>
#pragma once

class cNhanVien
{
private:
    std::string hoTen;
    std::string ngaySinh;
    double luong;

public:
    cNhanVien();
    void NhapThongTin();
    void XuatThongTin();
    std::string getHoTen() const;
    void setLuong(double);
    double getLuong() const;
};

class cNVSX : public cNhanVien
{
private:
    int soSanPham;
    double luongCanBan;

public:
    void NhapThongTinNVSX();
    void XuatThongTinNVSX();
    void TinhLuong();
};

class cNVVP : public cNhanVien
{
private:
    int soNgayLamViec;

public:
    void NhapThongTinNVVP();
    void XuatThongTinNVVP();
    void TinhLuong();
};