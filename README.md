# :octocat: Obscure-Vigenere-Cipher-Garfield-Solution :octocat:

<h1> Vigenère Şifreleme </h1>

Vigenère şifrelemesi, Polyalphabetik bir şifreleme yöntemidir. Şifrelenmiş metni oluşturmak için bir anahtar kelime veya cümle kullanılır. Anahtar kelime veya cümle, her harf için bir kaydırma miktarı belirler. Bu yöntem, her harfin şifrelenmesi için farklı bir kaydırma miktarı sağlar, bu da şifrenin daha güvenli hale gelmesini sağlar.
Şifreleme Mantığı

Vigenère şifrelemesi, bir metni anahtar kelime veya cümleyle şifrelemek için kullanılır. Her harf, anahtar kelimenin karakterlerine göre farklı kaydırma miktarlarıyla şifrelenir.

Örneğin, `LEMON` anahtar kelimesini kullanarak şifreleme işlemi yapalım:

Metin : `ATTACKATDAWN` <br>
Anahtar : `LEMON`

   - Metnin her harfi, sırasıyla anahtar kelimenin karakterlerine göre birer birer şifrelenir.
   - Anahtar kelime boyunca bir döngü yapılır ve her harf için bir kaydırma miktarı belirlenir.
   - Her bir harf, alfabetik olarak ilgili kaydırma miktarı kadar kaydırılır.

Örnek:
    

    Metin:    A  T  T  A  C  K  A  T  D  A  W  N 
    Anahtar:  L  E  M  O  N  L  E  M  O  N  L  E
    Şifreli:  L  X  F  O  P  V  E  F  R  N  H  R

Bu şekilde, `ATTACKATDAWN` metni `LXFOPVEFRNHR` olarak şifrelenmiş olur. <br>

<h1>Şifreleme Tablosu</h1>

<b> Aşağıdaki şifreleme tablosu, Vigenère şifrelemesinde karakterlerin birbirine karşılık geldiği bir referans sunar: </b>

|   | **A** | **B** | **C** | **D** | **E** | **F** | **G** | **H** | **I** | **J** | **K** | **L** | **M** | **N** | **O** | **P** | **Q** | **R** | **S** | **T** | **U** | **V** | **W** | **X** | **Y** | **Z** |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| **A** | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z |
| **B** | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A |
| **C** | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B |
| **D** | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C |
| **E** | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D |
| **F** | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E |
| **G** | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F |
| **H** | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G |
| **I** | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H |
| **J** | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I |
| **K** | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J |
| **L** | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K |
| **M** | M | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L |
| **N** | N | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M |
| **O** | O | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N |
| **P** | P | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O |
| **Q** | Q | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P |
| **R** | R | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q |
| **S** | S | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R |
| **T** | T | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S |
| **U** | U | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T |
| **V** | V | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U |
| **W** | W | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V |
| **X** | X | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W |
| **Y** | Y | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X |
| **Z** | Z | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | P | Q | R | S | T | U | V | W | X | Y |


Bu tablo, her bir karakterin diğer karakterlerle nasıl şifrelendiğini göstermektedir. Bu bilgiyi kullanarak şifreleme işlemi gerçekleştirilebilir.

<h1> Burada vigenere şifresi kullanılarak şifrelenmiş bir metin ve anahtarı bulunmaktadır. </h1>
<img src="https://github.com/BilalGns/Obscure-Vigenere-Cipher-Garfield-Solution/blob/main/garfield.jpeg" width="340" height="540">

Metin : `IjgJUO{P_LOUV_AIRUS_GYQUTOLTD_SKRFB_TWNKCFT}` <br>
Anahtar : `07271978`

<h1>👇 Otomatize çözümleri için bakabilirsiniz 👇</h1>

- **[Python ile çözümü](https://github.com/BilalGns/Obscure-Vigenere-Cipher-Garfield-Solution/blob/main/Solutions/solution.py)** 
- **[C ile çözümü](https://github.com/BilalGns/Obscure-Vigenere-Cipher-Garfield-Solution/blob/main/Solutions/solution.c)**
- **[C ile çözümü .txt dosyası olmadan](https://github.com/BilalGns/Obscure-Vigenere-Cipher-Garfield-Solution/blob/main/Solutions/solution-nofile.c)**

<div align="center">
<h3 align="center">Visitor Count </h3> 

![Visitor Count](https://profile-counter.glitch.me/BilalGns/count.svg) 

 </div>



<h1 align="Center">Connect with me 📫</h1>  
<p align="center">
   <a href="mailto:bilalgunes.dev@gmail.com" target="blank">
      <img src="https://github.com/gauravghongde/social-icons/blob/master/SVG/Color/Gmail.svg" style="height: 4rem"/>
   </a>
   <a href="https://www.linkedin.com/in/b1lalgunes/" target="blank">
      <img src="https://github.com/gauravghongde/social-icons/blob/master/SVG/Color/LinkedIN.svg" style="height: 4rem"/>
   </a>
</p>
