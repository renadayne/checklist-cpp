#include <iostream>
#include <vector>
#include <string>

// Observer interface
class Youtube {
    public:
        virtual void update(std::string videoName, int time) = 0;
};

// Subject class
class Channel {
    private:
        std::string videoName;
        int time;
        std::vector<Youtube *> subscribers;
    public:
        void subscribeChannel(Youtube* subscriber) {
            subscribers.push_back(subscriber);
        }

        void unsubscribeChannel(int pos) {
            // Implement
            subscribers.erase(subscribers.begin() + pos);

        }

        void notifysubscriber() {
            for(Youtube* subscriber : subscribers) {
                subscriber->update(videoName, time);
            }
        }

        void upNewVideo(std::string videoName, int time) {
            this->videoName = videoName;
            this->time = time;
            notifysubscriber();
        }   
};

// Concrete Observer - Observer class
class User : public Youtube {
    private:
        std::string userName;
    public:
        User(std::string userName) {
            this->userName = userName;
        }
        void update(std::string videoName, int time) {
            std::cout << "[" << userName << "]" << " New video from the channel you've subscribed to: "
            << videoName << ", Uploaded at " << time << " h." << std::endl;
        }
};



int main() {
    Channel RenaTheDeveloper;

    // Create user
    User user1("ThanhPGT");
    User user2("DungNT");
    User user3("TanCM");

    // User subscribe channel 
    RenaTheDeveloper.subscribeChannel(&user1);
    RenaTheDeveloper.subscribeChannel(&user2);
    std::cout << "--------------------------------------------" << std::endl;

    // Hard code new video updates - user3 not subscribe => only user 1 & 2 can receive notification
    RenaTheDeveloper.upNewVideo("Hello World!", 18);
    RenaTheDeveloper.upNewVideo("CMake Example", 2);
    std::cout << "--------------------------------------------" << std::endl;
    
    // user2 unsubsribe => only user 1 can receive notification 
    RenaTheDeveloper.unsubscribeChannel(1);
    RenaTheDeveloper.upNewVideo("Something", 3);
    return 0;
}