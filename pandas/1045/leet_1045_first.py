import pandas as pd


def find_customers(customer: pd.DataFrame, product: pd.DataFrame) -> pd.DataFrame:
    customer.drop_duplicates(inplace=True)
    pro = len(product)
    chk = customer.groupby('customer_id')['product_key'].count() == pro  # convert to boolean
    return chk[chk].index.to_frame(index=False)  # convert to single column , hwich leetcode want
