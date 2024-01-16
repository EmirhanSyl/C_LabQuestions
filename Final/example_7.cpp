#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Kisi
{
private:
    string kurum;

protected:
    int dogumYili;

public:
    string adi;
    string soyadi;
    vector<Kisi *> kisiList;

    virtual void bilgileriGoster() = 0;
    //friend ostream &operator<<(ostream os, Kisi *kisi);

};


class Personel : public Kisi
{
public:
    int sicil;
    void bilgileriGoster() {}

    friend void operator<<(Personel p1, int i);
};

void operator<<(Personel p1, int i)
{
    cout << "fdslkfsd";
}

class Ogrenci : public Kisi
{
public:
    int ogrenciNo;
    void bilgileriGoster() {}
};

class Isci : public Personel
{
};

void turunuBelirle(Kisi *kisi)
{
    if (Ogrenci *o = dynamic_cast<Ogrenci *>(kisi))
    {
        cout << "Ogrenci" << endl;
    }
    else if (Isci *i = dynamic_cast<Isci *>(kisi))
    {
        cout << "Işci" << endl;
    }
    else if (Personel *p = dynamic_cast<Personel *>(kisi))
    {
        cout << "Personel" << endl;
    }
}

int main(int argc, char const *argv[])
{
    Isci *isci = new Isci();
    isci->adi = "Adi";
    isci->soyadi = "Soyadi";

    cout << isci->adi << isci->soyadi << endl;
    turunuBelirle(isci);
    *isci << 1;
    return 0;
}
