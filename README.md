# Arduino Serial Monitor Tutorial

## Proje 1: Seri Monitör Kullanımı

[Kodu İncele](https://github.com/mrred00/Arduino-Serial-Monitor-Tutorial/blob/main/Proje1/project1.ino)

### Amaç:

Bu basit Arduino projesi, seri monitör üzerinden belirli aralıklarla kullanıcıya giriş yaptırmadan, sabit değerleri ekranda göstermektir.

### Kullanılan Kütüphaneler:

1. **Arduino.h**: Temel Arduino fonksiyonlarını içeren kütüphane.
2. **Serial.h**: Seri haberleşme işlemlerini sağlayan kütüphane.

### Kod:

```cpp
#include <Arduino.h>
#include <Serial.h>

// Sabit integer değerleri tanımla
const int sabitInteger1 = 10;
const int sabitInteger2 = 20;
const int sabitInteger3 = 30;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Sabit değerleri ekrana yazdır
  Serial.print("Sabit Integer 1: ");
  Serial.println(sabitInteger1);
  Serial.print("Sabit Integer 2: ");
  Serial.println(sabitInteger2);
  Serial.print("Sabit Integer 3: ");
  Serial.println(sabitInteger3);

  // 1 saniye bekleyerek değerleri güncelleme
  delay(1000);
}
```

### Kod Açıklamaları:

1. **Kütüphanelerin Eklenmesi:**
    ```cpp
    #include <Arduino.h>
    #include <Serial.h>
    ```
    İki kütüphane eklenir. `Arduino.h` temel Arduino fonksiyonlarını içerirken, `Serial.h` seri haberleşme işlemlerini sağlar.

2. **Sabit Değerlerin Tanımlanması:**
    ```cpp
    const int sabitInteger1 = 10;
    const int sabitInteger2 = 20;
    const int sabitInteger3 = 30;
    ```
    Üç adet sabit integer değeri tanımlanır.

3. **Setup Fonksiyonu:**
    ```cpp
    void setup() {
      Serial.begin(9600);
    }
    ```
    - Seri haberleşme başlatılır ve baud oranı 9600 olarak ayarlanır.

4. **Loop Fonksiyonu:**
    ```cpp
    void loop() {
      Serial.print("Sabit Integer 1: ");
      Serial.println(sabitInteger1);
      Serial.print("Sabit Integer 2: ");
      Serial.println(sabitInteger2);
      Serial.print("Sabit Integer 3: ");
      Serial.println(sabitInteger3);

      // 1 saniye bekleyerek değerleri güncelleme
      delay(1000);
    }
    ```
    - Her saniye bir, sabit integer değerleri seri monitöre yazdırılır.

### Algoritma:

1. **Başlangıç:**
    - Temel kütüphaneler eklenir ve sabit integer değerler tanımlanır.

2. **Setup Fonksiyonu:**
    - Seri haberleşme başlatılır.

3. **Loop Fonksiyonu:**
    - Her saniye bir, sabit integer değerleri seri monitöre yazdırılır.
    - `delay(1000)` fonksiyonu ile 1 saniye beklenir.

4. **Tekrar:**
    - Loop fonksiyonu sürekli olarak çalışarak değerleri güncel tutar ve seri monitöre yazdırır.

Bu proje, kullanıcının giriş yapmasına gerek olmadan sabit değerleri ekranda görüntülemektedir. Bu basit proje, Arduino'nun temel özelliklerini ve seri haberleşmeyi anlamak için kullanışlıdır.

##Proje 2: Arduino Seri Monitör İnteraktif Giriş

[Kodu İndir](https://github.com/mrred00/Arduino-Serial-Monitor-Tutorial/blob/main/Proje2/project2.ino)

### Amaç:

Bu Arduino projesinin amacı, kullanıcının seri monitör aracılığıyla üç adet integer değeri girmesini sağlamak ve bu değerleri ekranda her saniye güncel bir şekilde göstermektir.

### Kullanılan Kütüphaneler:

1. **Arduino.h**: Temel Arduino fonksiyonlarını içeren kütüphane.
2. **Serial.h**: Seri haberleşme işlemlerini yöneten kütüphane.

### Kod:

```cpp
#include <Arduino.h>
#include <Serial.h>

int integer1, integer2, integer3;

void setup() {
  Serial.begin(9600);

  Serial.println("Lütfen ilk integer değeri girin: ");
  while(!Serial.available());
  integer1 = Serial.parseInt();
  Serial.println("Lütfen ikinci integer değeri girin: ");
  while(!Serial.available());
  integer2 = Serial.parseInt();
  Serial.println("Lütfen üçüncü integer değeri girin: ");
  while(!Serial.available());
  integer3 = Serial.parseInt();
}

void loop() {
  Serial.print("Integer 1: ");
  Serial.println(integer1);
  Serial.print("Integer 2: ");
  Serial.println(integer2);
  Serial.print("Integer 3: ");
  Serial.println(integer3);

  delay(1000);
}
```

### Kod Açıklamaları:

1. **Kütüphanelerin Eklenmesi:**
    ```cpp
    #include <Arduino.h>
    #include <Serial.h>
    ```
    İki kütüphane eklenir. `Arduino.h` temel Arduino fonksiyonlarını içerirken, `Serial.h` seri haberleşme işlemlerini sağlar.

2. **Global Değişkenlerin Tanımlanması:**
    ```cpp
    int integer1, integer2, integer3;
    ```
    Üç adet integer değişken tanımlanır.

3. **Setup Fonksiyonu:**
    ```cpp
    void setup() {
      Serial.begin(9600);
    
      Serial.println("Lütfen ilk integer değeri girin: ");
      while(!Serial.available());
      integer1 = Serial.parseInt();
      Serial.println("Lütfen ikinci integer değeri girin: ");
      while(!Serial.available());
      integer2 = Serial.parseInt();
      Serial.println("Lütfen üçüncü integer değeri girin: ");
      while(!Serial.available());
      integer3 = Serial.parseInt();
    }
    ```
    - `Serial.begin(9600);`: Seri haberleşme başlatılır ve baud oranı 9600 olarak ayarlanır.
    - Kullanıcıdan üç adet integer değeri alınır.

4. **Loop Fonksiyonu:**
    ```cpp
    void loop() {
      Serial.print("Integer 1: ");
      Serial.println(integer1);
      Serial.print("Integer 2: ");
      Serial.println(integer2);
      Serial.print("Integer 3: ");
      Serial.println(integer3);
    
      delay(1000);
    }
    ```
    - Her saniye bir, kullanıcının girdiği integer değerleri seri monitöre yazdırılır.

### Algoritma:

1. **Başlangıç:**
    - Temel kütüphaneler eklenir ve global değişkenler tanımlanır.

2. **Setup Fonksiyonu:**
    - Seri haberleşme başlatılır.
    - Kullanıcıdan üç adet integer değeri alınır.

3. **Loop Fonksiyonu:**
    - Her saniye bir, kullanıcının girdiği integer değerleri seri monitöre yazdırılır.
    - `delay(1000)` fonksiyonu ile 1 saniye beklenir.

4. **Tekrar:**
    - Loop fonksiyonu sürekli olarak çalışarak değerleri güncel tutar ve seri monitöre yazdırır.

Bu proje, kullanıcıdan giriş almayı ve ardından bu girişi işlemeyi içerir. Seri monitör aracılığıyla kullanıcı ile iletişim kurulur ve alınan değerler ekranda görüntülenir. Bu basit proje, Arduino'nun temel özelliklerini ve seri haberleşmeyi anlamak için güzel bir başlangıçtır.
