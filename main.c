#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define R_min 5
#define R 10

int main()
{
    int r, teta, fi,om;
    double teta_rad, light = 0, fi_rad, x, y, z,min = 1000, om_rad;
    char Lights[10] = {'.',',',':',';','^','*','#','$','@','&'};
    printf("hello");
    /*for(r = R_min; r <= R; r++){
        /*for(x = R - r; x <= R + r; x++){
            y = sqrt(r*r - pow(x - ox,2));
            gotoxy(x*2 + 1,y + oy + 1); printf("..");
            gotoxy(x*2 + 1,-y + oy + 1); printf("..");
        }
        /*for(y = R - r; y <= R + r; y++){
            x = sqrt(r*r - pow(y - oy,2));
            gotoxy((x + ox)*2 + 1,y + 1); printf("..");
            gotoxy((-x + ox)*2 + 1,y + 1); printf("..");
        }*/
        /*for(teta = 0; teta < 360; teta++){
            teta_rad = ((float)teta/180) * M_PI;
            x = R + (float)r*cos(teta_rad);
            y = R + (float)r*sin(teta_rad);
            z = R + (float)r*sin(teta_rad);
            gotoxy((int)x*2 + 7, (int)y + 2); printf(".");
        }
    }*/
    //for(om = 0; om < 360; om++){
        //om_rad = ((float)om/180) * M_PI;
        for(fi = 0; fi < 360; fi++){
            fi_rad = ((float)fi/180) * M_PI;
            for(teta = 0; teta < 360; teta++){
                //printf("hna ");
                teta_rad = ((float)teta/180) * M_PI;
                x = (R + R_min*cos(teta_rad))*cos(fi_rad);
                y = R + R_min*sin(teta_rad);
                z = -(R + R_min*cos(teta_rad))*sin(fi_rad);
                light = (y - z + 7)/3.5;
                gotoxy(-z*2 + 4*R + 1, x + R*2); printf("%c",Lights[(int)light]);
                //light = (y - z > light)? y - z: light;
                min = (z - x < min)? z - x: min;
                }
            //clrscr();
        }
        getch();
        clrscr();
    //§}
    printf("%.02f, %.02f",light,min);
    getch();
    return 0;
}
