  MaxNutrientValue(n，v，p，M，x)
    1  for i＝0  to n
    2  nv[i][0] ＝ 0
    3  for j＝1 to M
    4  nv[0][j]＝0
    5  for i＝1 to n
    6  for j＝1 to M
    7  if j＜p[i]  //若食物mi不能加入到套餐中
    8  nv[i][j] ＝  nv[i-1][j]
    9  else if  nv[i-1][j]≥nv[i-1][j-p[i]]+v[i]  
    10  nv[i][j]＝  nv[i-1][j]
    11  else
    12  nv[i][j]＝  nv[i-1][j-p[i]]  +  v[i]
    13  j ＝ M
    14  for i＝n downto 1
    15  if nv[i][j]＝nv[i-1][j] 
    16  x[i] ＝ 0
    17  else
    18  x[i] ＝ 1
    19    j＝j-p[i]
    20  return x and nv[n][M]