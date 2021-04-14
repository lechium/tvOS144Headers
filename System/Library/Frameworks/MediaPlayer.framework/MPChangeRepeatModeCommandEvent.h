/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent {

	BOOL _preservesRepeatMode;
	long long _repeatType;

}

@property (nonatomic,readonly) long long repeatType;                  //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,readonly) BOOL preservesRepeatMode;              //@synthesize preservesRepeatMode=_preservesRepeatMode - In the implementation block
-(BOOL)preservesRepeatMode;
-(long long)repeatType;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
@end
