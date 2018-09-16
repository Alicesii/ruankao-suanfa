
  -SHOPPINGMALL (W, n)
        D(0) = W
         for   k=1 to n
           for i = 1 to n
              for j = 1 to n
    
                    (2)  
                 else
                     (3)  
        for i = 1 to n
           SP [i] = 0
           for j = 1 to n
                (4)    
          min_SP = SP[i]
          min_v=1   
         for i = 2 to n
           if min_SP ＞ SP[i]
               min_SP = SP[i]
              min_v = i
        return min_v;