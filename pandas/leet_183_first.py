import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:

    result = pd.merge(customers,orders,left_on = 'id', right_on='customerId' ,how = 'left',suffixes=('_c','_o'))


    result = result[result['customerId'].isna()]

    result = result[['name']].rename(columns={'name':'Customers'})

    return pd.DataFrame(result)
    
