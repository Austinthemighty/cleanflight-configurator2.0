//
//  DetailViewController.h
//  CleanFlight
//
//  Created by Austin Chopra on 9/23/16.
//  Copyright © 2016 Clean-Flight. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

