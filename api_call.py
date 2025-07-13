import requests

api_key = "2d9d965548ff1bd3e65ffea6"
currency = "USD"

url = f"https://v6.exchangerate-api.com/v6/{api_key}/latest/{currency}"


response = requests.get(url)

# Get the entire JSON response as a Python dict
data = response.json()

# Print the entire JSON in readable format
import json
with open('data.json', 'w') as f:
    json.dump(data, f, indent=4)
print(json.dumps(data, indent=4))