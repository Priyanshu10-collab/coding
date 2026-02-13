import requests

def fetch_random_quotes():
    url = "https://api.freeapi.app/api/v1/public/quotes/quote/random"
    response = requests.get(url)
    data = response.json()

    if data["success"] and "data" in data:
        quote_data = data["data"]
        author = quote_data["author"]
        content = quote_data["content"]

        return content, author
    else:
        raise Exception("Failed to fetch random quote data.")


def main():
    try:
        content, author = fetch_random_quotes()
        print(f"Quote: {content} \n Author: {author}")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()