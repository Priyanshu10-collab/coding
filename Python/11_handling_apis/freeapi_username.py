import requests

def fetch_random_user():
    url = "https://api.freeapi.app/api/v1/public/randomusers/user/random"
    response = requests.get(url)
    data = response.json()

    if data["success"] and "data" in data:
        user_Data = data["data"]
        user_name = user_Data["login"]["username"]
        country = user_Data["location"]["country"]
        user_email = user_Data["email"]

        return user_name, country, user_email
    else:
        raise Exception("Failed to fetch random user data.")




def main():
    try:
        userName, country, email = fetch_random_user()
        print(f"Username: {userName} \n Country: {country} \n Email: {email}")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()