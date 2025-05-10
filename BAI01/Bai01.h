#include <iostream>
#include <string>
#pragma once

class cChuyenXe
{
private:
    int maSoChuyen;
    std::string hoTenTaiXe;
    std::string soXe;
    double doanhThu;

public:
    double getDoanhThu() const;
    void NhapThongTinChuyenXe();
    void XuatThongTinChuyenXe();
};

class cChuyenXeNgoaiThanh : public cChuyenXe
{
private:
    int soTuyen;
    double km;

public:
    void NhapThongTinChuyenXeNgoaiThanh();
    void XuatThongTinChuyenXeNgoaiThanh();
};

class cChuyenXeNoiThanh : public cChuyenXe
{
private:
    std::string noiDen;
    int soNgayDiDuoc;

public:
    void NhapThongTinChuyenXeNoiThanh();
    void XuatThongTinChuyenXeNoiThanh();
};