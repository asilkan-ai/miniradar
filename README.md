# Ardunio ile ultrasonik radar
SG90 micro servo motor aracılığı ile HC-SR04 Ultrasonik mesafe sensörünü 15 ile 165 derece arasında hareket ettiriliyor. HC-SR04 Ultrasonik mesafe sensörü ile ses dalgaları üreterek 3 cm ile 400 cm arasında bir nesne algılanırsa sesli sinyal ile uyarı veriliyor. TRIG pininden sinyal verildiğinde bir ses dalgası sensör tarafından üretilir ve bu ses dalgası cisme çarpıp geri döndüğünde ECHO pini aktif hale gelir. 
![image](https://user-images.githubusercontent.com/73762823/156896565-1aba4981-149c-4a71-ac68-e3c198f30d9b.png)
Sesin havada yayılma hızını bildiğimiz için TRIG pinine verilen sinyalden sonra ECHO pininin aktif olduğu zamana kadarki süreyi ölçerek aradaki mesafeyi hesaplayabiliriz. Bu sayede sensör ile cisim arasındaki bu mesafe belirli bir değere ulaştığında buzzer ile sesli uyarı veriliyor. Mesafe sensörü ile cisim arasındaki mesafe 25 cm’nin üzerine çıkana kadar bu sesli sinyaller devam ediyor. Böylece belirli bir alanda cisim algılanması halinde uyarı veren bir mini radar sistemi amaçlanıyor.
# Devre modeli
![image](https://user-images.githubusercontent.com/73762823/156896586-0f559a9c-c82f-444a-b508-b6b671a0ad1f.png)

# Akış Şeması
![image](https://user-images.githubusercontent.com/73762823/156896610-ae1b5356-a15c-4038-ace9-59c3b617dd3a.png)

# Seri ekran
![image](https://user-images.githubusercontent.com/73762823/156896637-3fdcaf65-3a7f-4c9e-8586-c9d038ab8efe.png)
