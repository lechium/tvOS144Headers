/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand {

	NSArray* _preloadedSessions;

}

@property (nonatomic,copy) NSArray * preloadedSessions;              //@synthesize preloadedSessions=_preloadedSessions - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreloadedSessions:(NSArray *)arg1 ;
-(NSArray *)preloadedSessions;
@end

