//
//  ___FILENAME___
//  ___PACKAGENAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#import <UIKit/UIKit.h>

@class ___VARIABLE_classPrefix:identifier___FlipsideViewController;

@protocol ___VARIABLE_classPrefix:identifier___FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(___VARIABLE_classPrefix:identifier___FlipsideViewController *)controller;
@end

@interface ___VARIABLE_classPrefix:identifier___FlipsideViewController : UIViewController

@property (weak, nonatomic) id <___VARIABLE_classPrefix:identifier___FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
