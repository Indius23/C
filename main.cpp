#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

class Workout {
protected:
    std::string mType ;
    std::string mDuration;
public:
    Workout();
        Workout(const std::string& Type ,std::string Duration) {
        mDuration = Duration;
        mType = Type;
    }

    virtual void displayshortWorkout() const = 0;
    virtual void displaylongWorkout() const = 0;
};

class ChestWorkout : public Workout {
public:
    ChestWorkout(const std::string& Type ,const std::string& Duration) : Workout( Type , Duration ){}

    void displayshortWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about an hour. Are you ready?" << std::endl;
        std::cout << std:: endl ;
        sleep(3);
        std::cout << "PUSH-UPS:\n"
                     "Start with a classic exercise that targets the chest muscles. Place your hands slightly wider than shoulder-width apart and extend your legs behind you, supporting your body with your hands and toes. Lower your chest towards the ground by bending your elbows, then push back up to the starting position. Aim for 3 sets of 8 repetitions.\n"
                     "\n"
                     "DUMBBELL CHEST PRESS:\n"
                     "Lie on a flat bench or mat with a dumbbell in each hand, positioned at chest level. Press the dumbbells up towards the ceiling, fully extending your arms without locking the elbows. Slowly lower the dumbbells back down to the starting position. Perform 3 sets of 8 reps.\n"
                     "\n"
                     "DUMBBELL FLYES:\n"
                     "Lie on a flat bench or mat with a dumbbell in each hand. Start with your arms extended above your chest, palms facing each other. Lower the dumbbells out to the sides in a wide arc until you feel a stretch in your chest, then bring them back up to the starting position. Perform 3 sets of 8 reps.\n"
                     "\n"
                     "CHEST DIPS:\n"
                     " Find parallel bars or use a dip station. Hold yourself up with your arms fully extended and your body slightly leaning forward. Lower your body by bending your elbows until your upper arms are parallel to the ground or slightly below. Push yourself back up to the starting position. Aim for 3 sets of 6-8 reps.\n"
                     "\n";
                     sleep(3);
                     std::cout<<"Remember to warm up before starting the workout and cool down afterward. Additionally, it's essential to use weights that challenge you but allow you to maintain proper form throughout the exercises. If you're new to exercising or have any pre-existing medical conditions, it's always a good idea to consult with a healthcare professional before starting any new workout routine.";

    }
    void displaylongWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about 2 to 3 hours. In addition , we're going to add some triceps exercises in order to achive failure. Are you ready?" << std::endl;
        std::cout << std:: endl ;
        sleep(5);
        std::cout << "PUSH-UPS:\n"
                     "Start with a classic exercise that targets the chest muscles. Place your hands slightly wider than shoulder-width apart and extend your legs behind you, supporting your body with your hands and toes. Lower your chest towards the ground by bending your elbows, then push back up to the starting position. Aim for 4 sets of 12 repetitions.\n"
                     "\n"
                     "DUMBBELL CHEST PRESS:\n"
                     "Lie on a flat bench or mat with a dumbbell in each hand, positioned at chest level. Press the dumbbells up towards the ceiling, fully extending your arms without locking the elbows. Slowly lower the dumbbells back down to the starting position. Perform 4 sets of 12 reps.\n"
                     "\n"
                     "DUMBBELL FLYES:\n"
                     "Lie on a flat bench or mat with a dumbbell in each hand. Start with your arms extended above your chest, palms facing each other. Lower the dumbbells out to the sides in a wide arc until you feel a stretch in your chest, then bring them back up to the starting position. Perform 4 sets of 10 reps.\n"
                     "\n"
                     "CHEST DIPS:\n"
                     "Find parallel bars or use a dip station. Hold yourself up with your arms fully extended and your body slightly leaning forward. Lower your body by bending your elbows until your upper arms are parallel to the ground or slightly below. Push yourself back up to the starting position. Aim for 4 sets of 8 reps.\n"
                     "\n";
                     sleep(3);
                    std::cout << "Remember to warm up before starting the workout and cool down afterward. Don't take brakes longer than 2 minutes. Additionally, it's essential to use weights that challenge you but allow you to maintain proper form throughout the exercises. If you're new to exercising or have any pre-existing medical conditions, it's always a good idea to consult with a healthcare professional before starting any new workout routine.";
    }
};

class BackWorkout : public Workout {
public:
    BackWorkout(const std::string& Type ,const std::string& Duration) : Workout( Type , Duration ){}
    void displayshortWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about an hour. Are you ready?" << std::endl;
        std::cout << std:: endl ;
        sleep (3) ;
        std::cout << "BENT-OVER ROWS:\n"
                     "Hold a dumbbell in each hand, hinge forward at the hips, keeping your back flat and core engaged. With your palms facing in, pull the dumbbells up towards your chest, squeezing your shoulder blades together. Lower the weights back down with control. Aim for 3 sets of 8 reps.\n"
                     "\n"
                     "LAT PULLDOWNS:\n"
                     "Sit at a lat pulldown machine with your knees firmly positioned under the pads. Grasp the bar with a wide overhand grip, hands slightly wider than shoulder-width apart. Pull the bar down towards your upper chest while squeezing your shoulder blades. Slowly release the bar back to the starting position. Perform 3 sets of 8 reps.\n"
                     "\n"
                     "SINGLE-ARM DUMBBELL ROWS:\n"
                     "Place one knee and one hand on a bench, keeping your back parallel to the ground. Hold a dumbbell in your free hand, with your arm extended towards the floor. Pull the dumbbell up towards your waist, keeping your elbow close to your body, and squeeze your back muscles at the top. Lower the weight back down in a controlled manner. Do 3 sets of 6-8 reps on each side.\n"
                     "\n"
                     "SUPERMAN:\n"
                     "Lie face down on a mat with your arms extended overhead and your legs straight. Lift your chest, arms, and legs off the ground simultaneously, squeezing your back muscles. Hold this position for a few seconds, then lower back down. Repeat for 3 sets of 6 reps.\n"
                     "\n";
                     sleep(3);
                     std::cout << "Remember to warm up before starting any workout and listen to your body. If you have any pre-existing conditions or injuries, it's best to consult with a healthcare professional before attempting a new exercise routine.";;
    }
    void displaylongWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about 2 to 3 hours. In addition , we're going to add some biceps exercises in order to achive failure. Are you ready?" << std::endl;
        std::cout << std:: endl ;
        std::cout << "Bent-Over Rows: Hold a dumbbell in each hand, hinge forward at the hips, keeping your back flat and core engaged. With your palms facing in, pull the dumbbells up towards your chest, squeezing your shoulder blades together. Lower the weights back down with control. Aim for 4 sets of 12 reps.\n"
                     "\n"
                     "Lat Pulldowns: Sit at a lat pulldown machine with your knees firmly positioned under the pads. Grasp the bar with a wide overhand grip, hands slightly wider than shoulder-width apart. Pull the bar down towards your upper chest while squeezing your shoulder blades. Slowly release the bar back to the starting position. Perform 4 sets of 12 reps.\n"
                     "\n"
                     "Single-Arm Dumbbell Rows: Place one knee and one hand on a bench, keeping your back parallel to the ground. Hold a dumbbell in your free hand, with your arm extended towards the floor. Pull the dumbbell up towards your waist, keeping your elbow close to your body, and squeeze your back muscles at the top. Lower the weight back down in a controlled manner. Do 4 sets of 10 reps on each side.\n"
                     "\n"
                     "Superman: Lie face down on a mat with your arms extended overhead and your legs straight. Lift your chest, arms, and legs off the ground simultaneously, squeezing your back muscles. Hold this position for a few seconds, then lower back down. Repeat for 3 sets of 8 reps.\n"
                     "\n"
                     "Dumbbell Bicep Curls: Stand with a dumbbell in each hand, palms facing forward and arms fully extended by your sides. Keeping your elbows close to your body, curl the weights upward towards your shoulders while contracting your biceps. Slowly lower the weights back down to the starting position. Aim for 4 sets of 10 reps."
                     "\n"
                     "Preacher Curls: Sit on a preacher curl bench or use an incline bench at a slight angle. Rest your upper arms on the bench with your palms facing upward and hold a barbell or dumbbells. Curl the weight upward, focusing on contracting your biceps. Lower the weight back down with control. Perform 4 sets of 10 reps."
                     "\n"
                     "Remember to warm up before starting any workout and listen to your body. If you have any pre-existing conditions or injuries, it's best to consult with a healthcare professional before attempting a new exercise routine.";
    }
};

class LegsWorkout : public Workout {
public:
    LegsWorkout(const std::string& Type ,const std::string& Duration) : Workout( Type , Duration ){}

    void displayshortWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about an hour. Are you ready?" << std::endl;
        std::cout << std:: endl ;
        sleep(3);
        std::cout << "BODYWEIGHT SQUATS:\n"
                     "Stand with your feet shoulder-width apart. Lower your body by pushing your hips back and bending your knees, as if you're sitting back into a chair. Keep your chest up and your weight on your heels. Squat down until your thighs are parallel to the ground, then push through your heels to return to the starting position. Aim for 3 sets of 12 reps.\n"
                     "\n"
                     "WALKING LUNGES:\n"
                     "Take a step forward with your right foot and lower your body by bending both knees until your back knee nearly touches the ground. Push through your front heel to step forward with your left foot and repeat the lunge. Continue walking forward, alternating legs, for a total of 3 sets of 10 lunges on each leg.\n"
                     "\n"
                     "GLUTE BRIDGE:\n"
                     "Lie on your back with your knees bent and feet flat on the floor, hip-width apart. Place your arms by your sides. Push through your heels, engaging your glutes and hamstrings, to lift your hips off the ground until your body forms a straight line from your knees to your shoulders. Hold the bridge position for a few seconds, then lower your hips back down. Perform 3 sets of 10 reps."
                     "\n"
                     "LEG PRESS:\n"
                     "If you have access to a leg press machine, sit down and place your feet on the footplate shoulder-width apart. Push the weight away by extending your legs until they are straight but not locked. Slowly bend your knees and lower the weight back down. Perform 3 sets of 8 reps.";
    }
    void displaylongWorkout() const override {
        std::cout<< "For this type of workout, you will need to stay in the gym for about 2 to 3 hours. In addition , we're going to add some calves exercises in order to achive failure. Are you ready?" << std::endl;
        std::cout << std::endl;
        pthread_delay_np(reinterpret_cast<const timespec *>(1000));
        std::cout << "Bodyweight Squats: Stand with your feet shoulder-width apart. Lower your body by pushing your hips back and bending your knees, as if you're sitting back into a chair. Keep your chest up and your weight on your heels. Squat down until your thighs are parallel to the ground, then push through your heels to return to the starting position. Aim for 4 sets of 15 reps.\n"
                     "\n"
                     "Walking Lunges: Take a step forward with your right foot and lower your body by bending both knees until your back knee nearly touches the ground. Push through your front heel to step forward with your left foot and repeat the lunge. Continue walking forward, alternating legs, for a total of 4 sets of 12 lunges on each leg.\n"
                     "\n"
                     "Glute Bridge: Lie on your back with your knees bent and feet flat on the floor, hip-width apart. Place your arms by your sides. Push through your heels, engaging your glutes and hamstrings, to lift your hips off the ground until your body forms a straight line from your knees to your shoulders. Hold the bridge position for a few seconds, then lower your hips back down. Perform 4 sets of 12 reps."
                     "\n"
                     "Leg Press: If you have access to a leg press machine, sit down and place your feet on the footplate shoulder-width apart. Push the weight away by extending your legs until they are straight but not locked. Slowly bend your knees and lower the weight back down. Perform 4 sets of 10 reps."
                     "\n"
                     "Calf Raises: Stand with your feet hip-width apart, toes pointing forward. Raise your heels off the ground by pushing through the balls of your feet, and contract your calf muscles at the top. Hold for a moment, then lower your heels back down to the starting position. You can perform calf raises on the floor or on an elevated surface such as a step for an increased range of motion. Aim for 4 sets of 15-20 reps.\n"
                     "\n"
                     "Seated Calf Raises: Sit on a chair or bench with your feet flat on the ground and knees bent at a 90-degree angle. Place a weight or a dumbbell on top of your thighs, just above your knees. Raise your heels off the ground by pushing through the balls of your feet, contracting your calf muscles. Hold the top position for a moment, then lower your heels back down. Perform 4 sets of 12-15 reps.\n"
                     "\n"
                     "Jump Rope: Jumping rope is a great cardiovascular exercise that also targets the calf muscles. Start by holding the handles of a jump rope in each hand. Jump over the rope as it passes under your feet, using your calf muscles to push off the ground. You can vary the intensity by increasing your speed or adding double unders (two rotations of the rope per jump). Aim for 2 minutes of continuous jumping";
    }

};

class ArmsWorkout : public Workout {
public:
    ArmsWorkout(const std::string &Type, const std::string &Duration) : Workout(Type, Duration) {}

    void displayshortWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about an hour. Are you ready?\n";
        std::cout << std::endl;
        sleep(3);
        std::cout << "CLOSE GRIP BENCH PRESS:\n"
                     "Lie on a flat bench with your hands placed closer than shoulder-width apart.\n"
                     "Grip the barbell with an overhand grip.\n"
                     "Lower the barbell to your chest while keeping your elbows tucked in.\n"
                     "Push the barbell back up to the starting position by extending your arms.\n"
                     "Do 3 sets of 8 reps.\n"
                     "\n"
                     "OVERHEAD TRICEPS EXTENSION:\n"
                     "Stand or sit on a bench with a dumbbell in one hand.\n"
                     "Raise the dumbbell overhead, keeping your upper arm close to your ear.\n"
                     "Bend your elbow, lowering the dumbbell behind your head.\n"
                     "Extend your arm to raise the dumbbell back to the starting position.\n"
                     "Perform 3 sets of 8 reps on each arm.\n"
                     "\n"
                     "BARBELL BICEP CURLS:\n"
                     "Stand with your feet shoulder-width apart, holding a barbell with an underhand grip.\n"
                     "Keep your elbows close to your torso and curl the barbell up toward your chest.\n"
                     "Squeeze your biceps at the top of the movement, then slowly lower the barbell back to the starting position.\n"
                     "Aim for 3 sets of 8 reps.\n"
                     "\n"
                     "PREACHER CURLS:\n"
                     "Sit at a preacher curl bench and place your upper arms on the pad, allowing your arms to hang straight down.\n"
                     "Grasp an EZ-bar or dumbbells with an underhand grip.\n"
                     "Curl the weight up toward your shoulders while keeping your upper arms and elbows stationary.\n"
                     "Slowly lower the weight back down to the starting position.\n"
                     "Do 3 sets of 8 reps.\n";
        sleep(3);
                 std::cout <<    "Remember to maintain proper form throughout each exercise, and if possible, seek guidance from a fitness professional to ensure correct technique and prevent injury";

}

    void displaylongWorkout() const override {
        std::cout<< "For this type of workout, you will need to stay in the gym for about 2 to 3 hours. In addition , we're going to add some shoulders exercises in order to achieve failure. Are you ready?" << std::endl;
        std::cout << std::endl;
        sleep(5);
        std::cout << "CLOSE GRIP BENCH PRESS:\n"
                     "Lie on a flat bench with your hands placed closer than shoulder-width apart.\n"
                     "Grip the barbell with an overhand grip.\n"
                     "Lower the barbell to your chest while keeping your elbows tucked in.\n"
                     "Push the barbell back up to the starting position by extending your arms.\n"
                     "Do 4 sets of 12 reps.\n"
                     "\n"
                     "OVERHEAD TRICEP EXTENSION:\n"
                     "Stand or sit on a bench with a dumbbell in one hand.\n"
                     "Raise the dumbbell overhead, keeping your upper arm close to your ear.\n"
                     "Bend your elbow, lowering the dumbbell behind your head.\n"
                     "Extend your arm to raise the dumbbell back to the starting position.\n"
                     "Perform 4 sets of 12 reps on each arm.\n"
                     "\n"
                     "BARBELL BICEP CURLS:\n"
                     "Stand with your feet shoulder-width apart, holding a barbell with an underhand grip.\n"
                     "Keep your elbows close to your torso and curl the barbell up toward your chest.\n"
                     "Squeeze your biceps at the top of the movement, then slowly lower the barbell back to the starting position.\n"
                     "Aim for 4 sets of 10 reps.\n"
                     "\n"
                     "PREACHER CURLS:\n"
                     "Sit at a preacher curl bench and place your upper arms on the pad, allowing your arms to hang straight down.\n"
                     "Grasp an EZ-bar or dumbbells with an underhand grip.\n"
                     "Curl the weight up toward your shoulders while keeping your upper arms and elbows stationary.\n"
                     "Slowly lower the weight back down to the starting position.\n"
                     "Do 4 sets of 10 reps."
                     "\n"
                     "DUMBBELL LATERAL RAISES:\n"
                     "Stand with your feet shoulder-width apart, holding a dumbbell in each hand by your sides with your palms facing inward.\n"
                     "Raise your arms out to the sides until they are parallel to the ground.\n"
                     "Pause for a moment, then slowly lower the dumbbells back to the starting position.\n"
                     "Perform 4 sets of 10 reps."
                     "\n"
                     "ARNOLD PRESS:\n"
                     "Start by holding a pair of dumbbells at shoulder level with your palms facing your body and elbows bent.\n"
                     "Rotate your palms as you press the dumbbells overhead, so that your palms are facing forward at the top of the movement.\n"
                     "Reverse the motion, bringing the dumbbells back down to the starting position, and rotate your palms back toward your body.\n"
                     "Perform 4 sets of 10 reps."
                     "\n"
                     "OVERHEAD PRESS (BARBELL OR DUMBBELL):\n"
                     "Stand with your feet shoulder-width apart, holding a barbell or dumbbells at shoulder level with your palms facing forward.\n"
                     "Press the weight overhead by extending your arms, but do not lock out your elbows at the top.\n"
                     "Slowly lower the weight back down to shoulder level.\n"
                     "Aim for 4 sets of 10 reps.\n"
                     "\n";
        sleep(3);
                    std::cout<< "Remember to maintain proper form throughout each exercise, and if possible, seek guidance from a fitness professional to ensure correct technique and prevent injury";

    }

};

class CardioWorkout : public Workout {
public:
    CardioWorkout(const std::string& Type ,const std::string& Duration) : Workout( Type , Duration ){}

    void displayshortWorkout() const override {
        std::cout << "For this type of workout, you will need to stay in the gym for about an hour. Are you ready?" << std::endl;
        std::cout << std:: endl ;
 sleep(3);
        std::cout << "JUMPING JACKS:\n"
                     "Start with your feet together and arms by your sides.\n"
                     "Jump your feet out to the sides while raising your arms overhead.\n"
                     "Quickly return to the starting position by jumping your feet back together and lowering your arms.\n"
                     "Perform 30-60 seconds of jumping jacks.\n"
                     "\n"
                     "HIGH KNEES:\n"
                     "Stand with your feet hip-width apart.\n"
                     "Lift one knee up toward your chest as high as you can, while quickly switching to bring the other knee up.\n"
                     "Continue alternating knees at a quick pace, as if running in place.\n"
                     "Perform 30-60 seconds of high knees.\n"
                     "\n"
                     "MOUNTAIN CLIMBERS:\n"
                     "Start in a high plank position with your hands directly under your shoulders and your body in a straight line.\n"
                     "Drive one knee toward your chest, then quickly switch legs, bringing the other knee in.\n"
                     "Continue alternating legs in a running motion while maintaining a strong plank position.\n"
                     "Perform 30-60 seconds of mountain climbers.\n"
                     "\n"
                     "BURPEES:\n"
                     "Start in a standing position with your feet shoulder-width apart.\n"
                     "Lower yourself into a squat position and place your hands on the ground in front of you.\n"
                     "Kick your feet back into a plank position, then immediately jump your feet back up toward your hands.\n"
                     "Explosively jump up into the air, reaching your arms overhead.\n"
                     "Land softly and immediately lower back into a squat to start the next rep.\n"
                     "Perform 10-15 burpees.\n"
                     "\n"
                     "JUMP SQUATS:\n"
                     "Stand with your feet shoulder-width apart.\n"
                     "Lower into a squat position, then explosively jump up into the air.\n"
                     "Land softly and immediately lower back into a squat to start the next rep.\n"
                     "Perform 10-15 jump squats.\n"
                     "\n";

        sleep(3);
        std::cout << "Remember to warm up before starting the workout and cool down afterward.\n"
                     "Hydrate well, listen to your body, and modify or take breaks as needed.\n"
                     "This short cardio workout is intense and effective, but if you have any health concerns or are new to exercise, it's always a good idea to consult with a healthcare professional before starting a new fitness routine.\n";
    }
    void displaylongWorkout() const override {
        std::cout
                << "For this type of workout, you will need to stay in the gym for about 2 to 3 hours. If you want to lose weight, you must perform this workout that will kill your energy.\n"
                   " Are you ready?" << std::endl;
        sleep(6);
        std::cout << "RUNNING/JOGGING:\n"
                     "Go for a 20-30 minute run or jog at a comfortable pace. If you prefer, you can split it into intervals, such as running for 2-3 minutes and then jogging or walking for 1-2 minutes. Adjust the pace to match your fitness level.\n"
                     "\n"
                     "JUMP ROPE:\n"
                     "Jump rope continuously for 5-10 minutes. If you don't have a jump rope, mimic the motion by jumping in place, swinging your arms as if holding a rope.\n"
                     "\n"
                     "CYCLING:\n"
                     "If you have access to a stationary bike or outdoor bicycle, cycle at a moderate intensity for 20-30 minutes. Alternatively, you can simulate cycling by using a stationary bike machine at the gym.\n"
                     "\n"
                     "HIGH-INTENSITY INTERVAL TRAINING (HIIT):\n"
                     "Perform a HIIT workout for 15-20 minutes. This can include exercises like burpees, squat jumps, high knees, mountain climbers, or any other high-intensity bodyweight exercises. Alternate between 30 seconds of intense effort followed by 15-30 seconds of rest.\n"
                     "\n"
                     "STAIR CLIMBING:\n"
                     "Find a set of stairs (indoor or outdoor) and climb up and down for 10-15 minutes. This exercise is excellent for cardiovascular fitness and leg strength.";
        sleep(3);
        std::cout << "COOL-DOWN:\n"
                     "Finish your cardio workout with a 5-10 minute cool-down. Gradually reduce the intensity of your activity, allowing your heart rate to return to normal. You can perform light stretching exercises to help with muscle recovery and flexibility.\n"
                     "\n"
                     "Remember to listen to your body throughout the workout, stay hydrated, and modify the intensity or duration as needed. Consistency is key, so aim to incorporate this long cardio workout into your routine a few times a week to reap the benefits of improved cardiovascular fitness.";
    }
};

int main() {
    std::string Type , Duration ;
    std::cout << "~~~WELCOME TO MY PERSONAL WORKOUT APP~~~" << std::endl;
    sleep(2);
    std:: cout << "WHAT DO YOU WANT TO TRAIN TODAY?" << std::endl;
    sleep(2);
    std:: cout << "MY FITNESS APP HAS A LOT TO OFFER SUCH AS:" << std:: endl;
    std:: cout << "| CHEST | BACK | LEGS | ARMS | CARDIO | <-- Pick one:" << std::endl ;
    std::cin >> Type;
    sleep(2);
    std::cout << "HOW LONG THE TRAINING SESSION SHOULD BE?" << std:: endl;
    std:: cout << "SHORT or LONG?" << std::endl ;
    std::cin >> Duration ;
    //chest
    if (Type == "CHEST" || Type == "chest" || Type == "Chest") {
        if (Duration == "SHORT" || Duration == "short"|| Duration == "Short") {
            ChestWorkout( Type , Duration ).displayshortWorkout();
        }
        else
            ChestWorkout ( Type , Duration ).displaylongWorkout();
    }
    //legs
    if (Type == "LEGS" || Type == "legs"  || Type == "Legs") {
        if (Duration == "SHORT" || Duration == "short" || Duration == "Short") {
            LegsWorkout( Type , Duration ).displayshortWorkout();
        }
        else
            LegsWorkout ( Type , Duration ).displaylongWorkout();
    }
    //back
    if (Type == "BACK" || Type == "back" ||Type == "Back") {
        if (Duration == "SHORT" || Duration == "short" || Duration == "Short") {
            BackWorkout( Type , Duration ).displayshortWorkout();
        }
        else
            BackWorkout ( Type , Duration ).displaylongWorkout();
    }
    if (Type == "ARMS" || Type == "arms" || Type == "Arms") {
        if (Duration == "SHORT" || Duration == "short"|| Duration == "Short") {
            ArmsWorkout( Type , Duration ).displayshortWorkout();
        }
        else
            ArmsWorkout ( Type , Duration ).displaylongWorkout();
    }
    if (Type == "CARDIO" || Type == "Cardio" || Type == "cardio") {
        if (Duration == "SHORT" || Duration == "short" || Duration == "Short") {
            CardioWorkout( Type , Duration ).displayshortWorkout();
        }
        else
            CardioWorkout ( Type , Duration ).displaylongWorkout();
    }


    return 0;
}
