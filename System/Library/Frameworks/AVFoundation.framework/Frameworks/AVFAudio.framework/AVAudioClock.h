/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(id)init;
-(void)dealloc;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AVAudioTime *)currentTime;
-(AudioTimeStamp)currentAudioTimeStamp;
-(long long)currentIONumberFrames;
-(id)awaitIOCycle:(unsigned*)arg1 ;
@end
