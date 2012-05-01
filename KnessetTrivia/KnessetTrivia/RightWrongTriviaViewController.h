//
//  RightWrongTriviaViewController.h
//  KnessetTrivia
//
//  Created by Stav Ashuri on 5/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeneralTriviaViewController.h"

typedef enum {
    kRightWrongQuestionTypeParty,
    kRightWrongQuestionTypeAge,
    questionOptionsCount
}RightWrongQuestionType;

@class KTMember, MemberCellViewController;

@interface RightWrongTriviaViewController : GeneralTriviaViewController {
    IBOutlet UILabel *questionLabel;
    IBOutlet UIView *bgView;
    IBOutlet UIButton *helpButton;
    
    KTMember *currentMember;
    RightWrongQuestionType currentQuestionType;
    NSObject *currentObject;
    
    MemberCellViewController *cellVC;
}

@property (nonatomic, retain) KTMember *currentMember;
@property (nonatomic, retain) NSObject *currentObject;

@property (nonatomic, retain) MemberCellViewController *cellVC;

@end