#include <STSL/RJRobot.h>

int driveDistance(double inches, RJRobot& robot) {
    int k = 165; 
    robot.setDriveMotors(0.26, -0.25);
    int bruh = inches * k;
    robot.wait(std::chrono::milliseconds(bruh));
    robot.stopMotors();
    return 0;
}

int turn (double angle, RJRobot& robot) {
    int scal = 20;
    robot.setDriveMotors(0.26, 0.25);
    int scale = angle * scal;
    robot.wait(std::chrono::milliseconds(scale));
    robot.stopMotors();
    return 0;
}

int main()
{
    RJRobot robot; //Initialize a RJ Robot
    
    /*for (int i=0; i<4; i++) {
        robot.setDriveMotors(0.5, -0.5); //Drive both robot motors forward at max speed
        robot.wait(500ms); //Wait for 2000 milliseconds (2 seconds)
        robot.stopMotors();
        robot.wait(2500ms);
        robot.setDriveMotors(0.5,0.5);
        robot.wait(100ms);
        robot.stopMotors();
        robot.wait(250ms);
    }
    robot.stopMotors(); //Stop the motors*/
    
    //driveDistance(6, robot);
    turn(90, robot);    
    
    return 0;
}

