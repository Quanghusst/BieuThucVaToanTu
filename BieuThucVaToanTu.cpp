#include<iostream>
#include<math.h>
using namespace std;
/*In giá tri cua N!*
long long giaiThua(long n){
	if(n == 0)	return 1;
	else	return n*giaiThua(n-1);
}
int main(){
	long n=3;
	cout << "n = "; cin >> n;
	cout << "n! = " << giaiThua(n);
}
/*In giá tri cua x mu n*
int main(){
	double x = 2, n = -8, s = 1;
	cout << "Nhap co so x: "; cin >> x;
	cout << "Nhap so mu n: "; cin >> n;
	for(int i = 0; i < abs(n); i++)
		s *= x;
	n > 0 ? 
	 	cout <<x << "^" << n << "=" << s:
	 	cout <<x << "^(" << n << ")="  << 1/s;
}
/*In giá tri cua tong S = 1 + ½ + ¼ + … + 1/2n?*
double tongNgichDao(double n){
	if(n == 1)	return 1.5;
	else	return 1/(2*n) + tongNgichDao(n-1);
}
int main (){
	double n = 4;
	do{
			cout << "Nhap n = "; cin >> n;
	}while(n < 0);

	
	if(n <= 3){
		printf("1 + 1/2");
		for(int i = 2; i <= n; i++)
			cout << " + 1/" << 2*i;
		cout << " = " << tongNgichDao(n);
		
	}else{
		cout << "1/2 + ... + 1/" << 2*(n-1) << " + 1/"<< 2*n << " = "<< tongNgichDao(n);
	}
	return 0;
	cout << tongNgichDao(n);
}
/*Xác dinh tính nguyên to cua so nguyên x?*
int main () {
	int n = 5,  count = 0;
	cout << "Nhap n: "; cin >> n;
	
	for(int i = 2; i <= n; i++){
		if(n%i == 0)	count++;
	}
	if(count == 1)	cout << "La so nguyen to";
	else	cout << "Khong la so nguyen to";
	return 0;
}

/*Tính to hop C(k, n)*
long long toHop(long k, long n){
	if(k == 0 || k == n)	return 1;
	else return	toHop(k-1, n-1) + toHop(k, n-1);
}
int main (){
	long k = 3, n = 10;
	cout << "Nhap k = "; cin >> k;
	cout << "Nhap n = "; cin >> n;
	cout << "Ket qua "<< n << "C" << k << " = "<<toHop(k, n);
	return 0;
}

/*In giá tri nhi phân cua so nguyên 1 byte ra màn hình 01010101 = 85*
#include <iostream>

int main() {
    int negative_number =   24;
    for (int i = 7; i >= 0; i--) {
        int bit = (negative_number >> i) & 1;
		cout << bit;
    }
	cout << endl;
    return 0;
}
/*Nhap dãy so nguyên cho den khi giá tri nhap vào bang 0, in ra so nho nhat và lon nhat (tru so 0)?*
int main (){
	int n, max, min;
	cin >> n;
	min = n;	
	max = n;
	do{	
		cin >> n;
		if(n != 0){			
			if(n < min)		min = n;
			if(n > max)		max = n;
		}	
	}while(n != 0);
	
	cout << "MAX = " << max << endl;
	cout << "MIN = " << min;
}
/*Nhap dãy so nguyên cho den khi giá tri nhap vào bang 0, in ra so so chan, so so le và so các so chia het cho 8 (tru so 0)?*
int main (){
	int n, count_odd = 0, count_even = 0, count_divisible_by_8 = 0;
	do{	
		cin >> n;
		if(n != 0){			
			if(n & 1)	count_odd++;
			else		count_even++;
			if(n & 8 == 8)	count_divisible_by_8++;
		}	
	}while(n != 0);
	
	cout <<"So so chia het cho 8: " << count_divisible_by_8 << endl;
	cout <<"So so chan: " << count_even << endl;
	cout <<"So so le: " << count_odd;
}
/*In N so dau tiên cua dãy Fibonacci?*
int fibonacci(int n){
	if(n == 1 || n == 2)	return 1;
	else					return fibonacci(n - 1) + fibonacci(n - 2);
}
int main (){
	int n;
	cout << "Nhap n: "; cin >> n;
	for(int i = 1; i <= n; i++){
		cout << fibonacci(i) << " ";
	}
}

/*Xác dinh mot so nguyên nhap tu bàn phím có nam trong dãy Fibonacci hay không?*
int fibonacci(int n){
	if(n == 1 || n == 2)	return 1;
	else					return fibonacci(n - 1) + fibonacci(n - 2);
}
int main (){
	int n = 3;
	cout << "Nhap n: "; cin >> n;
	
	for(int i = 1; i <= n+1; i++){
		if(fibonacci(i) == n){
			cout << n << " la so fibonacci";
			return 0;
		}else{
			cout << n << " khong la so fibonacci";
			return 0;
		}
	}
}

/*Tính can bac 2 cua so nguyên bat ki bang Babylonian Method voi sai so 1E-8?*
int main (){
	double n = 12;
	double mong_doi = n/2;
	cout << "Nhap n: "; cin >> n;
	for(int i = 0; i < 7; i++){
		mong_doi += (mong_doi + n/mong_doi)/2;
	}
	cout << "sqrt(" << n << ") = " << mong_doi;
	return 0;
}

/*Nhap vào 4 so nguyên có 1 chu so. In ra can bac 2 cua so nguyên tao thành tu 4 chu so dó.?*
int main (){
	double n, so4ChuSo = 0;
	cout << "Nhap tung chu so" << endl;
	for(int i = 0; i < 4; i++){
		cin >> n;
		so4ChuSo += n*pow(10, i);
	}
	double mong_doi = so4ChuSo/2;
	for(int i = 0; i < 10; i++){
		mong_doi = (mong_doi + so4ChuSo/mong_doi)/2;
	}
	cout << "sqrt(" << so4ChuSo << ") = " << mong_doi;
	return 0;
}
/*In ra màn hình các so tu 1 den M x N duoi dang ma tran?*
int main (){
	int M = 4, N = 5, k = 1;
	cout << "Nhap M: "; cin >> M;
	cout << "Nhap N: "; cin >> N;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cout << k << " ";
			k++;
		}
		cout << endl;
	}
}

/*Tìm dang cua tam giác neu biet bình phuong 3 canh cua tam giác dó?*/
int main () {
	int a = 1, b = 1, c = 1;
	cout << "Nhap binh phuong canh a: "; cin >> a;
	cout << "Nhap binh phuong canh b: "; cin >> b;
	cout << "Nhap binh phuong canh c: "; cin >> c;
	
	int vuong = (a == b + c)*1	+	(b == a + c)*2 	+ (c == b + a)*4;
	int can	  = (b == c)*1		+ 	(c == a)*2		+ (a == b)*4;
	int flag = vuong | can;
	cout << "tam giac ";
	
	switch(flag){
		case 0: cout << "thuong";break;
		case 7: cout << "deu"; break;
		default:
			if(vuong)	cout << "vuong ";
			if(can)		cout << "can ";
		 	cout << "tai " << (char)(flag / 2 + 65);
	}
	return 0;
}

/*In các chu cái hoa, chu cái thuong và các chu so kèm theo mã ASCII cua chúng?*
int main (){
	for(int i = 65; i <= 90; i++){
		cout << i << " " << (char)i << "  " 
		<< i+32 << " " << (char)(i+32) << endl;
	}
}
