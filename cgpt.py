import requests
import json

url = "https://apigw.parimatch.com/prematch-service/v3/events/line?sport=cricket"

headers = {
    "User-Agent": "Mozilla/5.0",
    "Accept": "application/json"
}

response = requests.get(url, headers=headers)

if response.status_code == 200:
    data = response.json()
    with open("cricket_odds.json", "w", encoding="utf-8") as f:
        json.dump(data, f, indent=2, ensure_ascii=False)
    print("✅ Odds saved to cricket_odds.json")
else:
    print(f"❌ Failed with status code: {response.status_code}")
