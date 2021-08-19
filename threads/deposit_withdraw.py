


import threading
import time
deposit = 100

lock = threading.Lock()
def add_profit()->None:
    global deposit
    for i in range(1000000):
        lock.acquire()
        deposit = deposit + 10
        lock.release()
def withdraw()->None:
    global deposit
    for i in range(1000000):
        lock.acquire()
        deposit = deposit - 10
        lock.release()

task1 = threading.Thread(target=add_profit)

task2 = threading.Thread(target=withdraw)

task1.start()

task2.start()
task1.join()

task2.join()

print(deposit)

