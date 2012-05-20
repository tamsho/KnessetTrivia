//
//  AboutViewController.h
//  KnessetTrivia
//
//  Created by Stav Ashuri on 4/28/12.
//   
//

#import <UIKit/UIKit.h>

@interface AboutViewController : UIViewController {
    IBOutlet UILabel *highScoreLabel;
    IBOutlet UIView *highScoreBg;
    IBOutlet UISwitch *soundSwitch;
    IBOutlet UILabel *descriptionLabel;
}

@end
