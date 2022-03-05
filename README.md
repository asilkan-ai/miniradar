# Ardunio ile ultrasonik radar
SG90 micro servo motor aracılığı ile HC-SR04 Ultrasonik mesafe sensörü 15 ile 165 derece arasında hareket ettiriliyor. HC-SR04 Ultrasonik mesafe sensörü ile ses dalgaları üreterek 3 cm ile 400 cm arasında bir nesne algılanırsa sesli sinyal ile uyarı veriliyor. TRIG pininden sinyal verildiğinde bir ses dalgası sensör tarafından üretilir ve bu ses dalgası cisme çarpıp geri döndüğünde ECHO pini aktif hale gelir.

![image](https://user-images.githubusercontent.com/73762823/156896703-3321fcf4-158f-4f57-b6c9-1977bef62f7a.png)

Sesin havada yayılma hızını bildiğimiz için TRIG pinine verilen sinyalden sonra ECHO pininin aktif olduğu zamana kadarki süreyi ölçerek aradaki mesafeyi hesaplayabiliriz. Bu sayede sensör ile cisim arasındaki bu mesafe belirli bir değere ulaştığında buzzer ile sesli uyarı veriliyor. Mesafe sensörü ile cisim arasındaki mesafe 25 cm’nin üzerine çıkana kadar bu sesli sinyaller devam ediyor. Böylece belirli bir alanda cisim algılanması halinde uyarı veren bir mini radar sistemi amaçlanıyor.

# Devre modeli

![image](https://user-images.githubusercontent.com/73762823/156896717-cc9be777-6931-4507-b30f-2d2baccc34c6.png)

# Akış Şeması

![image](https://user-images.githubusercontent.com/73762823/156896725-498337e4-8e61-4c44-a754-745e3e51d3ca.png)

# Seri ekran

![image](https://user-images.githubusercontent.com/73762823/156896736-94f01f5e-84f8-483d-97fd-5dbddfacc2b5.png)
