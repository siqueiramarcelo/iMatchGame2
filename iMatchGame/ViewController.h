//
//  ViewController.h
//  iMatchGame
//
//  Created by Marcelo Siqueira on 30/08/17.
//  Copyright © 2017 Marcelo Siqueira. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>

@interface ViewController : UIViewController <

GKGameCenterControllerDelegate,
UIActionSheetDelegate

>

@property (weak, nonatomic) IBOutlet UIButton *restartButton;
@property (weak, nonatomic) IBOutlet UIButton *gameCenterButton;

@property (weak, nonatomic) IBOutlet UILabel *timeDisplay;
@property (weak, nonatomic) IBOutlet UILabel *pointsDisplay;

@property (strong, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) int scoreValueNow;

- (IBAction)restartGame:(id)sender;
- (IBAction)showGameCenter:(id)sender;

@end

