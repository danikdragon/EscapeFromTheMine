# Зависимости проекта:

PaperZD - дополнение из библиотеки UE для работы с 2д графикой 

Проект был создан на версии UE 5.2.1

запускать проект нужно на самых минимальных настройках графики, это обязательно

# Управление:

a\d - лево\право

space - прыжок

ЛКМ - легкий удар 1 урон

ПКМ - тяжелый удар 2 урона

shift - выстрел 1-2 урона

tab - меню


# Предметы:

Монета статическая - расположена на карте и не имеет гравитацию при сборе счетчик монет пополняется

Монета динамическая - имеет вес и гравитацию, так же при подборе пополняет счетчик монет, 1 к 5 может выпасть из врага

Яблоко - зелье пополнения здоровья, при подборе дает +1 hp если hp максимальное не подбирается, 1 к 5 может выпасть из врага

Улучшение для лука - добавляет +1 к урону лука изначальный урон 1 и меняет модель стрелы


# Тригеры:

Тригер для мобов, если его касается моб который патрулирует, то он разворачивается

Тригер ловушки - когда игрок попадает на неё ему наносится урон и в зависимости от флага у ловушки проверяет и отталкивает в нужную сторону

    Флаги:
      - bottom trap: для ловушек что находятся на полу, персонажа толкает вверх иначе вниз
      - horizontal trap: если ловушка находится на стене, передает свое расположение персонажа и от этого выбирается в какую сторону будет отталкивать персонажа
      
Секретная зона - после того как персонаж задевает этот тригер, ему становиться видна засекреченная местность

Звуковые тригеры: всего их 2

1: отключает звук когда его задевают

2: включает звук когда его задевают


# Мобы:

Слизень: патрулирует территорию не атакует персонажа, наносит урон если заденет, изначально имеет 2хп

Орк: является боссом, имеет 15 хп и 2 тригера, 1 самый большой отвечает за погоню, если игрок в ней то он его преследует 2 тригер атаки, когда игрок заходит в данный тригер орк начинает атаковать, так же начинает преследовать если в него попали


# Скриншоты:

Босс:

![image](https://github.com/user-attachments/assets/22b12bf2-bbc3-4390-aaf1-1535014b12cc)

Слизень и вещи которые с него выпадают:

![image](https://github.com/user-attachments/assets/fb89edd5-f966-4108-a503-024ff2cb3560)

Предметы:

![image](https://github.com/user-attachments/assets/a0887b15-96df-4f49-a3d7-5dab5aaa8d56)

Стрелы:

![image](https://github.com/user-attachments/assets/c45a3f26-bd2e-4e01-831f-ba9ae583ed38)

Улучшение:

![image](https://github.com/user-attachments/assets/d3969b26-0627-4912-81ee-85f3dc3e0c23)

Тригеры звука:

![image](https://github.com/user-attachments/assets/f3fd4d40-888b-4be3-8ecb-44575da41584)

Уровень:

![image](https://github.com/user-attachments/assets/9f5fabf3-c23b-41b2-a55c-7519b19e50f7)

Тригер секретной комнаты:

![image](https://github.com/user-attachments/assets/f801205d-6412-4072-957d-41c20971d25b)

# Игровой интерфейс

![image](https://github.com/user-attachments/assets/997218bb-7f13-4edd-bca8-ddb1519fb546)

Меню

![image](https://github.com/user-attachments/assets/2e5384b4-169f-415b-9a16-0716ff70f1d0)
![image](https://github.com/user-attachments/assets/839917f4-66e4-424b-8423-be6f8703cdb5)
![image](https://github.com/user-attachments/assets/3d9d9d1f-51b6-4bd6-8b73-8587e824ea27)
