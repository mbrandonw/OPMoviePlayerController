//
//  OPMoviePlayerController.h
//  Kickstarter
//
//  Created by Brandon Williams on 7/7/14.
//  Copyright (c) 2014 Kickstarter. All rights reserved.
//

#import <MediaPlayer/MediaPlayer.h>

@class OPMoviePlayerController;

@protocol OPMoviePlayerControllerDelegate <NSObject>
@optional
-(void) moviePlayerDurationAvailable:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerMediaTypesAvailable:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerNaturalSizeAvailable:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerDidEnterFullscreen:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerDidExitFullscreen:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerIsAirPlayVideoActiveDidChange:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerLoadStateDidChange:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerNowPlayingMovieDidChange:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerPlaybackDidFinish:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerPlaybackStateDidChange:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerScalingModeDidChange:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerThumbnailImageRequestDidFinish:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerWillEnterFullscreen:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerWillExitFullscreen:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerSourceTypeAvailable:(OPMoviePlayerController*)moviePlayer;
-(void) moviePlayerReadyForDisplayDidChange:(OPMoviePlayerController*)moviePlayer;
@end

@interface OPMoviePlayerController : MPMoviePlayerController

@property (nonatomic, weak) id<OPMoviePlayerControllerDelegate> delegate;

@end
