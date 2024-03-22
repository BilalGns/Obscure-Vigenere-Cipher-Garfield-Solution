# Obscure-Vigenere-Cipher-Garfield-Solution

<h1> Vigenère Şifreleme </h1>

Vigenère şifrelemesi, Polyalphabetik bir şifreleme yöntemidir. Şifrelenmiş metni oluşturmak için bir anahtar kelime veya cümle kullanılır. Anahtar kelime veya cümle, her harf için bir kaydırma miktarı belirler. Bu yöntem, her harfin şifrelenmesi için farklı bir kaydırma miktarı sağlar, bu da şifrenin daha güvenli hale gelmesini sağlar.
Şifreleme Mantığı

Vigenère şifrelemesi, bir metni anahtar kelime veya cümleyle şifrelemek için kullanılır. Her harf, anahtar kelimenin karakterlerine göre farklı kaydırma miktarlarıyla şifrelenir.

Örneğin, `ANAHTAR` anahtar kelimesini kullanarak şifreleme işlemi yapalım:

Metin : `MERHABA` <br>
Anahtar : `ANAHTAR`

   - Metnin her harfi, sırasıyla anahtar kelimenin karakterlerine göre birer birer şifrelenir.
   - Anahtar kelime boyunca bir döngü yapılır ve her harf için bir kaydırma miktarı belirlenir.
   - Her bir harf, alfabetik olarak ilgili kaydırma miktarı kadar kaydırılır.

Örnek:
    

    Metin:    M  E  R  H  A  B  A
    Anahtar:  A  N  A  H  T  A  R
    Şifreli:  M  F  W  S  H  D  W

Bu şekilde, `MERHABA` metni `MFWSHDW` olarak şifrelenmiş olur.
Şifreleme Tablosu

Aşağıdaki şifreleme tablosu, Vigenère şifrelemesinde karakterlerin birbirine karşılık geldiği bir referans sunar:

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
