for i in range(int(input())):
     list = []
     for j in range(int(input())): list.append(int(input()))
     sorted = True
     for k in range(1,len(list)): 
         if(list[k]<list[k-1]): sorted = False; break
     if(sorted): print("YES")
     else: 
         unsorted = False
         for k in range(1,len(list)): 
              if(list[k]>list[k-1]): unsorted = True; break
         if(unsorted): print("NO")
         else: print("YES")
