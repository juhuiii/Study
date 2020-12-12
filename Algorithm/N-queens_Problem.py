def nqueen(sol, N):
    global count
    if len(sol) == N: // 정답의 배열과 길이가 같아지면 sol을 출력함
        count += 1
        sol = list(map(lambda x: x+1, sol))
        print(count, " : ", end=" ")
        for k in range(1,len(sol)+1):
            if k==1:
               print("[<",k,",",sol[k-1],">", end=", ")
            elif k==len(sol):
                print("<",k,",",sol[k-1],">]")
            else:
                print("<",k,",",sol[k-1],">", end=", ")
        return 0
    arr = list(range(N)) // 0부터 N-1까지 구성된 배열
    for i in range(len(sol)):
        if sol[i] in arr: // 같은 열에 놓이는지 확인
            arr.remove(sol[i]) // 같은 열이라면 제외
        distance = len(sol) - i
        if sol[i] + distance in arr:// 대각선 상에 놓이는지 확인
            arr.remove(sol[i] + distance) // 대각선 상이라면 제외
        if sol[i] - distance in arr: // 반대 대각선 상에 놓이는지 확인
            arr.remove(sol[i] - distance) // 대각선 상이라면 제외
    if arr != []:
        for i in arr:
            sol.append(i) // arr의 요소를 sol배열에 저장
            nqueen(sol, N)
            sol.pop()
    else:
        return 0


count = 0
num = int(input())
for i in range(num):
    nqueen([i], num)
print("Total number : ", count)  // Total number 출력
if count == 0:
    print("No solution") // 4미만의 수에 대한 출력
