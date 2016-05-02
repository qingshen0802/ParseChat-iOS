//
//  chatCell.m
//  chatDemo
//
//  Created by Albert Chen on 6/11/14.
//  Copyright (c) 2014 Albert Chen. All rights reserved.
//

#import "chatCell.h"

@implementation chatCell
@synthesize userLabel, timeLabel, textString;


- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
