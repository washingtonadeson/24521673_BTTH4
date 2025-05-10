#include "Bai04.h"

void SinhVien::nhapThongTin() {
    cout << "Nhap ma so sinh vien: ";
    getline(cin, maSoSinhVien);
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
    cout << "Nhap tong so tin chi: ";
    cin >> tongSoTinChi;
    cout << "Nhap diem trung binh: ";
    cin >> diemTrungBinh;
    cin.ignore();
}

void SinhVien::xuatThongTin() {
    cout << left << setw(15) << maSoSinhVien
         << setw(25) << hoTen
         << setw(20) << diaChi
         << setw(10) << tongSoTinChi
         << setw(10) << diemTrungBinh;
}

float SinhVien::layDiemTrungBinh() {
    return diemTrungBinh;
}

void SinhVienCaoDang::nhap() {
    nhapThongTin();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemThiTotNghiep;
    cin.ignore();
}

void SinhVienCaoDang::xuat() {
    xuatThongTin();
    cout << setw(15) << diemThiTotNghiep << "(Cao dang)" << endl;
}

int SinhVienCaoDang::duDieuKienTotNghiep() {
    return (tongSoTinChi >= 110 && diemTrungBinh >= 5 && diemThiTotNghiep >= 5);
}

void SinhVienDaiHoc::nhap() {
    nhapThongTin();
    cout << "Nhap ten luan van: ";
    getline(cin, tenLuanVan);
    cout << "Nhap diem luan van: ";
    cin >> diemLuanVan;
    cin.ignore();
}

void SinhVienDaiHoc::xuat() {
    xuatThongTin();
    cout << setw(25) << tenLuanVan
         << setw(10) << diemLuanVan << "(Dai hoc)" << endl;
}

int SinhVienDaiHoc::duDieuKienTotNghiep() {
    return (tongSoTinChi >= 145 && diemTrungBinh >= 5 && diemLuanVan >= 5);
}