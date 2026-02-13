from pymongo import MongoClient

client = MongoClient("mongodb+srv://youtubePython:youtubePythonUser@cluster0.a1fwj.mongodb.net/youtubeManger",
                     tlsAllowInvalidCertificates=True)

print(client)
db = client["youtubeManger"]
video_collection  = db["videos"]



def list_video():
    print("\n")
    print("*" * 70)
    for video in video_collection.find():
        print(f" ID: {video['_id']} |{video['name']} | {video['time']}")

def add_video(name, time):
    video_collection.insert_one({"name": name, "time": time})

def update_video(videoId, name, time):
    video_collection.update_one({"_id": videoId}, {"$set": {"name": name, "time": time}})

def delete_video(videoId):
    video_collection.delete_one({"_id": videoId})



def main():
    while True:
        print("\n Youtube Manager | choose an option")
        print("1. List all youtube videos")
        print("2. Add a youtube video")
        print("3. Update a youtube video details")
        print("4. Delete a youtube video")
        print("5. Exit the app")

        choice = input("Enter your choice: ")

        match choice:
            case "1":
                list_video()
            case "2":
                name = input("Enter video name: ")
                time = input("Enter video time: ")
                add_video(name, time)

            case "3":
                videoId = input("Enter the video ID you want to update: ")
                name = input("Enter the updated video name: ")
                time = input("Enter the updated video time: ")
                update_video(videoId, name, time)

            case "4":
                videoId = input("Enter the video ID you want to delete: ")
                delete_video(videoId)

            case "5":
                break

            case _:
                print("Invalid choice")



if __name__ =="__main__":
    main()