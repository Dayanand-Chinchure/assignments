import time, thread

def print_t(name1, name2):
    while 1:
        time.sleep(1)
        print name1
        print name2

thread.start_new_thread(print_t, ("Dayanand" ,1))
thread.start_new_thread(print_t, ("Santosh", 2))

while 1:
    pass
