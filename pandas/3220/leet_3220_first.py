import pandas as pd

def sum_daily_odd_even(transactions: pd.DataFrame) -> pd.DataFrame:
    transactions['even_sum'] = transactions['amount'].where(transactions['amount']%2==0)
    transactions['odd_sum'] = transactions['amount'].where(transactions['amount']%2==1)
    result = transactions.groupby('transaction_date', as_index = False)[['odd_sum','even_sum']].sum()
    return result.sort_values('transaction_date')