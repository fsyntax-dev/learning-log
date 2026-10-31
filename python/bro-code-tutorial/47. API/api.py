import requests

base_url = "https://pokeapi.co/api/v2/"

def get_pokemon(name):
    url = f"{base_url}pokemon/{name}"  # Removed extra slash
    response = requests.get(url)
    
    if response.status_code == 200:
        pokemon_data = response.json()
        return pokemon_data
    else:
        print(f"Failed to retrieve data: {response.status_code}")
        return None  # Explicitly return None in case of failure

pokemon_name = "pikachu"
pokemon_info = get_pokemon(pokemon_name)

if pokemon_info:
    print(pokemon_info["name"].capitalize())  # Fixed f-string issue
