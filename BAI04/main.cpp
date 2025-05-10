#include "Bai04.cpp"

int main() {
    vector<SinhVienCaoDang> danhSachCaoDang;
    vector<SinhVienDaiHoc> danhSachDaiHoc;

    int luaChon;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Nhap danh sach sinh vien cao dang\n";
        cout << "2. Nhap danh sach sinh vien dai hoc\n";
        cout << "3. Xuat danh sach sinh vien\n";
        cout << "4. Xuat danh sach sinh vien du dieu kien tot nghiep\n";
        cout << "5. Xuat danh sach sinh vien KHONG du dieu kien tot nghiep\n";
        cout << "6. Sinh vien dai hoc co diem trung binh cao nhat\n";
        cout << "0. Thoat\n";
        cout << "===========================\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;
        cin.ignore();

        if (luaChon == 1) {
            int soLuong;
            cout << "Nhap so sinh vien cao dang: ";
            cin >> soLuong;
            cin.ignore();
            for (int i = 0; i < soLuong; i++) {
                SinhVienCaoDang sv;
                cout << "\nNhap thong tin sinh vien cao dang thu " << i + 1 << ":\n";
                sv.nhap();
                danhSachCaoDang.push_back(sv);
            }
        } else if (luaChon == 2) {
            int soLuong;
            cout << "Nhap so sinh vien dai hoc: ";
            cin >> soLuong;
            cin.ignore();
            for (int i = 0; i < soLuong; i++) {
                SinhVienDaiHoc sv;
                cout << "\nNhap thong tin sinh vien dai hoc thu " << i + 1 << ":\n";
                sv.nhap();
                danhSachDaiHoc.push_back(sv);
            }
        } else if (luaChon == 3) {
            cout << "\n=== Danh sach sinh vien cao dang ===\n";
            for (int i = 0; i < danhSachCaoDang.size(); i++) {
                danhSachCaoDang[i].xuat();
            }
            cout << "\n=== Danh sach sinh vien dai hoc ===\n";
            for (int i = 0; i < danhSachDaiHoc.size(); i++) {
                danhSachDaiHoc[i].xuat();
            }
        } else if (luaChon == 4) {
            cout << "\n=== Sinh vien cao dang du dieu kien tot nghiep ===\n";
            for (int i = 0; i < danhSachCaoDang.size(); i++) {
                if (danhSachCaoDang[i].duDieuKienTotNghiep()) {
                    danhSachCaoDang[i].xuat();
                }
            }
            cout << "\n=== Sinh vien dai hoc du dieu kien tot nghiep ===\n";
            for (int i = 0; i < danhSachDaiHoc.size(); i++) {
                if (danhSachDaiHoc[i].duDieuKienTotNghiep()) {
                    danhSachDaiHoc[i].xuat();
                }
            }
        } else if (luaChon == 5) {
            cout << "\n=== Sinh vien cao dang KHONG du dieu kien tot nghiep ===\n";
            for (int i = 0; i < danhSachCaoDang.size(); i++) {
                if (!danhSachCaoDang[i].duDieuKienTotNghiep()) {
                    danhSachCaoDang[i].xuat();
                }
            }
            cout << "\n=== Sinh vien dai hoc KHONG du dieu kien tot nghiep ===\n";
            for (int i = 0; i < danhSachDaiHoc.size(); i++) {
                if (!danhSachDaiHoc[i].duDieuKienTotNghiep()) {
                    danhSachDaiHoc[i].xuat();
                }
            }
        } else if (luaChon == 6) {
            if (danhSachDaiHoc.size() > 0) {
                float maxDiem = danhSachDaiHoc[0].layDiemTrungBinh();
                int viTri = 0;
                for (int i = 1; i < danhSachDaiHoc.size(); i++) {
                    if (danhSachDaiHoc[i].layDiemTrungBinh() > maxDiem) {
                        maxDiem = danhSachDaiHoc[i].layDiemTrungBinh();
                        viTri = i;
                    }
                }
                cout << "\nSinh vien dai hoc co diem trung binh cao nhat:\n";
                danhSachDaiHoc[viTri].xuat();
            } else {
                cout << "Chua co sinh vien dai hoc nao.\n";
            }
        }

    } while (luaChon != 0);

    return 0;
}