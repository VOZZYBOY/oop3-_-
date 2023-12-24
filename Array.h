#pragma once
#include<iostream>
#include"Figure.h"

class Array {
    
private:
    Figure** fig;
    int size;
    int lot;

public:
    Array(int size); // деструткор осовбождает память чтоьы не было утечек
    ~Array(); //контсутрктор который выделяет память под массив указателей на фигуры

    void add(Figure* fig, int index);
    void del(int index);
    void all() const;
    double all_area() const;
};