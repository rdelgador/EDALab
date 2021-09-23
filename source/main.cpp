#include <iostream>
#include <random>
#include <vector>
#include <math.h>
#include <map>
#include <fstream>

using namespace std;

#define total_puntos 20000

class Puntos{
    public:
        int x;
        int y;
        int distancia_mayor;
        int distancia_menor;
        map<int,int> lista_distancias;
        map<int,double> lista_distancias_porcentaje;
        map<double,int> lista_distancias_porcentaje_total;

    Puntos(int puntox, int puntoy){

        x = puntox;
        y = puntoy;

    }

};

class Puntos5{
    public:
        int x;
        int y;
        int z;
        int a;
        int b;
        int distancia_mayor;
        int distancia_menor;
        map<int,int> lista_distancias;
        map<int,double> lista_distancias_porcentaje;
        map<double,int> lista_distancias_porcentaje_total;

    Puntos5(int puntox, int puntoy, int puntoz, int puntoa, int puntob){

        x = puntox;
        y = puntoy;
        z = puntoz;
        a = puntoa;
        b = puntob;

    }

};

class Puntos10{
    public:
        int x;
        int y;
        int z;
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;
        int distancia_mayor;
        int distancia_menor;
        map<int,int> lista_distancias;
        map<int,double> lista_distancias_porcentaje;
        map<double,int> lista_distancias_porcentaje_total;

    Puntos10(int puntox, int puntoy, int puntoz, int puntoa,int puntob, int puntoc, int puntod, int puntoe, int puntof, int puntog){

        x = puntox;
        y = puntoy;
        z = puntoz;
        a = puntoa;
        b = puntob;
        c = puntoc;
        d = puntod;
        e = puntoe;
        f = puntof;
        g = puntog;

    }

};

class Puntos15{
    public:
        int x;
        int y;
        int z;
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;
        int h;
        int i;
        int j;
        int k;
        int l;
        int distancia_mayor;
        int distancia_menor;
        map<int,int> lista_distancias;
        map<int,double> lista_distancias_porcentaje;
        map<double,int> lista_distancias_porcentaje_total;

    Puntos15(int puntox, int puntoy, int puntoz, int puntoa,int puntob, int puntoc, int puntod, int puntoe, int puntof, int puntog,
            int puntoh, int puntoi, int puntoj, int puntok, int puntol){

        x = puntox;
        y = puntoy;
        z = puntoz;
        a = puntoa;
        b = puntob;
        c = puntoc;
        d = puntod;
        e = puntoe;
        f = puntof;
        g = puntog;
        h = puntoh;
        i = puntoi;
        j = puntoj;
        k = puntok;
        l = puntol;

    }

};

class Puntos20{
    public:
        int x;
        int y;
        int z;
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;
        int h;
        int i;
        int j;
        int k;
        int l;
        int m;
        int n;
        int o;
        int p;
        int q;
        int distancia_mayor;
        int distancia_menor;
        map<int,int> lista_distancias;
        map<int,double> lista_distancias_porcentaje;
        map<double,int> lista_distancias_porcentaje_total;

    Puntos20(int puntox, int puntoy, int puntoz, int puntoa,int puntob, int puntoc, int puntod, int puntoe, int puntof, int puntog,
            int puntoh, int puntoi, int puntoj, int puntok, int puntol, int puntom, int punton, int puntoo, int puntop, int puntoq){

        x = puntox;
        y = puntoy;
        z = puntoz;
        a = puntoa;
        b = puntob;
        c = puntoc;
        d = puntod;
        e = puntoe;
        f = puntof;
        g = puntog;
        h = puntoh;
        i = puntoi;
        j = puntoj;
        k = puntok;
        l = puntol;
        m = puntom;
        n = punton;
        o = puntoo;
        p = puntop;
        q = puntoq;

    }

};

class Puntos25{
    public:
        int x;
        int y;
        int z;
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;
        int h;
        int i;
        int j;
        int k;
        int l;
        int m;
        int n;
        int o;
        int p;
        int q;
        int r;
        int s;
        int t;
        int u;
        int v;
        int distancia_mayor;
        int distancia_menor;
        map<int,int> lista_distancias;
        map<int,double> lista_distancias_porcentaje;
        map<double,int> lista_distancias_porcentaje_total;

    Puntos25(int puntox, int puntoy, int puntoz, int puntoa,int puntob, int puntoc, int puntod, int puntoe, int puntof, int puntog,
            int puntoh, int puntoi, int puntoj, int puntok, int puntol, int puntom, int punton, int puntoo, int puntop, int puntoq,
            int puntor, int puntos, int puntot, int puntou, int puntov){

        x = puntox;
        y = puntoy;
        z = puntoz;
        a = puntoa;
        b = puntob;
        c = puntoc;
        d = puntod;
        e = puntoe;
        f = puntof;
        g = puntog;
        h = puntoh;
        i = puntoi;
        j = puntoj;
        k = puntok;
        l = puntol;
        m = puntom;
        n = punton;
        o = puntoo;
        p = puntop;
        q = puntoq;
        r = puntor;
        s = puntos;
        t = puntot;
        u = puntou;
        v = puntov;

    }

};

void generar_puntos(vector<Puntos> &lista_puntos){

    const int range_from  = 1;
    const int range_to    = 1000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    for(int i = 0; i < total_puntos; i++){
        Puntos pnt(distr(generator),distr(generator));
        lista_puntos.push_back(pnt);
    }
}

void generar_puntos5(vector<Puntos5> &lista_puntos){

    const int range_from  = 1;
    const int range_to    = 1000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    for(int i = 0; i < total_puntos; i++){
        Puntos5 pnt(distr(generator),distr(generator),distr(generator),distr(generator),distr(generator));
        lista_puntos.push_back(pnt);
    }
}

void generar_puntos10(vector<Puntos10> &lista_puntos){

    const int range_from  = 1;
    const int range_to    = 1000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    for(int i = 0; i < total_puntos; i++){
        Puntos10 pnt(distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator));
        lista_puntos.push_back(pnt);
    }
}

void generar_puntos15(vector<Puntos15> &lista_puntos){

    const int range_from  = 1;
    const int range_to    = 1000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    for(int i = 0; i < total_puntos; i++){
        Puntos15 pnt(distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator));
        lista_puntos.push_back(pnt);
    }
}

void generar_puntos20(vector<Puntos20> &lista_puntos){

    const int range_from  = 1;
    const int range_to    = 1000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    for(int i = 0; i < total_puntos; i++){
        Puntos20 pnt(distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator));
        lista_puntos.push_back(pnt);
    }
}

void generar_puntos25(vector<Puntos25> &lista_puntos){

    const int range_from  = 1;
    const int range_to    = 1000;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);

    for(int i = 0; i < total_puntos; i++){
        Puntos25 pnt(distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator),
                    distr(generator),distr(generator),distr(generator),distr(generator),distr(generator));
        lista_puntos.push_back(pnt);
    }
}


void calcular_distancias(vector<Puntos> &lista_puntos, Puntos &punto){

    int distancia = sqrt(pow(lista_puntos[0].x - punto.x,2.0) + pow(lista_puntos[0].y - punto.y,2.0));
    punto.distancia_mayor = distancia;
    punto.distancia_menor = distancia;
    punto.lista_distancias[0] = distancia;

    for(int i = 1; i < total_puntos; i++){

        int dist = sqrt(pow(lista_puntos[i].x - punto.x,2.0) + pow(lista_puntos[i].y - punto.y,2.0));
        if(dist != 0 && dist <= punto.distancia_menor){
            punto.distancia_menor = dist;
        }else if(dist > punto.distancia_mayor){
            punto.distancia_mayor = dist;
        }

        punto.lista_distancias[i] = dist;

    }

}

void calcular_distancias5(vector<Puntos5> &lista_puntos, Puntos5 &punto){

    int distancia = sqrt(pow(lista_puntos[0].x - punto.x,2.0) + pow(lista_puntos[0].y - punto.y,2.0) + pow(lista_puntos[0].z - punto.z,2.0) + pow(lista_puntos[0].a - punto.a,2.0) + pow(lista_puntos[0].b - punto.b,2.0));
    punto.distancia_mayor = distancia;
    punto.distancia_menor = distancia;
    punto.lista_distancias[0] = distancia;

    for(int i = 1; i < total_puntos; i++){

        int dist = sqrt(pow(lista_puntos[i].x - punto.x,2.0) + pow(lista_puntos[i].y - punto.y,2.0) + pow(lista_puntos[i].z - punto.z,2.0) + pow(lista_puntos[i].a - punto.a,2.0) + pow(lista_puntos[i].b - punto.b,2.0));
        if(dist != 0 && dist <= punto.distancia_menor){
            punto.distancia_menor = dist;
        }else if(dist > punto.distancia_mayor){
            punto.distancia_mayor = dist;
        }

        punto.lista_distancias[i] = dist;

    }

}

void calcular_distancias10(vector<Puntos10> &lista_puntos, Puntos10 &punto){

    int distancia = sqrt(pow(lista_puntos[0].x - punto.x,2.0) + pow(lista_puntos[0].y - punto.y,2.0) + pow(lista_puntos[0].z - punto.z,2.0) + pow(lista_puntos[0].a - punto.a,2.0) + pow(lista_puntos[0].b - punto.b,2.0)
                        + pow(lista_puntos[0].c - punto.c,2.0) + pow(lista_puntos[0].d - punto.d,2.0) + pow(lista_puntos[0].e - punto.e,2.0) + pow(lista_puntos[0].f - punto.f,2.0) + pow(lista_puntos[0].g - punto.g,2.0));
    punto.distancia_mayor = distancia;
    punto.distancia_menor = distancia;
    punto.lista_distancias[0] = distancia;

    for(int i = 1; i < total_puntos; i++){

        int dist = sqrt(pow(lista_puntos[i].x - punto.x,2.0) + pow(lista_puntos[i].y - punto.y,2.0) + pow(lista_puntos[i].z - punto.z,2.0) + pow(lista_puntos[i].a - punto.a,2.0) + pow(lista_puntos[i].b - punto.b,2.0)
                        + pow(lista_puntos[i].c - punto.c,2.0) + pow(lista_puntos[i].d - punto.d,2.0) + pow(lista_puntos[i].e - punto.e,2.0) + pow(lista_puntos[i].f - punto.f,2.0) + pow(lista_puntos[i].g - punto.g,2.0));
        if(dist != 0 && dist <= punto.distancia_menor){
            punto.distancia_menor = dist;
        }else if(dist > punto.distancia_mayor){
            punto.distancia_mayor = dist;
        }

        punto.lista_distancias[i] = dist;

    }

}

void calcular_distancias15(vector<Puntos15> &lista_puntos, Puntos15 &punto){

    int distancia = sqrt(pow(lista_puntos[0].x - punto.x,2.0) + pow(lista_puntos[0].y - punto.y,2.0) + pow(lista_puntos[0].z - punto.z,2.0) + pow(lista_puntos[0].a - punto.a,2.0) + pow(lista_puntos[0].b - punto.b,2.0)
                        + pow(lista_puntos[0].c - punto.c,2.0) + pow(lista_puntos[0].d - punto.d,2.0) + pow(lista_puntos[0].e - punto.e,2.0) + pow(lista_puntos[0].f - punto.f,2.0) + pow(lista_puntos[0].g - punto.g,2.0)
                        + pow(lista_puntos[0].h - punto.h,2.0) + pow(lista_puntos[0].i - punto.i,2.0) + pow(lista_puntos[0].j - punto.j,2.0) + pow(lista_puntos[0].k - punto.k,2.0) + pow(lista_puntos[0].l - punto.l,2.0));
    punto.distancia_mayor = distancia;
    punto.distancia_menor = distancia;
    punto.lista_distancias[0] = distancia;

    for(int i = 1; i < total_puntos; i++){

        int dist = sqrt(pow(lista_puntos[i].x - punto.x,2.0) + pow(lista_puntos[i].y - punto.y,2.0) + pow(lista_puntos[i].z - punto.z,2.0) + pow(lista_puntos[i].a - punto.a,2.0) + pow(lista_puntos[i].b - punto.b,2.0)
                        + pow(lista_puntos[i].c - punto.c,2.0) + pow(lista_puntos[i].d - punto.d,2.0) + pow(lista_puntos[i].e - punto.e,2.0) + pow(lista_puntos[i].f - punto.f,2.0) + pow(lista_puntos[i].g - punto.g,2.0)
                        + pow(lista_puntos[i].h - punto.h,2.0) + pow(lista_puntos[i].i - punto.i,2.0) + pow(lista_puntos[i].j - punto.j,2.0) + pow(lista_puntos[i].k - punto.k,2.0) + pow(lista_puntos[i].l - punto.l,2.0));
        if(dist != 0 && dist <= punto.distancia_menor){
            punto.distancia_menor = dist;
        }else if(dist > punto.distancia_mayor){
            punto.distancia_mayor = dist;
        }

        punto.lista_distancias[i] = dist;

    }

}

void calcular_distancias20(vector<Puntos20> &lista_puntos, Puntos20 &punto){

    int distancia = sqrt(pow(lista_puntos[0].x - punto.x,2.0) + pow(lista_puntos[0].y - punto.y,2.0) + pow(lista_puntos[0].z - punto.z,2.0) + pow(lista_puntos[0].a - punto.a,2.0) + pow(lista_puntos[0].b - punto.b,2.0)
                        + pow(lista_puntos[0].c - punto.c,2.0) + pow(lista_puntos[0].d - punto.d,2.0) + pow(lista_puntos[0].e - punto.e,2.0) + pow(lista_puntos[0].f - punto.f,2.0) + pow(lista_puntos[0].g - punto.g,2.0)
                        + pow(lista_puntos[0].h - punto.h,2.0) + pow(lista_puntos[0].i - punto.i,2.0) + pow(lista_puntos[0].j - punto.j,2.0) + pow(lista_puntos[0].k - punto.k,2.0) + pow(lista_puntos[0].l - punto.l,2.0)
                        + pow(lista_puntos[0].m - punto.m,2.0) + pow(lista_puntos[0].n - punto.n,2.0) + pow(lista_puntos[0].o - punto.o,2.0) + pow(lista_puntos[0].p - punto.p,2.0) + pow(lista_puntos[0].q - punto.q,2.0));
    punto.distancia_mayor = distancia;
    punto.distancia_menor = distancia;
    punto.lista_distancias[0] = distancia;

    for(int i = 1; i < total_puntos; i++){

        int dist = sqrt(pow(lista_puntos[i].x - punto.x,2.0) + pow(lista_puntos[i].y - punto.y,2.0) + pow(lista_puntos[i].z - punto.z,2.0) + pow(lista_puntos[i].a - punto.a,2.0) + pow(lista_puntos[i].b - punto.b,2.0)
                        + pow(lista_puntos[i].c - punto.c,2.0) + pow(lista_puntos[i].d - punto.d,2.0) + pow(lista_puntos[i].e - punto.e,2.0) + pow(lista_puntos[i].f - punto.f,2.0) + pow(lista_puntos[i].g - punto.g,2.0)
                        + pow(lista_puntos[i].h - punto.h,2.0) + pow(lista_puntos[i].i - punto.i,2.0) + pow(lista_puntos[i].j - punto.j,2.0) + pow(lista_puntos[i].k - punto.k,2.0) + pow(lista_puntos[i].l - punto.l,2.0)
                        + pow(lista_puntos[i].m - punto.m,2.0) + pow(lista_puntos[i].n - punto.n,2.0) + pow(lista_puntos[i].o - punto.o,2.0) + pow(lista_puntos[i].p - punto.p,2.0) + pow(lista_puntos[i].q - punto.q,2.0));
        if(dist != 0 && dist <= punto.distancia_menor){
            punto.distancia_menor = dist;
        }else if(dist > punto.distancia_mayor){
            punto.distancia_mayor = dist;
        }

        punto.lista_distancias[i] = dist;

    }

}

void calcular_distancias25(vector<Puntos25> &lista_puntos, Puntos25 &punto){

    int distancia = sqrt(pow(lista_puntos[0].x - punto.x,2.0) + pow(lista_puntos[0].y - punto.y,2.0) + pow(lista_puntos[0].z - punto.z,2.0) + pow(lista_puntos[0].a - punto.a,2.0) + pow(lista_puntos[0].b - punto.b,2.0)
                        + pow(lista_puntos[0].c - punto.c,2.0) + pow(lista_puntos[0].d - punto.d,2.0) + pow(lista_puntos[0].e - punto.e,2.0) + pow(lista_puntos[0].f - punto.f,2.0) + pow(lista_puntos[0].g - punto.g,2.0)
                        + pow(lista_puntos[0].h - punto.h,2.0) + pow(lista_puntos[0].i - punto.i,2.0) + pow(lista_puntos[0].j - punto.j,2.0) + pow(lista_puntos[0].k - punto.k,2.0) + pow(lista_puntos[0].l - punto.l,2.0)
                        + pow(lista_puntos[0].m - punto.m,2.0) + pow(lista_puntos[0].n - punto.n,2.0) + pow(lista_puntos[0].o - punto.o,2.0) + pow(lista_puntos[0].p - punto.p,2.0) + pow(lista_puntos[0].q - punto.q,2.0)
                        + pow(lista_puntos[0].r - punto.r,2.0) + pow(lista_puntos[0].s - punto.s,2.0) + pow(lista_puntos[0].t - punto.t,2.0) + pow(lista_puntos[0].u - punto.u,2.0) + pow(lista_puntos[0].v - punto.v,2.0));
    punto.distancia_mayor = distancia;
    punto.distancia_menor = distancia;
    punto.lista_distancias[0] = distancia;

    for(int i = 1; i < total_puntos; i++){

        int dist = sqrt(pow(lista_puntos[i].x - punto.x,2.0) + pow(lista_puntos[i].y - punto.y,2.0) + pow(lista_puntos[i].z - punto.z,2.0) + pow(lista_puntos[i].a - punto.a,2.0) + pow(lista_puntos[i].b - punto.b,2.0)
                        + pow(lista_puntos[i].c - punto.c,2.0) + pow(lista_puntos[i].d - punto.d,2.0) + pow(lista_puntos[i].e - punto.e,2.0) + pow(lista_puntos[i].f - punto.f,2.0) + pow(lista_puntos[i].g - punto.g,2.0)
                        + pow(lista_puntos[i].h - punto.h,2.0) + pow(lista_puntos[i].i - punto.i,2.0) + pow(lista_puntos[i].j - punto.j,2.0) + pow(lista_puntos[i].k - punto.k,2.0) + pow(lista_puntos[i].l - punto.l,2.0)
                        + pow(lista_puntos[i].m - punto.m,2.0) + pow(lista_puntos[i].n - punto.n,2.0) + pow(lista_puntos[i].o - punto.o,2.0) + pow(lista_puntos[i].p - punto.p,2.0) + pow(lista_puntos[i].q - punto.q,2.0)
                        + pow(lista_puntos[i].r - punto.r,2.0) + pow(lista_puntos[i].s - punto.s,2.0) + pow(lista_puntos[i].t - punto.t,2.0) + pow(lista_puntos[i].u - punto.u,2.0) + pow(lista_puntos[i].v - punto.v,2.0));
        if(dist != 0 && dist <= punto.distancia_menor){
            punto.distancia_menor = dist;
        }else if(dist > punto.distancia_mayor){
            punto.distancia_mayor = dist;
        }

        punto.lista_distancias[i] = dist;

    }

}

void calcular_distancias_porcentaje(Puntos &punto){

    int maxmin = punto.distancia_mayor - punto.distancia_menor;

    for(int i = 0; i  < total_puntos; i ++){

        if(punto.lista_distancias[i] != 0) {
            double porc = (double) (((punto.lista_distancias[i] - punto.distancia_menor) * 100) / (maxmin))/100;
            porc = static_cast<int>(porc * 10 + 0.5) / 10.0;
            punto.lista_distancias_porcentaje[i] = porc;

        }

    }

}

void calcular_distancias_porcentaje5(Puntos5 &punto){

    int maxmin = punto.distancia_mayor - punto.distancia_menor;

    for(int i = 0; i  < total_puntos; i ++){

        if(punto.lista_distancias[i] != 0 && maxmin != 0) {

            double porc = (double) (((punto.lista_distancias[i] - punto.distancia_menor) * 100) / (maxmin))/100;
            porc = static_cast<int>(porc * 10 + 0.5) / 10.0;
            punto.lista_distancias_porcentaje[i] = porc;

        }

    }

}

void calcular_distancias_porcentaje10(Puntos10 &punto){

    int maxmin = punto.distancia_mayor - punto.distancia_menor;

    for(int i = 0; i  < total_puntos; i ++){

        if(punto.lista_distancias[i] != 0) {
            double porc = (double) (((punto.lista_distancias[i] - punto.distancia_menor) * 100) / (maxmin))/100;
            porc = static_cast<int>(porc * 10 + 0.5) / 10.0;
            punto.lista_distancias_porcentaje[i] = porc;

        }

    }

}

void calcular_distancias_porcentaje15(Puntos15 &punto){

    int maxmin = punto.distancia_mayor - punto.distancia_menor;

    for(int i = 0; i  < total_puntos; i ++){

        if(punto.lista_distancias[i] != 0) {
            double porc = (double) (((punto.lista_distancias[i] - punto.distancia_menor) * 100) / (maxmin))/100;
            porc = static_cast<int>(porc * 10 + 0.5) / 10.0;
            punto.lista_distancias_porcentaje[i] = porc;

        }

    }

}

void calcular_distancias_porcentaje20(Puntos20 &punto){

    int maxmin = punto.distancia_mayor - punto.distancia_menor;

    for(int i = 0; i  < total_puntos; i ++){

        if(punto.lista_distancias[i] != 0) {
            double porc = (double) (((punto.lista_distancias[i] - punto.distancia_menor) * 100) / (maxmin))/100;
            porc = static_cast<int>(porc * 10 + 0.5) / 10.0;
            punto.lista_distancias_porcentaje[i] = porc;

        }

    }

}

void calcular_distancias_porcentaje25(Puntos25 &punto){

    int maxmin = punto.distancia_mayor - punto.distancia_menor;

    for(int i = 0; i  < total_puntos; i ++){

        if(punto.lista_distancias[i] != 0) {
            double porc = (double) (((punto.lista_distancias[i] - punto.distancia_menor) * 100) / (maxmin))/100;
            porc = static_cast<int>(porc * 10 + 0.5) / 10.0;
            punto.lista_distancias_porcentaje[i] = porc;

        }

    }

}

void contar_porcentajes(Puntos &punto){

    map<int, double>::iterator it;
    for(it=punto.lista_distancias_porcentaje.begin(); it!=punto.lista_distancias_porcentaje.end(); ++it){

        punto.lista_distancias_porcentaje_total[it->second]++;
    }

}

void contar_porcentajes5(Puntos5 &punto){

    map<int, double>::iterator it;
    for(it=punto.lista_distancias_porcentaje.begin(); it!=punto.lista_distancias_porcentaje.end(); ++it){

        punto.lista_distancias_porcentaje_total[it->second]++;
    }

}

void contar_porcentajes10(Puntos10 &punto){

    map<int, double>::iterator it;
    for(it=punto.lista_distancias_porcentaje.begin(); it!=punto.lista_distancias_porcentaje.end(); ++it){

        punto.lista_distancias_porcentaje_total[it->second]++;
    }

}

void contar_porcentajes15(Puntos15 &punto){

    map<int, double>::iterator it;
    for(it=punto.lista_distancias_porcentaje.begin(); it!=punto.lista_distancias_porcentaje.end(); ++it){

        punto.lista_distancias_porcentaje_total[it->second]++;
    }

}

void contar_porcentajes20(Puntos20 &punto){

    map<int, double>::iterator it;
    for(it=punto.lista_distancias_porcentaje.begin(); it!=punto.lista_distancias_porcentaje.end(); ++it){

        punto.lista_distancias_porcentaje_total[it->second]++;
    }

}

void contar_porcentajes25(Puntos25 &punto){

    map<int, double>::iterator it;
    for(it=punto.lista_distancias_porcentaje.begin(); it!=punto.lista_distancias_porcentaje.end(); ++it){

        punto.lista_distancias_porcentaje_total[it->second]++;
    }

}


void exportarcsv(Puntos puntos, Puntos5 puntos5, Puntos10 puntos10, Puntos15 puntos15, Puntos20 puntos20, Puntos25 puntos25)
{
    ofstream myfile;
    myfile.open ("datos_porcentajes.csv");
    myfile << "2 Dimensiones\n";
    myfile << "Porcentaje,Cantidad\n";

    map<double,int>::iterator it;
    for(it=puntos.lista_distancias_porcentaje_total.begin(); it!=puntos.lista_distancias_porcentaje_total.end(); ++it){

        myfile << to_string(it->first) + "," + to_string(it->second) + "\n";

    }

    myfile << "\n";

    myfile << "5 Dimensiones\n";
    myfile << "Porcentaje,Cantidad\n";

    for(it=puntos5.lista_distancias_porcentaje_total.begin(); it!=puntos5.lista_distancias_porcentaje_total.end(); ++it){

        myfile << to_string(it->first) + "," + to_string(it->second) + "\n";

    }

    myfile << "\n";

    myfile << "10 Dimensiones\n";
    myfile << "Porcentaje,Cantidad\n";

    for(it=puntos10.lista_distancias_porcentaje_total.begin(); it!=puntos10.lista_distancias_porcentaje_total.end(); ++it){

        myfile << to_string(it->first) + "," + to_string(it->second) + "\n";

    }

    myfile << "\n";

    myfile << "20 Dimensiones\n";
    myfile << "Porcentaje,Cantidad\n";

    for(it=puntos20.lista_distancias_porcentaje_total.begin(); it!=puntos20.lista_distancias_porcentaje_total.end(); ++it){

        myfile << to_string(it->first) + "," + to_string(it->second) + "\n";

    }

    myfile << "\n";

    myfile << "25 Dimensiones\n";
    myfile << "Porcentaje,Cantidad\n";

    for(it=puntos25.lista_distancias_porcentaje_total.begin(); it!=puntos25.lista_distancias_porcentaje_total.end(); ++it){

        myfile << to_string(it->first) + "," + to_string(it->second) + "\n";

    }

    myfile.close();

}

int main()
{

/////////////////////////CON 2 PUNTOS///////////////////////////////////

    vector<Puntos> lista_puntos;
    generar_puntos(lista_puntos);

    Puntos random = lista_puntos[rand() % lista_puntos.size()];
    //cout << "Punto Seleccionado: "<<random.x << ","<<random.y<<endl;

    calcular_distancias(lista_puntos,random);
    calcular_distancias_porcentaje(random);
    contar_porcentajes(random);

    cout<<"2 PUNTOS"<<endl<<"Distancia mayor: "<<random.distancia_mayor<<endl<<"Distancia menor: "<<random.distancia_menor<<endl;

    cout<<endl;

/////////////////////////CON 5 PUNTOS///////////////////////////////////

    vector<Puntos5> lista_puntos5;
    generar_puntos5(lista_puntos5);

    Puntos5 random5 = lista_puntos5[rand() % lista_puntos5.size()];

    calcular_distancias5(lista_puntos5,random5);
    calcular_distancias_porcentaje5(random5);
    contar_porcentajes5(random5);

    cout<<"5 PUNTOS"<<endl<<"Distancia mayor: "<<random5.distancia_mayor<<endl<<"Distancia menor: "<<random5.distancia_menor<<endl;

    cout<<endl;

/////////////////////////CON 10 PUNTOS///////////////////////////////////

    vector<Puntos10> lista_puntos10;
    generar_puntos10(lista_puntos10);

    Puntos10 random10 = lista_puntos10[rand() % lista_puntos10.size()];

    calcular_distancias10(lista_puntos10,random10);
    calcular_distancias_porcentaje10(random10);
    contar_porcentajes10(random10);

    cout<<"10 PUNTOS"<<endl<<"Distancia mayor: "<<random10.distancia_mayor<<endl<<"Distancia menor: "<<random10.distancia_menor<<endl;

    cout<<endl;

///////////////////////////CON 15 PUNTOS///////////////////////////////////

    vector<Puntos15> lista_puntos15;
    generar_puntos15(lista_puntos15);

    Puntos15 random15 = lista_puntos15[rand() % lista_puntos15.size()];

    calcular_distancias15(lista_puntos15,random15);
    calcular_distancias_porcentaje15(random15);
    contar_porcentajes15(random15);

    cout<<"15 PUNTOS"<<endl<<"Distancia mayor: "<<random15.distancia_mayor<<endl<<"Distancia menor: "<<random15.distancia_menor<<endl;

    cout<<endl;

///////////////////////////CON 20 PUNTOS///////////////////////////////////
//
    vector<Puntos20> lista_puntos20;
    generar_puntos20(lista_puntos20);

    Puntos20 random20 = lista_puntos20[rand() % lista_puntos20.size()];

    calcular_distancias20(lista_puntos20,random20);
    calcular_distancias_porcentaje20(random20);
    contar_porcentajes20(random20);

    cout<<"20 PUNTOS"<<endl<<"Distancia mayor: "<<random20.distancia_mayor<<endl<<"Distancia menor: "<<random20.distancia_menor<<endl;

    cout<<endl;

///////////////////////////CON 25 PUNTOS///////////////////////////////////
//
    vector<Puntos25> lista_puntos25;
    generar_puntos25(lista_puntos25);

    Puntos25 random25 = lista_puntos25[rand() % lista_puntos25.size()];

    calcular_distancias25(lista_puntos25,random25);
    calcular_distancias_porcentaje25(random25);
    contar_porcentajes25(random25);

    cout<<"25 PUNTOS"<<endl<<"Distancia mayor: "<<random25.distancia_mayor<<endl<<"Distancia menor: "<<random25.distancia_menor<<endl;

    exportarcsv(random,random5,random10, random15, random20, random25);

}
