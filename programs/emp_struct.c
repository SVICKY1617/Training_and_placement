#include<stdio.h>

struct emp {
    int id;
    char name[20], dep[10], des[10];
    float bp, hra, da, ma, allow, det, gpay, netpay, pf, lic;
}s[5];

int main() {
    int i, n = 2;
    for(i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter department: ");
        scanf("%s", s[i].dep);
        printf("Enter designation: ");
        scanf("%s", s[i].des);
        printf("Enter Basic Pay: ");
        scanf("%f", &s[i].bp);
        s[i].hra = s[i].bp * 15 / 100;
        s[i].da = s[i].hra;
        s[i].ma = s[i].hra;
        s[i].pf = s[i].bp * 12 / 100;
        s[i].lic = s[i].pf;
        s[i].allow = s[i].hra + s[i].da + s[i].ma;
        s[i].det = s[i].pf + s[i].lic;
        s[i].gpay = s[i].bp + s[i].allow;
        s[i].netpay = s[i].gpay - s[i].det;
        printf("-------------------------------------------------------\n");
    }
    printf("The list of employee: \n");
    printf("-------------------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d\nName: %s\nDepartment: %s\nDesignation: %s\nBasic Pay: %.2f\nHRA: %.2f\nDA: %.2f\nMA: %.2f\nPF: %.2f\nLIC: %.2f\nAllowance: %.2f\nReduction: %.2f\nGross Pay: %.2f\nNetpay: %.2f\n-------------------------------------------------------\n", s[i].id, s[i].name, s[i].dep, s[i].des, s[i].bp, s[i].hra, s[i].da, s[i].ma, s[i].pf, s[i].lic, s[i].allow, s[i].det, s[i].gpay, s[i].netpay);
    }
    return 0;
}


/*
Enter ID: 234
Enter name: aaa
Enter department: development
Enter designation: developer
Enter Basic Pay: 30000
-------------------------------------------------------
Enter ID: 456
Enter name: bbb
Enter department: production
Enter designation: seller
Enter Basic Pay: 25000
-------------------------------------------------------
The list of employee:
-------------------------------------------------------
ID: 234
Name: aaa
Department: developmendeveloper
Designation: developer
Basic Pay: 30000.00
HRA: 4500.00
DA: 4500.00
MA: 4500.00
PF: 3600.00
LIC: 3600.00
Allowance: 13500.00
Reduction: 7200.00
Gross Pay: 43500.00
Netpay: 36300.00
-------------------------------------------------------
ID: 456
Name: bbb
Department: productionseller
Designation: seller
Basic Pay: 25000.00
HRA: 3750.00
DA: 3750.00
MA: 3750.00
PF: 3000.00
LIC: 3000.00
Allowance: 11250.00
Reduction: 6000.00
Gross Pay: 36250.00
Netpay: 30250.00
-------------------------------------------------------

--------------------------------
*/
