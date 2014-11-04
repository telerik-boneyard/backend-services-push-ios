//
//  EVViewController.m
//  PushNotificationsSample
//
//  Copyright (c) 2014 Telerik. All rights reserved.
//

#import "EVViewController.h"
#import <EverliveSDK/EverliveSDK.h>

@interface EVViewController ()
@property (strong, nonatomic) IBOutlet UILabel *infoLabel;

@end

@implementation EVViewController

- (IBAction)register:(id)sender {
    
    NSDictionary *customParams = [NSDictionary dictionaryWithObjectsAndKeys:@"Palo Alto",@"City", nil];
    
    [[Everlive sharedInstance]registerDeviceWithParameters:customParams block:^(BOOL success, NSError *error) {
        if (error != nil) {
            [self.infoLabel setText:error.localizedDescription];
        } else {
            [self.infoLabel setText:@"Your device is now registered and ready to receive push notifications."];
        }
    }];
}
- (IBAction)unregister:(id)sender {
    
    [[Everlive sharedInstance]removeDevice:^(BOOL success, NSError *error) {
        if (error != nil) {
            [self.infoLabel setText:error.localizedDescription];
        } else {
            [self.infoLabel setText:@"You have unregistered your device."];
        }
    }];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
