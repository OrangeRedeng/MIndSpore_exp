# MIndSpore_exp
## Задание к выполнению лабораторной работы №1
Mindspore
## Текст задания
Преобразовать нейросетевую модель в бинарный формат средствами MindSpore.
## Теоретическая часть:
MindSpore - современный открытый фреймворк для глубокого обучения, позволяющий работать с различными типами процессоров. Его экосистема включает компилятор, модуль для данных, инструменты визуализации и защиты информации. Собрав более 5500 компаний и 600 моделей, MindSpore активно применяется в индустрии и набирает популярность благодаря своей функциональности и масштабируемости.
MindSpore также включает в себя сверхлегкое решение для запуска и обучения моделей искусственного интеллекта на маломощных устройствах Интернета вещей.
По сравнению с мобильными устройствами, микроконтроллеры, обычно используемые в устройствах Интернета вещей имеют огранниченые вычислительные ресуры, а объем оперативной и постоянной памяти невелики. Для микроконтроллеров MindSpore Lite предоставляет ультралегкое решение для развертывания микро-ИИ.  Модели напрямую генерируются в виде облегченного кода. Сгенерированный микрокод прост для понимания, занимает меньше ОЗУ во время выполнения и имеет меньший размер. 
Создание модели для инференса или обучения с помощью микропроцессора включает в себя следующие четыре этапа: генерацию кода модели, получение библиотеки Micro lib, интеграцию кода, а также компиляцию и развертывание.
## Ход работы
### 0. Выполним подготовку. Сначала загрузим и соберём MindSpore_Lite из исходного кода https://gitee.com/mindspore/mindspore.
Создаем окружение с помощью conda:
```
conda create -n mindspore_py39 python3.9.11 -y
```
Клонируем репозиторий:
```
git clone https://gitee.com/mindspore/mindspore
```
Собираем MindSpore_lite из исходного кода:
```
bash build.sh -I x86_64 -j64
```
Скачаем нейросетевую модель ResNet-50 и сохраним в формате onnx:
```
python Download_and_convert.py
```
### 1. Сгенерируем код. Создадим конфигурационный микро файл, а затем используем его для конвертации с помощью converter_tool в исполняемый код:
```
/mindspore-lite-2.5.0-linux-x64/tools/converter/converter/converter_lite --fmk=ONNX --modelFile=/onnx/resnet.onnx --outputFile=/micro_resnet --configFile=micro.cfg
```
### 2. Скомпилируем код. Перейдем в папку с исполняемым кодом и скомилируем его:
```
cmake -DPKG_PATH=/mindspore-lite-2.5.0-linux-x64 ..
make
```
### 3. Выполним развертывание кода. Сохраним изображение в бинаром формате. Перейдем в папку с скомпилированным кодом и запустим его:
```
python convert_to_bin.py
./benchmark img.bin /micro_resnet/src/model0/net0.bin 
```
Запуск успешно выполнен!
## Вывод
В ходе выполнения лабораторной работы были освоены инструменты MindSpore для создания и запуска микро моделей нейронных сетей. нейросетевая модель Преобразована в бинарный формат. Данные знания будут в дальнейшем применены для запуска собственной нейронной сети на микроконтроллере Lichee Pi 4a.
