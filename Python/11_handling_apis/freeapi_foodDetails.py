import requests
def  fetch_meals_data():
    url = "https://api.freeapi.app/api/v1/public/meals?page=1&limit=10&query=rice"
    response = requests.get(url)
    data = response.json()

    if data["success"] and "data" in data:
        meals_data = data["data"]["data"]
        first_meal = meals_data[0]
        foodName = first_meal["strMeal"]
        category = first_meal["strCategory"]
        YoutubeLink = first_meal["strYoutube"]

        return foodName, category, YoutubeLink
    else:
        raise Exception("Failed to fetch food data.")


def main():
    try:
        foodName, category, YoutubeLink = fetch_meals_data()
        print(f"Food Name: {foodName} \n Category: {category} \n Youtube Link: {YoutubeLink}")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()