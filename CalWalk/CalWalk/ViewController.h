//
//  ViewController.h
//  CalWalk
//
//  Created by Simon Cao on 10/4/14.
//  Copyright (c) 2014 CalHacks. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <MKMapViewDelegate>
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UILabel *destinationLabel;
@property (weak, nonatomic) IBOutlet UILabel *distanceLabel;
@property (weak, nonatomic) IBOutlet UILabel *transportLabel;
@property (weak, nonatomic) IBOutlet UITextView *steps;
@property (weak, nonatomic) IBOutlet UITextField *timer;
- (IBAction)startWalk:(id)sender;

@property (strong, nonatomic) NSString *allSteps;

- (IBAction)addressField:(UITextField *)sender;



@end

