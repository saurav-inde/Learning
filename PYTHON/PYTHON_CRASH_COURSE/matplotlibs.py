import matplotlib.pyplot as plt

squares = [x**2 for x in range(1, 10)]
input_vals = [ y for y in range(1, 10)]
plt.style.use('seaborn-darkgrid')
fig, ax = plt.subplots()


ax.plot(input_vals, squares, linewidth =3)

ax.set_title("Square Numbers", fontsize = 14)
ax.set_xlabel("value")
ax.set_ylabel("Square of Value")
ax.tick_params(axis='both', labelsize = 10)
plt.show()