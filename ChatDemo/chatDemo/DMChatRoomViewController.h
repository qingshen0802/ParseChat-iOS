//
//  DMChatRoomViewController.h
//  chatDemo
//
//  Created by Albert Chen on 6/11/14.
//  Copyright (c) 2014 Albert Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "chatCell.h"
#import "Reachability.h"

@interface DMChatRoomViewController : UIViewController <UITextFieldDelegate,UITableViewDelegate, UITableViewDataSource,PF_EGORefreshTableHeaderDelegate>
{
    UITextField             *tfEntry;
    IBOutlet UITableView    *chatTable;
	NSMutableArray          *chatData;
    PF_EGORefreshTableHeaderView *_refreshHeaderView;
    BOOL                    _reloading;
    NSString                *className;
    NSString                *userName;
}

@property(nonatomic, strong) IBOutlet UITextField *tfEntry;
@property (nonatomic, retain) UITableView *chatTable;
@property (nonatomic, retain) NSMutableArray *chatData;

-(void) registerForKeyboardNotifications;
-(void) freeKeyboardNotifications;
-(void) keyboardWasShown:(NSNotification*)aNotification;
-(void) keyboardWillHide:(NSNotification*)aNotification;

- (void)loadLocalChat;

- (NSString *)stringFromStatus:(NetworkStatus )status;
-(void)presentChatNameDialog;
@end
