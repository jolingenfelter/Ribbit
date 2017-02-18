//
//  InboxViewController.h
//  Ribbit
//
//  Copyright (c) 2013 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

// Bug #6: Update API used for playing videos
#import <AVKit/AVKit.h>
#import <AVFoundation/AVFoundation.h>

@class Message;

@interface InboxViewController : UITableViewController

@property (nonatomic, strong) Message *selectedMessage;

// Bug #6: Update API used for playing videos
@property (nonatomic, strong) AVPlayerViewController *moviePlayer;

- (IBAction)logout:(id)sender;

@end
