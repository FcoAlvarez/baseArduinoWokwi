# Proyecto Básico de Arduino

Este repositorio contiene un proyecto básico de Arduino configurado con PlatformIO para desarrollo y Wokwi para simulación.

## Descripción

Este es un proyecto simple de Arduino que inicializa la comunicación serial e imprime mensajes en el monitor serial. El proyecto puede usarse como punto de partida para aplicaciones más complejas de Arduino.

## Requisitos de Hardware

- Placa Arduino (o compatible)
- Cable USB para programación

## Requisitos de Software

- PlatformIO IDE (o extensión PlatformIO para VS Code)
- Wokwi para simulación (opcional)

## Instrucciones de Instalación

1. Clona este repositorio en tu máquina local
2. Abre el proyecto en PlatformIO IDE
3. Conecta tu placa Arduino vía USB
4. Compila y carga el proyecto a tu placa

## Uso

Después de cargar el código a tu placa Arduino, abre el Monitor Serial con una velocidad de 9600 baudios para ver los mensajes de salida:
- "Iniciando Arduino...." se mostrará una vez al inicio
- "Loop..." se imprimirá cada segundo

## Estructura de Archivos

- `src/main.cpp`: Código principal de Arduino
- `platformio.ini`: Configuración de PlatformIO

## Simulación en Wokwi

Este proyecto también puede ser simulado usando Wokwi. Para simular:

1. Abre Wokwi
2. Crea un nuevo proyecto de Arduino
3. Copia el contenido de `main.cpp` en el sketch de Arduino
4. Ejecuta la simulación

## Licencia

Este proyecto es de código abierto y está disponible bajo la Licencia MIT.
