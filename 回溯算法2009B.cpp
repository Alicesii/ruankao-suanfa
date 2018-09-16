 BKNAP(W，n，w，v，fw，fp，x)
      cw←cp←0
        k←1  
      fp←-1
      while true
        while  k≤n and cw+w[k]  ≤W do
               cw←cw+w[k]
              cp←cp十v[k]
              Y[k]←l
               k←k+1
         if k＞n then
              if fp＜cp then
                    fp←cp
                    fw←cw
                   k←n
                    X←Y
         else Y(k)←0
         while  BOUND(cp，cw，k，W)  ≤  fp  do
           while k≠0 and Y(k)≠1 do
                k←k-1  
            if k=0 then return
            Y[k]←0
           cw←cw-w[k]
           cp←cp-v[k]
             k←k+1 