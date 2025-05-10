#include "Bai02.cpp"

void Menu()
{
    std::cout << "\n-------------------------------------------------------------\n";
    std::cout << "1. Nhập thông tin Sách giáo khoa, Sách tham khảo\n";
    std::cout << "2. Xuất thông tin Sách giáo khoa, Sách tham khảo\n";
    std::cout << "3. Tính thành tiền Sách giáo khoa, Sách tham khảo\n";
    std::cout << "4. Tính tổng thành tiền cho từng loại\n";
    std::cout << "5. Tính trung bình cộng đơn giá của các sách tham khảo\n";
    std::cout << "6. Xuất ra các sách giáo khoa của nhà xuất bản K (cho nhập K)\n";
    std::cout << "7. Nhan phim 7 de thoat chon\n";
    std::cout << "-------------------------------------------------------------\n";
    std::cout << "Moi ban chon: ";
}

double TinhTongThanhTienSGK(cSGK sgk[], int n)
{
    double tong = 0.0;

    for(int i = 0; i < n; i++)
    {
        tong += sgk[i].getThanhTien();
    }

    return tong;
}

double TinhTongThanhTienSTK(cSTK stk[], int n)
{
    double tong = 0.0;

    for(int i = 0; i < n; i++)
    {
        tong += stk[i].getThanhTien();
    }

    return tong;
}

double TinhTBCDonGiaSTK(cSTK stk[], int n)
{
    double tong = 0.0;

    for(int i = 0; i < n; i++)
    {
        tong += stk[i].getDonGia();
    }

    return 1.0 * tong / n;
}

void XuatDanhSachSGKCuaNhaXB(cSGK sgk[], int n)
{
    std::string nxb;

    std::cout << "Nha xuat ban: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, nxb);

    std::cout << "Xuat cac sach giao khoa cua nha xuat ban " << nxb << "\n";
    for(int i = 0; i < n; i++)
        if(nxb == sgk[i].getNhaXuatBan())
        {
            std::cout << std::setw(20) << "Ma sach" << std::setw(20) << "Ngay nhap" << std::setw(20) << "Don gia" << std::setw(20) << "So luong" << std::setw(20) << "Nha xuat ban" << std::setw(20) << "Thanh tien" << std::setw(20) << "Tinh trang" << '\n';
            sgk[i].XuatThongTinSGK();
        }
}

void QuanLy()
{
    cSGK sgk[3];  // chương trình minh họa, cho phép nhập mỗi loại 3 cuốn sách
    cSTK stk[3];
    int h = 0, i = h;
    int choice;

    Menu();
    std::cin >> choice;

    while(choice != 7)
    {
        switch(choice)
        {
        case 1:
            if(h == 3) break; // đúng 3 cuốn sách mỗi loại, hủy nhập
            i = h;
            std::cout << "Nhap vao thong tin sgk\n";
                sgk[h].NhapThongTinSGK();

            std::cout << "\nNhap vao thong tin stk\n";
                stk[h].NhapThongTinSTK();

            ++h;

            break;

        case 2:
            std::cout << "Xuat thong tin sgk\n";
            {
                std::cout << std::setw(20) << "Ma sach" << std::setw(20) << "Ngay nhap" << std::setw(20) << "Don gia" << std::setw(20) << "So luong" << std::setw(20) << "Nha xuat ban" << std::setw(20) << "Thanh tien" << std::setw(20) << "Tinh trang" << '\n';
                sgk[i].XuatThongTinSGK();
            }

            std::cout << "Xuat thong tin stk\n";
            {
                std::cout << std::setw(20) << "Ma sach" << std::setw(20) << "Ngay nhap" << std::setw(20) << "Don gia" << std::setw(20) << "So luong" << std::setw(20) << "Nha xuat ban" << std::setw(20) << "Thanh tien" << std::setw(20) << "Thue" << '\n';
                stk[i].XuatThongTinSTK();
            }

            break;

        case 3:
            std::cout << "Thanh tien sgk: " << "$" << sgk[i].TinhThanhTienSGK() << '\n';
            std::cout << "Thanh tien stk: " << "$" << stk[i].TinhThanhTienSTK() << '\n';

            break;

        case 4:
            std::cout << "Danh sach sgk\n";
            for(int k = 0; k <= i; k++)
            {
                std::cout << std::setw(20) << "Ma sach" << std::setw(20) << "Ngay nhap" << std::setw(20) << "Don gia" << std::setw(20) << "So luong" << std::setw(20) << "Nha xuat ban" << std::setw(20) << "Thanh tien" << std::setw(20) << "Tinh trang" << '\n';
                sgk[k].XuatThongTinSGK();
            }

            std::cout << "Tong thanh tien cac sgk: " << "$" << TinhTongThanhTienSGK(sgk, i + 1) << '\n';

            std::cout << "Danh sach stk\n";
            for(int k = 0; k <= i; k++)
            {
                std::cout << std::setw(20) << "Ma sach" << std::setw(20) << "Ngay nhap" << std::setw(20) << "Don gia" << std::setw(20) << "So luong" << std::setw(20) << "Nha xuat ban" << std::setw(20) << "Thanh tien" << std::setw(20) << "Thue" << '\n';
                stk[k].XuatThongTinSTK();
            }

            std::cout << "Tong thanh tien cac stk: " << "$" << TinhTongThanhTienSTK(stk, i + 1) << '\n';

            break;

        case 5:
            std::cout << "Danh sach stk\n";
            for(int k = 0; k <= i; k++)
            {
                std::cout << std::setw(20) << "Ma sach" << std::setw(20) << "Ngay nhap" << std::setw(20) << "Don gia" << std::setw(20) << "So luong" << std::setw(20) << "Nha xuat ban" << std::setw(20) << "Thanh tien" << std::setw(20) << "Thue" << '\n';
                stk[k].XuatThongTinSTK();
            }

            std::cout << "Trung bình cộng đơn giá của các sách tham khảo: " << "$" << TinhTBCDonGiaSTK(stk, i + 1) << '\n';

            break;

        case 6:
            XuatDanhSachSGKCuaNhaXB(sgk, i + 1);
            break;

        default:
            std::cout << "Invalid enter!!\n";
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