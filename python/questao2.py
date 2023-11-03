def converter_temperatura(kelvin):
    celsius = kelvin - 273.15
    fahrenheit = (kelvin - 273.15) * 9/5 + 32
    print(f"Temperatura em Celsius: {celsius:.2f}")
    print(f"Temperatura em Fahrenheit: {fahrenheit:.2f}")

temperatura_kelvin = float(input("Digite a temperatura em Kelvin: "))
converter_temperatura(temperatura_kelvin)