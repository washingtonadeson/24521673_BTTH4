#include <iostream>
#include <string>
#pragma once

class cSach
{
private:
    std::string maSach;
    int ngayNhap;
    double donGia;
    int soLuong;
    std::string nhaXuatBan;
    double thanhTien;

public:
    cSach();
    void NhapThongTinSach();
    void XuatThongTinSach();
    double getThanhTien() const;
    void setThanhTien(double);
    double getDonGia() const;
    int getSoLuong() const;
    std::string getNhaXuatBan() const;
};

class cSGK : public cSach
{
private:
    int tinhTrang;  // 1. Moi,  2. Cu

public:
    cSGK();
    void NhapThongTinSGK();
    void XuatThongTinSGK();
    double TinhThanhTienSGK();
};

class cSTK : public cSach
{
private:
    double thue;

public:
    cSTK();
    void NhapThongTinSTK();
    void XuatThongTinSTK();
    double TinhThanhTienSTK();
};