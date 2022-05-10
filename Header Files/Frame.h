#include "Header.h" 

// Su dung thu vien Window.h de goi duoc toa do cua x , y tren console . Giup di chuyen chuyen den vi tri bat
//ki tren console
void gotoxy(int x, int y)
{
	static HANDLE h = NULL;
	if (!h)
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
}

/*---------------------------------------------------------------------------------
* Tao khung
- Su dung gotoxy de den toa do can tao
- Su dung ki tu dat biet trong bang ma ascii : 205 , 186 de tao khung
*/
void taoKhung(int nx, int ny1, int ny2, int dx1, int dx2, int dy, int n, int d)
{
	gotoxy(nx, ny1);
	for (int i = 0; i < n; i++)
	{
		printf("%c", 205);
	}
	gotoxy(nx, ny2);
	for (int i = 0; i < n; i++)
	{
		printf("%c", 205);
	}
	gotoxy(dx1, dy);
	for (int i = dy + 1; i < (dy + 1) + d; i++)
	{
		printf("%c", 186);
		gotoxy(dx1, i);
	}
	gotoxy(dx2, dy);
	for (int i = dy + 1; i < (dy + 1) + d; i++)
	{
		printf("%c", 186);
		gotoxy(dx2, i);
	}
	gotoxy(dx1, ny1); printf("%c", 201); // cai moc cau ben trai tren
	gotoxy(dx1, ny2); printf("%c", 200); //Ben trai duoi
	gotoxy(dx2, ny1); printf("%c", 187); // cai moc cau ben phai ben tre^n
	gotoxy(dx2, ny2); printf("%c", 188); // cai moc cau ben phai ben duoi
}
// Mot so khung tao rieng vi co xu li nhan ki tu tu ban phim
void taoKhungDungSai(int x, int arr)
{
	switch (x)
	{
	case 1:
		hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsoleColor, 7);
		taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
		gotoxy(16, 20);
		cout << "Day la phuong an cuoi cung cua ban ? ";
		if (arr == 1) {
			SetConsoleTextAttribute(hConsoleColor, 143);
			gotoxy(23, 24);
			cout << "DUNG";
		}
		else {
			SetConsoleTextAttribute(hConsoleColor, 7);
			gotoxy(23, 24);
			cout << "DUNG";
		}
		if (arr == 2) {
			SetConsoleTextAttribute(hConsoleColor, 143);
			gotoxy(40, 24);
			cout << "KHONG";
		}
		else {
			SetConsoleTextAttribute(hConsoleColor, 7);
			gotoxy(40, 24);
			cout << "KHONG";
		}
		SetConsoleTextAttribute(hConsoleColor, 7);
		break;
	case 2:
		hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsoleColor, 10);
		taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
		gotoxy(29, 21);
		cout << "DAP AN DUNG";
		SetConsoleTextAttribute(hConsoleColor, 39);
		gotoxy(26, 24);
		cout << "CAU HOI TIEP THEO";
		SetConsoleTextAttribute(hConsoleColor, 7);
		break;
	case 3:
		hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsoleColor, 4);
		taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
		gotoxy(19, 20);
		cout << "DAP AN SAI ! BAN DA DUNG CUOC CHOI";
		gotoxy(22, 21);
		cout << "BAN NHAN DUOC SO TIEN LA : ";
		gotoxy(30, 22);
		if (md <= 5) cout << "0 VND";
		else if (md > 5 && md <= 10) cout << md5;
		else if (md > 10) cout << md10;
		if (arr == 1) {
			SetConsoleTextAttribute(hConsoleColor, 196);
			gotoxy(23, 24);
			cout << "CHOI LAI";
		}
		else {
			SetConsoleTextAttribute(hConsoleColor, 4);
			gotoxy(23, 24);
			cout << "CHOI LAI ";
		}
		if (arr == 2) {
			SetConsoleTextAttribute(hConsoleColor, 196);
			gotoxy(40, 24);
			cout << "THOAT";
		}
		else {
			SetConsoleTextAttribute(hConsoleColor, 4);
			gotoxy(40, 24);
			cout << "THOAT";

		}
		SetConsoleTextAttribute(hConsoleColor, 7);
		break;
	}
}
void taoKhungTg2(int arr)
{
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, 7);
	taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
	gotoxy(17, 19);
	cout << "Ban muon noi day ket noi den ai ? ";
	if (arr == 1) {
		SetConsoleTextAttribute(hConsoleColor, 143);
		gotoxy(18, 20);
		cout << "Ba , me";
	}
	else {
		SetConsoleTextAttribute(hConsoleColor, 7);
		gotoxy(18, 20);
		cout << "Ba , me";
	}
	if (arr == 2) {
		SetConsoleTextAttribute(hConsoleColor, 143);
		gotoxy(18, 21);
		cout << "Vo/Chong";
	}
	else {
		SetConsoleTextAttribute(hConsoleColor, 7);
		gotoxy(18, 21);
		cout << "Vo/Chong";
	}
	if (arr == 3) {
		SetConsoleTextAttribute(hConsoleColor, 143);
		gotoxy(18, 22);
		cout << "Ban gai/Ban trai";
	}
	else {
		SetConsoleTextAttribute(hConsoleColor, 7);
		gotoxy(18, 22);
		cout << "Ban gai/Ban trai";
	}
	if (arr == 4) {
		SetConsoleTextAttribute(hConsoleColor, 143);
		gotoxy(18, 23);
		cout << "Ban than ";
	}
	else {
		SetConsoleTextAttribute(hConsoleColor, 7);
		gotoxy(18, 23);
		cout << "Ban than";
	}
	SetConsoleTextAttribute(hConsoleColor, 7);
}
void taoKhungTg3(char dapan[], int x)
{
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, 10);
	taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
	gotoxy(18, 19);
	cout << "Dap an khan gia dua ra la : ";
	gotoxy(18, 20);
	cout << "1 ." << dapan;
	gotoxy(18, 21);
	cout << "2 ." << dapan;
	gotoxy(18, 22);
	printf("3 .%c", x - 32);
	gotoxy(18, 23);
	//cout << "4 ." << dapan << endl;
	SetConsoleTextAttribute(hConsoleColor, 39);
	gotoxy(28, 24);
	cout << "CHAP NHAN";
	SetConsoleTextAttribute(hConsoleColor, 7);
	phimBatKi() ;
}
void taoKhungTg4(int a, int b, int c, int d, char x[])
{
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, 10);
	taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
	gotoxy(18, 19);
	cout << "Dap an to tu van dua ra la : ";

	if (strcmpi(x, "A") == 0)
	{
		gotoxy(18, 20);
		cout << "A ." << a << "%";
		gotoxy(18, 21);
		cout << "B ." << b << "%";
		gotoxy(18, 22);
		cout << "C ." << c << "%";
		gotoxy(18, 23);
		cout << "D ." << d << "%";
		SetConsoleTextAttribute(hConsoleColor, 39);
		gotoxy(28, 24);
		cout << "CHAP NHAN";
		SetConsoleTextAttribute(hConsoleColor, 7);
		phimBatKi() ;
	}
	else if (strcmpi(x, "B") == 0)
	{
		gotoxy(18, 20);
		cout << "A ." << b << "%";
		gotoxy(18, 21);
		cout << "B ." << a << "%";
		gotoxy(18, 22);
		cout << "C ." << c << "%";
		gotoxy(18, 23);
		cout << "D ." << d << "%";
		SetConsoleTextAttribute(hConsoleColor, 39);
		gotoxy(28, 24);
		cout << "CHAP NHAN";
		SetConsoleTextAttribute(hConsoleColor, 7);
		phimBatKi() ;
	}
	else if (strcmpi(x, "C") == 0)
	{
		gotoxy(18, 20);
		cout << "A ." << c << "%";
		gotoxy(18, 21);
		cout << "B ." << b << "%";
		gotoxy(18, 22);
		cout << "C ." << a << "%";
		gotoxy(18, 23);
		cout << "D ." << d << "%";
		SetConsoleTextAttribute(hConsoleColor, 39);
		gotoxy(28, 24);
		cout << "CHAP NHAN";
		SetConsoleTextAttribute(hConsoleColor, 7);
		phimBatKi() ;
	}
	else if (strcmpi(x, "D") == 0)
	{
		gotoxy(18, 20);
		cout << "A ." << d << "%";
		gotoxy(18, 21);
		cout << "B ." << b << "%";
		gotoxy(18, 22);
		cout << "C ." << c << "%";
		gotoxy(18, 23);
		cout << "D ." << a << "%";
		SetConsoleTextAttribute(hConsoleColor, 39);
		gotoxy(28, 24);
		cout << "CHAP NHAN";
		SetConsoleTextAttribute(hConsoleColor, 7);
		phimBatKi() ;
	}
}
void taoKhungDungCuocChoi(int arr)
{
	if (md > 5)
	{
		hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsoleColor, 4);
		taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
		gotoxy(19, 19);
		cout << "BAN MUON DUNG CUOC CHOI ?";
		gotoxy(19, 20);
		cout << "BAN DA VUOT QUA MOC CAU HOI SO " << md - 1;
		gotoxy(19, 21);
		cout << "BAN SE NHAN DUOC SO TIEN LA : ";
		gotoxy(27, 22);
		switch (md)
		{
		case 6: cout << md5; break;
		case 7: cout << md6; break;
		case 8: cout << md7; break;
		case 9: cout << md8; break;
		case 10: cout << md9; break;
		case 11: cout << md10; break;
		case 12: cout << md11; break;
		case 13: cout << md12; break;
		case 14: cout << md13; break;
		case 15: cout << md14; break;
		default: break;

		}
		if (arr == 1) {
			SetConsoleTextAttribute(hConsoleColor, 196);
			gotoxy(23, 24);
			cout << "CHOI TIEP";
		}
		else {
			SetConsoleTextAttribute(hConsoleColor, 4);
			gotoxy(23, 24);
			cout << "CHOI TIEP ";
		}
		if (arr == 2) {
			SetConsoleTextAttribute(hConsoleColor, 196);
			gotoxy(40, 24);
			cout << "DUNG";
		}
		else {
			SetConsoleTextAttribute(hConsoleColor, 4);
			gotoxy(40, 24);
			cout << "DUNG";

		}
	}
	else {
		hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsoleColor, 4);
		taoKhung(15, 18, 24, 14, 55, 19, 40, 5);
		gotoxy(19, 20);
		cout << "BAN CAN VUOT QUA MOC CAU HOI SO 5";
		gotoxy(19, 21);
		cout << "DE CO THEM QUYEN DUNG CUOC CHOI !!";
		SetConsoleTextAttribute(hConsoleColor, 196);
		gotoxy(29, 24);
		cout << "CHOI TIEP";

	}
	SetConsoleTextAttribute(hConsoleColor, 7);
}
void taoKhungChienThang(int arr)