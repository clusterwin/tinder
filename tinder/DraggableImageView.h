//
//  DraggableImageView.h
//  tinder
//
//  Created by Prasanth Guruprasad on 11/19/15.
//  Copyright © 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DraggableImageView : UIView
@property (strong, nonatomic) IBOutlet UIImageView *profileImageView;
- (void) reset;
@end
