# Cerdito volador
## Integrantes

 - Astrid Carolina Castro Cervantes
 - Brunne Felix Talamante
 - Vanessa Rivera Ruiz
 - Christopher Angel Serrano Soto

## Introducción 
 
 Este proyecto tiene como objetivo la creación de un videojuego para la materia de Programación Orientada a Objetos. Dentro de ella nos adentramos al mundo de la programación en el lenguaje C + +. La realización de este proyecto debe ser basado en el motor visto en clase.
 
Para la realización del videojuego utilizamos Visual Studio Code y las librerías de SFML. Las sprites utilizadas en este videojuego están realizadas por nosotros en tanto el entorno como los personajes, estos, fueron realizados con Aseprite el cual es un editor de sprites animados y una herramienta de pixel art.

## Antecedentes

Para este videojuego nos basamos en PacMan, ya que su objetivo principal es recorrer un laberinto y en el camino ir recogiendo objetos.

Pac Man es un videojuego arcade creado por el diseñador de videojuegos Toru Iwatani de la empresa Namco, y distribuido por Midway Games al mercado estadounidense a principios de los años 1980. Desde que Pac-Man fue lanzado el 22 de mayo de 1980, ​ fue un éxito.

Se convirtió en un fenómeno mundial en la industria de los videojuegos, llegó a tener el récord Guiness del videojuego de arcade más exitoso de todos los tiempos con un total de 293 822 máquinas vendidas desde 1981 hasta 1987 y acabó con el dominio de Space Invaders, donde la acción predominante era shoot 'em up (disparar a todos) para reemplazarla por un formato único, más humorístico y poco violento que gustó a muchísimas personas. Fue uno de los primeros juegos en el género de "laberinto".

Iwatani trabajó por última vez en un título de Pac-Man en 2007, y ahora enseña diseño de juegos en la Universidad Politécnica de Tokio.Iwatani dice que no esta demasiado impresionado con los juegos modernos, y dice que al adaptarse a los teléfonos inteligentes y otras pantallas pequeñas, las ideas detrás de ellos también se han vuelto pequeñas.

## Desarrollo

Lo primero que hicimos fue definir la temática del juego, una vez que ya la teníamos empezamos a realizar los bocetos necesarios para realizar los sprites del personaje principal, el entorno y otros elementos.

![](https://lh5.googleusercontent.com/ku-4KWuttrLhgCLU80DXERNExqkULTahYqQ_FhtdBAB2zKh1NwS7sk_8ncPoqEP7TY0XygqrC4AHHk_6vhWhJHspddJgiWoLxZ--vCqis9RKxEL3zp76RvJDeCYyGi1cUwCM8C9x)![](https://lh4.googleusercontent.com/OT9pZyS6Ztx1QNA0-ZtKAAAoaDaFD2oTjo3BCpdfd6kbHvf1TxaZdLWI8sOjOVulwz_7b_CFeYtCmNO1kOa26XLZ0xe-J15iOMSDWljROfphNsyCseTQdP1Ok4jZCjp72Y_N4CX0)![](https://lh3.googleusercontent.com/SueJVhYktkBV6SDTF34rAwOQ-IrciYInM2V-0jNDLLHvh4toe4_CA93FBKOT2obeCap-qnAjHPvOrZSJc7EkwSrkUpuIf44jNR6gO8hcVJnUhJGQtOOXvf0al5Qrv9unsKx3lsbc)![](https://lh6.googleusercontent.com/UIQg0KdIlylaup9drENFK-mnGzYRfLN-ksXfkKOMZmFh0b0s_TPxzh9KdfuGYWnzpiiMwU_G1ktOBVv94tTuZuX4yC_ShHcgBgsu0o107ObarkuUZ5K6IfVvf2fEbLIaLHcgrHoi)

También implementamos pantallas de inicio y final para añadir dinamismo al juego. En la pantalla de inicio se encuentra el botón de inicio y en la pantalla final se le indica al jugador que el juego ha terminado.

![](https://lh3.googleusercontent.com/Lg9-qRcLCHBvucFP8ra-k5Fp951g0NUqQhAYIxHXaz-jwMbCJmDIsSsibVDO2Jc4_cs_1mdVaY63a38kbpCL6Y8K9LA4K-U_DZ3pl1oVRCkHcDFOXEFn3XIO2zqfRLA9wzcPqV1k)

  

Después de tener la temática definida y los elementos, realizamos un boceto de como sería el laberinto, esta fue una parte esencial del juego, ya que, el jugador tendrá que recorrer la mayoría del laberinto antes de llegar al final.

![](https://lh5.googleusercontent.com/3JLBBYthjvPDfs00_FoD6ZcbeBEMVHEy7K-MgBY8iMdmdWVx-cbownX42pEpkmCH3glwAAvnrsXnq0eu3CVAFem-5iqr52j-VdJ5HJr7yA-OddXLh-P2tvnhHpXwOQXcNxWTssaK)  

  

En este videojuego implementamos un marcador, que fue contando el número de objetos que el personaje principal agarraba, esto fue algo que no vimos en clase por lo tanto lo tuvimos que investigar. Ya al tener la investigación bien hecha empezamos a introducirlo en nuestro videojuego.

## Conclusiones

Durante la realización del videojuego tuvimos ciertos inconvenientes ya que no teníamos experiencia en ello. Lo más difícil fue desaparecer los objetos y que esto apareciera en un marcador, nuestro problema se derivó a que el laberinto lo hicimos con nubes las cuales eran un objeto cada una lo cual saturó el juego. Esto se pudo resolver gracias a que intentamos distintos métodos y reducimos los objetos.

El desarrollo de este videojuego nos hizo darnos cuenta que no es fácil no importa el lenguaje que sea y cuantos ejemplos ya existan, esta experiencia nos va a servir para futuros proyectos ya que vamos a saber el proceso indicado para su realización, así como los errores que ya no debemos cometer.
## Referencias

1.  Pereira, D. (2014) Desarrollo de videojuegos paso a paso con C++ y SFML. Programación de videojuegos con C++ y SFML. Recuperado de:  [https://intelligenciavirtual.blogspot.com/2014/03/programacion-de-juegos-concodeblocks-y.html](https://intelligenciavirtual.blogspot.com/2014/03/programacion-de-juegos-concodeblocks-y.html)
    
2.  Academia, A. (2016). Colliders: detección de colisiones en videojuego Unity 3D. Digital Learning SL. Recuperado de: [https://academiaandroid.com/collidersdeteccion-colisiones-juego-unity-3d/](https://academiaandroid.com/collidersdeteccion-colisiones-juego-unity-3d/)
    
3.  Acuña, D. (2001-2002) Curso de programación de videjuegos con C++ y allegro, artebinario. Programación de videojuegos. Recuperado de: [http://wiki.joanillo.org/images/5/5e/Curso_de_Programacion_videojuegos_C++_Allegro3.pdf](http://wiki.joanillo.org/images/5/5e/Curso_de_Programacion_videojuegos_C++_Allegro3.pdf)
    
4.  Derego, L. (2015). C++ and SFML Game Tutorial. Lucasderego. Recuperado de: [https://lucasderego.wordpress.com/category/c-and-sfml-game-tutorial/](https://lucasderego.wordpress.com/category/c-and-sfml-game-tutorial/)
    
5.  Technologies, U. (2018). Rigidbody - Unity Manual. Unity. Recuperado de:  [https://docs.unity3d.com/es/2018.4/Manual/class-Rigidbody.html](https://docs.unity3d.com/es/2018.4/Manual/class-Rigidbody.html)
    
6.  Orozco, R.(2008) Videojuegos, C/C++ y SDL. Silo.tips. Recuperado de: [https://silo.tips/download/videojuegos-c-c-y-sdl](https://silo.tips/download/videojuegos-c-c-y-sdl)
    
7.  Soulié, J. (2007). C++ Language Tutorial. cplusplus.com. Recuperado de: [https://www.cplusplus.com/files/tutorial.pdf](https://www.cplusplus.com/files/tutorial.pdf)
    
8.  Gomila, L. (s.f). Sprites and textures. SFML. Recuperado de: [https://www.sfml-dev.org/tutorials/2.5/graphics-sprite.php](https://www.sfml-dev.org/tutorials/2.5/graphics-sprite.php)
    
9.  Adrian (2013) SFML 2: Elaborando un juego completo I. Genbeta. Recuperado de: [https://www.genbeta.com/desarrollo/sfml-2-elaborando-un-juego-completo](https://www.genbeta.com/desarrollo/sfml-2-elaborando-un-juego-completo)
    
10.  Schardon, L. (2020) Drawing Sprites with SFML & C++. GameDev academy. Recuperado de: [Drawing Sprites with SFML & C++ – GameDev Academy](https://gamedevacademy.org/sfml-cpp-sprites-tutorial/)
    
11.  Gomila, L. (s. f.). Playing sounds and music. (SFML / Learn / 2.5 Tutorials). Recuperado de: [https://www.sfml-dev.org/tutorials/2.5/audio-sounds.php](https://www.sfml-dev.org/tutorials/2.5/audio-sounds.php)
    
12.  Schardon, L. (2021) Best Beginner’s Online Coding Classes. GameDev academy. Recuperado de: [Best Beginner's Online Coding Classes [2021 Edition] (gamedevacademy.org)](https://gamedevacademy.org/best-online-coding-classes/)
    
13.  Gomila, L.(s.f). Position, rotation, scale: Transforming entities. SFML. Recuperado de: [https://www.sfml-dev.org/tutorials/2.5/graphics-transform.php](https://www.sfml-dev.org/tutorials/2.5/graphics-transform.php)
    
14.  Gautam, P.(2021) How to Create Pixel Art Backgrounds using Photoshop. GameDev academy. Recuperado de: [How to Create Pixel Art Backgrounds using Photoshop – GameDev Academy](https://gamedevacademy.org/pixel-art-photoshop-tutorial/)
    
15.  Gomila, L. (s.f). SFML and Visual Studio. SFML.Recuperado de: [https://www.sfml-dev.org/tutorials/2.5/start-vc.php](https://www.sfml-dev.org/tutorials/2.5/start-vc.php)
    
16.  Aseprite. (s.f). Aseprite Tutorials. Aseprite. Recuperado de: [https://www.aseprite.org/docs/tutorial/](https://www.aseprite.org/docs/tutorial/)
    
17.  Schardon, L. (2020) Free Course – Explore Game Maps with C++. Coding degree . Recuperado de:[Free Course – Explore Game Maps with C++ – Coding Degree](https://coding.degree/cpp-game-map-tutorial/)
    
18.  Zell, B., & M. (s. f.). Learning SFML. RipTutorial. Recuperado de: [https://riptutorial.com/Download/sfml.pdf](https://riptutorial.com/Download/sfml.pdf)
    
19.  Prisco, Jacopo. (2020) 40 años de Pac-Man, el ícono comegalletas que cambió la historia de los videojuegos, CNN. Recuperado de: [https://cnnespanol.cnn.com/2020/05/21/40-anos-de-pac-man-el-icono-comegalletas-que-cambio-la-historia-de-los-videojuegos/](https://cnnespanol.cnn.com/2020/05/21/40-anos-de-pac-man-el-icono-comegalletas-que-cambio-la-historia-de-los-videojuegos/)
    
20.  Cortijo, F. (s.f.)Programación Orientada a Objetos en C++. Curso de C++ Builder. Recuperado de: [https://elvex.ugr.es/decsai/builder/intro/5.html](https://elvex.ugr.es/decsai/builder/intro/5.html)
    
21.  . Olivares, L. (2008).Proyecto de Investigación: Métodos de Funciones de Base Radial para la Solución de EDP. Manual de Programación en Lenguaje C++. Recuperado de: [https://paginas.matem.unam.mx/pderbf/images/mprogintc++.pdf](https://paginas.matem.unam.mx/pderbf/images/mprogintc++.pdf)
    
22.  Alvarez, I. (2014) Introducción a la Programación Orientada a Objetos con C++. Universidad de Oviedo. Recuperado de: [http://isa.uniovi.es/~ialvarez/Curso/descargas/000-ProgramacionCpp.pdf](http://isa.uniovi.es/~ialvarez/Curso/descargas/000-ProgramacionCpp.pdf)
    
23.  Technologies, U. (2018). GameObject - Unity Manual. Unity. [https://docs.unity3d.com/es/2018.4/Manual/class-GameObject.html](https://docs.unity3d.com/es/2018.4/Manual/class-GameObject.html)
    
24.  Finochietto, J.(2010).Programación Orientada a Objetos en C++, UNC-CONICET. Recuperado de: [https://lc.fie.umich.mx/~rochoa/Manuales/C/POO.pdf](https://lc.fie.umich.mx/~rochoa/Manuales/C/POO.pdf)
    
25.  parzibyte. (2019).Clases y objetos en C++, Parzibyte's blog. Recuperado de: [https://parzibyte.me/blog/2019/06/19/clases-objetos-cpp/](https://parzibyte.me/blog/2019/06/19/clases-objetos-cpp/)



