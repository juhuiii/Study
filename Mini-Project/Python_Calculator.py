from tkinter import *

window = Tk()
window.title("Calculator")
ent = Entry(window, width=33, bg="green") # 숫자 출력
ent.grid(row=0, column=0, columnspan=5) # columnspan = 셀 병합

buttons=[
    '7', '8', '9', '/', 'C',
    '4', '5', '6', '*', ' ',
    '1', '2', '3', '-', ' ',
    '.', '0', '=', '+', ' ' ] # 숫자 입력

def click(btn):
    if btn == "=" :
        result = eval(ent.get())
        s = str(result)
        ent.insert(END, "=" + s)
    elif btn == "C" :
        ent.delete(0, END)
    else:
        ent.insert(END, btn)
    
row_index = 1 # 행 index ⇒ Entry 1칸 띄기
col_index = 0 # 열 index
for num in buttons: # 숫자 버튼 생성
    def process(t=num):
        click(t)
        
    Button(window, text=num, width=5, command=process).grid(row=row_index, column=col_index)
    col_index += 1
    if col_index > 4:
        row_index += 1
        col_index = 0


