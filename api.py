import json
from urllib.request import urlopen

with urlopen("http://127.0.0.1:8000/users/") as response:
    source = response.read()

data = json.loads(source)
l = len(data)


# print(json.dumps(data, indent=2))

# usd_rates = dict()

for i in range(0,l):
    name = data[i]['email']
    print(name)
# print(50 * float(usd_rates['USD/INR']))