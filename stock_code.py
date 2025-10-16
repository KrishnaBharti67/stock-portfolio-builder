import numpy as np
import pandas as pd

import xlsxwriter
import math
import yfinance as yf


stocks=pd.read_csv(r"C:\Users\Krishna bharti\OneDrive\Desktop\isthis C chat\sp_500_stocks.csv",header=None)

symbols=stocks[0].tolist()



my_columns=['Symbol','Stock Price','Market Capitalization','Number of shares to buy']
final_Dataframe=pd.DataFrame(columns=my_columns)



for i in symbols[:25]:
    try:
        data=yf.Ticker(i)
        information=data.info
        final_Dataframe=final_Dataframe._append(
            pd.Series(
                [
                    i,information.get('regularMarketPrice',0),information.get('marketCap','N/A'),'N/A'
                ],index=my_columns
            ),ignore_index=True
        )
    except Exception as e:
        print(f"Error finding {i}:{e}")
        final_Dataframe.loc[len(final_Dataframe)] = [i,0,'N/A','N/A']


try:
    portfolio_size=float(input("Enter portfolio size:"))
except ValueError:
    print("Enter valid portfolio size(in numbers)")
    portfolio_size=float(input("Enter portfolio size:"))

position_size=portfolio_size/len(final_Dataframe.index)

for idx,stockprice in enumerate(final_Dataframe['Stock Price']):
    if (stockprice==0):
        no_of_shares=0
    else:
        no_of_shares=math.floor(position_size/stockprice)
    final_Dataframe.loc[idx,'Number of shares to buy']=no_of_shares
print(final_Dataframe)

writer=pd.ExcelWriter('trades.xlsx',engine='xlsxwriter')
final_Dataframe.to_excel(writer,'TROOOOOOOOOOOM',index =False)

#formatting excel
background_color="#6194B4"
font_color="#E7E1BD"

string_format=writer.book.add_format(
    {
        'font_color':font_color,
        'bg_color':background_color,
        'border':1
        
    }
)
dollar_format=writer.book.add_format(
    {
        'num_format':'$0.00',
        'font_color':font_color,
        'bg_color':background_color,
        'border':1
        
    }
)
integer_format=writer.book.add_format(
    {
        'num_format':'0',
        'font_color':font_color,
        'bg_color':background_color,
        'border':1
        
    }
)

writer.sheets['TROOOOOOOOOOOM'].set_column('A:A',10,string_format)
writer.sheets['TROOOOOOOOOOOM'].set_column('B:B',20,dollar_format)
writer.sheets['TROOOOOOOOOOOM'].set_column('C:C',20,dollar_format)
writer.sheets['TROOOOOOOOOOOM'].set_column('D:D',20,integer_format)
writer.close()