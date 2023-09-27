// Dự án này quản lý sự tham dự của sinh viên
// Quản trị viên có thể đăng ký sinh viên và tạo tên người dùng 
// và mật khẩu cho sinh viên
// Sinh viên có thể đăng nhập, đánh dấu điểm danh
//  trong cùng ngày và cũng có thể xem lịch sử điểm danh
// Xin lưu ý tên người dùng của quản trị viên là: "admin", mật khẩu là "admin@2"
// Biên dịch trên trình biên dịch g++
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
using namespace std;
int adminView();
int adminLogin();
int adminLogin(){
    system("pause");
    cout <<"\n----------------------Admin Login--------------------";
    string username,password;
    cout <<"\nEnter username: ";
    cin >> username;
    cout <<"\nEnter password: ";
    cin >> password;
    if(username == "admin" && password == "admin@2"){
        adminView();
        getchar(); // nhan 1 phim trc khi ket thuc
    }
    else{
        cout <<"\nError ! Invalid Credintials....!";
        cout <<"\nPress any key for main menu "; //  Nhấn phím bất kỳ để vào menu chính
    }
}
int adminView(){
    int goBack=0;
    while (1)
    {
        system("cls"); 
        cout <<"\t\t\n 1 Register a Student "; // 1 Đăng ký một sinh viên
        cout <<"\t\t\n 2 Delete All students name registered "; // 2 Xóa tất cả tên sinh viên đã đăng ký
        cout <<"\t\t\n 3 Delete student by rollno ";  // 3 Xóa sinh viên bằng rollno
        cout <<"\t\t\n 4 Check List of Student registered by userame ";    // 4 Kiểm tra danh sách sinh viên đã đăng ký theo userame
        cout <<"\t\t\n 5 Check presense count of any student by Roll No "; // 5 Kiểm tra số lượng hiện diện của bất kỳ học sinh nào bằng Roll No
        cout <<"\t\t\n 6 Get List of student with their attendance count ";
        cout <<"\t\t\n 0 Go Back <- ";  // 6 Lấy danh sách học sinh cùng số điểm danh của họ
        int choice;
        cout <<"\n Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Register a student
            break;
         case 2:
            //Delete all
            break;
        case 3:
            // delete st by rollno
            break;
        case 4:
            // xem list  sinh vien dang ki theo admin
            break;
        case 5:
            // kiem tra so luong hien dien
            break;
        case 6: 
            // danh sach hoc sinh cung so diem dnah
        case  0:
            goBack == 0;
            break;
        default:
            cout <<"\nInvalid choice. Enter again";
            getchar();
            break;
        }
        if(goBack == 0)
        {break;}
    }
    return 0;
}
int main(){
    adminLogin();
    return 0;

}