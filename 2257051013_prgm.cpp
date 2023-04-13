#include <iostream>
#include <cstring>

class Person {
private:
    char name[50];
    int age;

public:
    // Setter untuk nama
    void setName(const char* newName) {
        strncpy(name, newName, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0'; // Pastikan akhir string diakhiri dengan null terminator
    }

    // Getter untuk nama
    const char* getName() const {
        return name;
    }

    // Setter untuk usia
    void setAge(int newAge) {
        age = newAge;
    }

    // Getter untuk usia
    int getAge() const {
        return age;
    }

    // Fungsi untuk menampilkan informasi Person
    void displayInfo() const {
        std::cout << "Nama: " << name << std::endl;
        std::cout << "Usia: " << age << " tahun" << std::endl;
    }
};

int main() {
    // Membuat objek Person
    Person person1;

    // Menggunakan setter untuk mengisi data objek Person
    person1.setName("Nataline");
    person1.setAge(17);

    // Menggunakan pointer untuk mengakses objek Person
    Person* personPtr = &person1;

    // Menggunakan pointer untuk mengakses dan mengubah data objek Person
    std::cout << "Informasi sebelum diubah: " << std::endl;
    personPtr->displayInfo();

    personPtr->setAge(18);

    std::cout << "Informasi setelah diubah: " << std::endl;
    personPtr->displayInfo();

    return 0;
}

