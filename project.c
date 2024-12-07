#include <stdio.h>
//1
void arrInput(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
//2
void arrPrint(int arr[], int n) {
     for(int i = 0; i < n; i++) {
        printf("arr[%d]\n", arr[i]);
    }
}
//3
void arrPerfect(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = 1; j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                temp += j;
            }
        }
        if(temp == arr[i]) {
            count++;
        }

    }
    printf("so luong hoan hao la: %d\n", count);
}
//4
void arrPrime(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        int check = 0;
        for(int j = arr[i]; j >= 0; j--) {
            if(arr[i] % j == 0) {
                check++;
            }
        }
        if(check == 2) {
            count++;
        }
    }
    printf("so luong ngyen to la: %d\n", count);
}
//5
void arrSecondMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    int max1 = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] != max) {
            if(arr[i] > max1) {
                max1 = arr[i];
            }
        }
    }
    printf("phan tu lon thu 2 la: %d\n", max1);
}
//6
void arrSecondMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    int min2 = min + 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] != min) {
            if(arr[i] < min2) {
                min2 = arr[i];
            }
        }
    }
    printf("phan tu be thu 2 la: %d\n", min2);
}
//7
void arrAdd(int arr[], int n, int pos) {
    for(int i = n - 1; i > 0; i--) {
        arr[i + 1] = arr[i];
        if(i == pos) {
            printf("Gia tri them vao: ");
            scanf("%d", &arr[i]);
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
//8
void arrMinus(int arr[], int n, int pos) {
    for(int i = pos; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
//9
void arrSortingUp(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while( j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
//10
void arrSortingDown(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while( j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}
//11
void arrFind(int arr[], int n, int pos) {
    int right = n - 1;
    int left = 0;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == pos){
            printf("Phan tu nam tai vi tri: %d", mid + 1);
            break;
        }else if(arr[mid] > pos) {
            right = mid - 1;
        }else {
            left = mid + 1;
        }
    }
}
//12
void arr12(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int temp = arr[i];
        int index = 0;
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }else if(temp == arr[j]){
                for(int l = i; l < n; l++){
                    arr[l] = arr[l + 1];
                }
                n--;
            }

        }
    }
    for(int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}
//13
void arrEvenOdd(int arr[], int n) {
    int k = 0;
    int temp;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k++;
        }
    }
    for(int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
}
//14
void arr13(int arr[], int n) {
    for(int i = 0; i < n / 2 ; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = temp;
    }
    for(int i = 1; i < n + 1 ; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int menu, menu1;
    int n, pos, upcheck = 0;
    int arr[100];
    menu:
    do {
        printf("\n\tMENU\n");
        printf("1.Nhap so luong va gia tri cho cac phan tu\n");
        printf("2.In mang\n");
        printf("3.Dem so hoan hao\n");
        printf("4.Dem so nguyen to\n");
        printf("5.Tim gia tri lon thu 2\n");
        printf("6.Tim gia tri nho thu 2\n");
        printf("7.Them phan tu vao vi tri..\n");
        printf("8.Xoa phan tu\n");
        printf("9.Sap xep mang tang dan(Insertion sort)\n");
        printf("10.Sap xep mang giam dan(...)\n");
        printf("11.Tim phan tu(Bynary search)\n");
        printf("12.Xoa phan tu trung lap in phan tu doc nhat\n");
        printf("13.Sap xep va hien thi so chan truoc so le sau\n");
        printf("14.Dao nguoc mang\n");
        printf("15.Thoat\n");
        printf("Enter your number: ");
        scanf("%d", &menu);
    }while (menu > 15 || menu < 1);

    switch (menu) {
        case 1:
            printf("Nhap so phan tu can nhap: ");
            scanf("%d", &n);
            arr[n];
            arrInput(arr, n);
            goto menu1;
            break;
        case 2:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrPrint(arr, n);
            goto menu1;
            break;
        case 3:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrPerfect(arr, n);
            goto menu1;
            break;
        case 4:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrPrime(arr, n);
            goto menu1;
            break;
        case 5:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrSecondMax(arr, n);
            goto menu1;
            break;
        case 6:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrSecondMin(arr, n);
            goto menu1;
            break;
        case 7:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            printf("Nhap vi tri can them: ");
            scanf("%d", &pos);
            pos--;
            arrAdd(arr, n, pos);
            goto menu1;
            break;
        case 8:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &pos);
            pos--;
            arrMinus(arr, n, pos);
            goto menu1;
            break;
        case 9:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            find:
            arrSortingUp(arr, n);
            upcheck = 1;
            goto menu1;
            break;
        case 10:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrSortingDown(arr, n);

            break;
        case 11:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            if(upcheck == 0) {
                printf("Can xap xep lai mang(9)");
                goto menu1;
            }
            printf("Nhap phan tu can tim: ");
            scanf("%d", &pos);
            arrFind(arr, n, pos);
            goto menu1;
            break;
        case 12:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arr12(arr, n);
            goto menu1;
            break;
        case 13:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arrEvenOdd(arr, n);
            goto menu1;
            break;
        case 14:
            if(n == 0) {
                printf("---chua nhap mang!!!---\n");
                goto menu1;
            }
            arr13(arr, n);
            goto menu1;
            break;
        case 15:
            printf("Da thoat !!");
            return 0;
            printf("\n");
            menu1:
            do {
                printf("\n");
                printf("1.Back to menu\n");
                printf("2.Exit\n");
                scanf("%d", &menu1);
            }while (menu1 != 1 && menu1 != 2);
            if(menu1 == 1){
                goto menu;
            }else {
                return 0;
            }
            break;

    }
}
