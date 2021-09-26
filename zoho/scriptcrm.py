from zohocrm import ZohoCRMRestClient
from zohocrm import ZohoCRMContact

client_id = '1000.CELMJKW2FZQDI335UV1NKQ6S7DR8GM'
client_secret = 'b41bb203f8742af102e5fddcd1907e76ff1e291b87'
redirect_uri = 'https://www.google.com'
grant_token = '1000.ce02e6ff9cfa52155a20474fef81854b.0c847f5fe3efdcdc14291bdc6e6f5680'
zoho_client = ZohoCRMRestClient(client_id, client_secret, redirect_uri)
zoho_client.api_base_url = 'https://accounts.zoho.com'
print(zoho_client)
oauth_access_token = zoho_client.generate_access_token(grant_token)
print(oauth_access_token)
contact = ZohoCRMContact(zoho_client)

contact.First_Name = "John"
contact.Last_Name = "Doe"
contact.Email = "email@example.com"