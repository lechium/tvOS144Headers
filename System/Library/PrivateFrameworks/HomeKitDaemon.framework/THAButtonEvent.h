/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class THAButton;

@interface THAButtonEvent : NSObject {

	THAButton* _button;
	unsigned long long _state;
	double _timestamp;

}

@property (nonatomic,retain) THAButton * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(THAButton *)button;
-(void)setButton:(THAButton *)arg1 ;
-(id)serialize;
@end

