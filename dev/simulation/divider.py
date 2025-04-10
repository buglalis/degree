import numpy as np
import matplotlib.pyplot as plt

# Входное напряжение
Vin = 10  # Вольт

# Диапазон сопротивлений R1 и R2
R1_values = np.linspace(1, 10000, 500)  # Ом
R2 = 1000  # Ом, фиксированное значение

Vout_values = Vin * (R2 / (R1_values + R2))

plt.figure(figsize=(10, 6))
plt.plot(R1_values, Vout_values, label=f'R2 = {R2} Ом', color='blue')
plt.title('Симуляция делителя напряжения')
plt.xlabel('R1 (Ом)')
plt.ylabel('Vout (Вольт)')
plt.grid(True)
plt.legend()
plt.show()
