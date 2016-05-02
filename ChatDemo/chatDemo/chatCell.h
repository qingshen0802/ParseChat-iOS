//
//  chatCell.h
//  chatDemo
//
//  Created by Albert Chen on 6/11/14.
//  Copyright (c) 2014 Albert Chen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface chatCell : UITableViewCell
{
    IBOutlet UILabel *userLabel;
	IBOutlet UITextView *textString;
	IBOutlet UILabel *timeLabel;
}

@property (nonatomic,strong) IBOutlet UILabel *userLabel;
@property (nonatomic,strong) IBOutlet UITextView *textString;
@property (nonatomic,strong) IBOutlet UILabel *timeLabel;

@end
