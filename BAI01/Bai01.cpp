#include <limits>
#include <iomanip>
#include "Bai01.h"

double cChuyenXe::getDoanhThu() const
{
    return doanhThu;
}

void cChuyenXe::NhapThongTinChuyenXe()
{
    std::cout << "Nhap vao ma so chuyen: "; std::cin >> maSoChuyen;
    std::cout << "Nhap vao ho ten tai xe: "; std::cin.ignore(); std::getline(std::cin, hoTenTaiXe);
    std::cout << "Nhap vao bien so xe: "; std::getline(std::cin, soXe);
    std::cout << "Nhap vao doanh thu: "; std::cin >> doanhThu;
}

void cChuyenXe::XuatThongTinChuyenXe()
{
    std::cout << std::setw(20) << maSoChuyen << std::setw(20) << hoTenTaiXe << std::setw(20) <<  soXe << std::setw(20) << doanhThu;
}

void cChuyenXeNgoaiThanh::NhapThongTinChuyenXeNgoaiThanh()
{
    cChuyenXe::NhapThongTinChuyenXe();
    std::cout << "Nhap vao so tuyen: "; std::cin >> soTuyen;
    std::cout << "Nhap vao so km di duoc: "; std::cin >> km;
}

void cChuyenXeNgoaiThanh::XuatThongTinChuyenXeNgoaiThanh()
{
    cChuyenXe::XuatThongTinChuyenXe();
    std::cout << std::setw(20) << soTuyen << std::setw(20) << km;
}

void cChuyenXeNoiThanh::NhapThongTinChuyenXeNoiThanh()
{
    cChuyenXe::NhapThongTinChuyenXe();
    std::cout << "Nhap vao noi den: "; std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::getline(std::cin, noiDen);
    std::cout << "Nhap vao so ngay di duoc: "; std::cin >> soNgayDiDuoc;
}

void cChuyenXeNoiThanh::XuatThongTinChuyenXeNoiThanh()
{
    cChuyenXe::XuatThongTinChuyenXe();
    std::cout << std::setw(20) << noiDen << std::setw(20) << soNgayDiDuoc;
}
