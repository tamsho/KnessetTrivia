//
//  KTComitteeMeetings.h
//  KnessetTrivia
//
//  Created by Stav Ashuri on 4/29/12.
//   
//

#import <Foundation/Foundation.h>

@interface KTComitteeMeetings : NSObject {
    NSArray *all;
    NSArray *first;
    NSArray *second;
}

@property (nonatomic, retain) NSArray *all;
@property (nonatomic, retain) NSArray *first;
@property (nonatomic, retain) NSArray *second;

@end
