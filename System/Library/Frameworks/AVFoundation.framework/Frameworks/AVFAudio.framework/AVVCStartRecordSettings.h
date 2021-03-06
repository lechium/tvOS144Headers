/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AVVCStartRecordSettings : NSObject {

	BOOL _skipAlert;
	unsigned long long _streamID;
	unsigned long long _startHostTime;
	long long _startAlert;
	long long _stopAlert;
	long long _stopOnErrorAlert;

}

@property (assign,nonatomic) unsigned long long streamID;                   //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) unsigned long long startHostTime;              //@synthesize startHostTime=_startHostTime - In the implementation block
@property (assign,nonatomic) long long startAlert;                          //@synthesize startAlert=_startAlert - In the implementation block
@property (assign,nonatomic) long long stopAlert;                           //@synthesize stopAlert=_stopAlert - In the implementation block
@property (assign,nonatomic) long long stopOnErrorAlert;                    //@synthesize stopOnErrorAlert=_stopOnErrorAlert - In the implementation block
@property (assign,nonatomic) BOOL skipAlert;                                //@synthesize skipAlert=_skipAlert - In the implementation block
-(long long)stopOnErrorAlert;
-(long long)stopAlert;
-(long long)startAlert;
-(unsigned long long)streamID;
-(BOOL)skipAlert;
-(unsigned long long)startHostTime;
-(void)setStreamID:(unsigned long long)arg1 ;
-(void)setStartAlert:(long long)arg1 ;
-(void)setStopAlert:(long long)arg1 ;
-(void)setStopOnErrorAlert:(long long)arg1 ;
-(id)initWithStreamID:(unsigned long long)arg1 atStartHostTime:(unsigned long long)arg2 ;
-(void)setStartHostTime:(unsigned long long)arg1 ;
-(void)setSkipAlert:(BOOL)arg1 ;
@end

