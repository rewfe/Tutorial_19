//
//  RecipeViewController.h
//  Tutorial_17
//
//  Created by Admin on 20.05.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (weak, nonatomic) NSString *recipeImageName;
- (IBAction)cancel:(id)sender;

@end
