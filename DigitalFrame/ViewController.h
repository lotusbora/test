//
//  ViewController.h
//  DigitalFrame
//
//  Created by 임근택 on 2017. 1. 30..
//  Copyright © 2017년 Brandon.G.Lim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController 

@property (nonatomic, strong) IBOutlet UIImageView *imgView;
@property (nonatomic, strong) IBOutlet UIButton *toggleButton;
@property (nonatomic, strong) IBOutlet UISlider *speedSlider;
@property (nonatomic, strong) IBOutlet UILabel *speedLabel;

-(IBAction)toggleAction:(id)sender;
-(IBAction)changeSpeedAction:(id)sender;

@end

