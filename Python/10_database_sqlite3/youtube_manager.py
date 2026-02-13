import sqlite3

conn = sqlite3.connect("youtube_videos.db")

cursor = conn.cursor()

cursor.execute('''
    CREATE TABLE IF NOT EXISTS videos(
               id INTEGER PRIMARY KEY,
               name TEXT NOT NULL,
               time TEXT NOT NULL
               )
''')


def list_videos():
    cursor.execute("SELECT * FROM videos")
    for row in cursor.fetchall():
        print(row)

def add_video(name,time):
    cursor.execute("INSERT INTO videos(name,time) VALUES(?,?)", (name,time))
    conn.commit()

def update_video(videoId,new_name,new_time):
    cursor.execute("UPDATE videos SET name = ?, time = ? WHERE id = ?", (new_name,new_time,videoId))
    conn.commit()

def delete_video(videoId):
    cursor.execute("DELETE FROM videos WHERE id = ?", (videoId,))
    conn.commit()



def main():
    while True:
        print("\n Youtube manager app with DB")
        print("1. List all videos")
        print("2. Add videos")
        print("3. Update Videos")
        print("4. Delete Videos")
        print("5. Exit the app")

        choice = input("Enter your choice: ")

        match choice:
            case "1":
                list_videos()

            case "2":
                name = input("Enter video name: ")
                time = input("Enter video time: ")
                add_video(name,time)

            case "3":
                videoId = int(input("Enter the video ID you want to update"))
                name = input("Enter video name: ")
                time = input("Enter video time: ")
                update_video(videoId,name,time)

            case "4":
                videoId = int(input("Enter the video ID you want to delete: "))
                delete_video(videoId)

            case "5":
                break

            case _:
                print("Invalid choice")
    conn.close()
if __name__ == "__main__":
    main()