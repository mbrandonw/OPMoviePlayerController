#### OPMoviePlayerController

The `MPMoviePlayerController` is a no-frills class for dealing with movie assets in iOS. However, it uses the global `NSNotificationCenter` method for notifying interested parties of movie events, which can be cumbersome to use. The `OPMoviePlayerController` class is a simple subclass that translates those notifications into simple protocol/delegate methods.

```
-(id) init {
  if (! (self = [super init])) {
    return nil;
  }
  
  self.moviePlayer = OPMoviePlayerController.new;
  self.moviePlayer.delegate = self;
  
  return self;
}

-(void) moviePlayerPlaybackDidFinish:(OPMoviePlayerController*)moviePlayer {
  // sweet!
}
```
